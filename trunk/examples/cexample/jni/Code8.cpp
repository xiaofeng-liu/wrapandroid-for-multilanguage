#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

static void *mDrawable;

static void SRPAPI myView_onDraw(void *Object,VS_OBJPTR canvas)
{
	SRPInterface -> ScriptCall(Object,NULL,"onSuperDraw","(o)",canvas);
    SRPInterface -> ScriptCall(canvas,NULL,"drawColor","(i)",0xFFFFFFFF);  
    SRPInterface -> ScriptCall(mDrawable,NULL,"draw","(o)",canvas);  
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
    
    mDrawable = SRPInterface->MallocObjectL(&VSOBJID_ShapeDrawableClass,0,NULL);
    SRPInterface -> ScriptCall(mDrawable,NULL,"init","(o)",SRPInterface->MallocObjectL(&VSOBJID_OvalShapeClass,0,NULL));
    void *mPaint = (void *)SRPInterface -> ScriptCall(mDrawable,NULL,"getPaint","()o");
    SRPInterface -> ScriptCall(mPaint,NULL,"setColor","(i)",0xff74AC23);
    SRPInterface -> ScriptCall(mDrawable,NULL,"setBounds","(iiii)",10,10,10+300,10+50);

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