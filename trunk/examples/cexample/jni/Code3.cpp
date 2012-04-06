#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

static void *MyPaint,*MyBitmapFactory;

static void SRPAPI myView_onDraw(void *Object,VS_OBJPTR canvas)
{
	SRPInterface -> ScriptCall(Object,NULL,"onSuperDraw","(o)",canvas);

    SRPInterface -> ScriptCall(MyPaint,NULL,"setColor","(i)",0xFFFF0000);  
    SRPInterface -> ScriptCall(canvas,NULL,"drawRect","(iiiio)",10, 20, 100, 100, MyPaint);  
                    
    void *MyBitmap = (void *)SRPInterface -> ScriptCall(MyBitmapFactory,NULL,"decodeResource","(i)o",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/girl"));
    SRPInterface -> ScriptCall(canvas,NULL,"drawBitmap","(oiio)",MyBitmap,100,100,NULL);  
                    
    void *matrix=SRPInterface->MallocObjectL(&VSOBJID_MatrixClass,0,NULL);
    SRPInterface -> ScriptCall(matrix,NULL,"postScale","(ff)",0.8, 0.8);  
    SRPInterface -> ScriptCall(matrix,NULL,"postRotate","(f)",45.0f);  

    void *dstbmp=SRPInterface->MallocObjectL(&VSOBJID_BitmapClass,0,NULL);
    SRPInterface -> ScriptCall(dstbmp,NULL,"createBitmap0","(oiiiioz)",MyBitmap,0,0,
                        SRPInterface -> ScriptCall(MyBitmap,NULL,"getWidth","()i"),
                        SRPInterface -> ScriptCall(MyBitmap,NULL,"getHeight","()i"),
                        matrix,0); 
    SRPInterface -> ScriptCall(canvas,NULL,"drawBitmap","(oiio)",dstbmp, 300, 200, NULL);  
    SRPInterface -> FreeObject(matrix);
    SRPInterface -> FreeObject(dstbmp);
    SRPInterface -> FreeObject(MyBitmap);
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
    
    MyPaint = SRPInterface->MallocObjectL(&VSOBJID_PaintClass,0,NULL);
    MyBitmapFactory = SRPInterface->MallocObjectL(&VSOBJID_BitmapFactoryClass,0,NULL);
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