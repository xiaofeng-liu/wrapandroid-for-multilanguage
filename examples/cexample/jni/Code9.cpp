#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

static void SRPAPI myView_onDraw(void *Object,VS_OBJPTR canvas)
{
	SRPInterface -> ScriptCall(Object,NULL,"onSuperDraw","(o)",canvas);	
    void *paint = SRPInterface->MallocObjectL(&VSOBJID_PaintClass,0,NULL);
    void *font = SRPInterface->MallocObjectL(&VSOBJID_TypefaceClass,0,NULL);
    SRPInterface -> ScriptCall(font,NULL,"create","(si)","serif",1);
    SRPInterface -> ScriptCall(paint,NULL,"setColor","(i)",0xFFFF0000);
    SRPInterface -> ScriptCall(paint,NULL,"setTypeface","(o)",font);    
    SRPInterface -> ScriptCall(paint,NULL,"setTextSize","(i)",22);    
    SRPInterface -> ScriptCall(canvas,NULL,"drawText","(siio)","hello world",0,30,paint);    
    SRPInterface -> FreeObject(paint);
    SRPInterface -> FreeObject(font);
    return;    
}

VS_BOOL StarCoreService_Init(class ClassOfStarCore *starcore)
{
	class ClassOfBasicSRPInterface *BasicSRPInterface;
	
	//--init star core
	BasicSRPInterface = starcore ->GetBasicInterface();	
	SRPInterface = BasicSRPInterface ->GetSRPInterface(BasicSRPInterface->QueryActiveService(NULL),"","");
	
	void *ActivityClass;
	ActivityClass = SRPInterface -> GetObjectEx(NULL,"ActivityClass");
	StarActivity = (void *)SRPInterface -> ScriptCall(ActivityClass,NULL,"getCurrent","()O");
	SRPInterface -> Print("Get Main Activity = %s", SRPInterface -> GetName(StarActivity));	
	
	//--create AbsoluteLayout        
    void *MyLayout = SRPInterface->MallocObject(StarActivity,VSATTRINDEX_ACTIVITYCLASS_VIEWGROUPQUEUE,&VSOBJID_AbsoluteLayoutClass,0,NULL);
    
    void *myView = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_ACTIVITYCLASS_VIEWQUEUE,&VSOBJID_ViewClass,0,NULL);
    SRPInterface -> CreateOVLFunction(myView,&VSFUNCID_ViewClass_onDraw,(void *)myView_onDraw,NULL);
    SRPInterface -> ScriptCall(myView,NULL,"setAbsoluteLayoutParams","(iiii)",500,300,10,10);
	
	return VS_TRUE;
}

void StarCoreService_Term(class ClassOfStarCore *starcore)
{
	SRPInterface -> Release();
	return;
}