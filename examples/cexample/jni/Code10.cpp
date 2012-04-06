#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

static VS_INT32 MyButton_onClick(VS_ULONG FunctionChoice,void *EventPara)
{
    void *toast = SRPInterface->MallocObjectL(&VSOBJID_ToastClass,0,NULL);
    SRPInterface -> ScriptCall(toast,NULL,"makeText","(si)","Button is click", 0);
    SRPInterface -> ScriptCall(toast,NULL,"show","()");
    return 0;
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
    
    //--create Button
    void *MyButton = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_ButtonClass,0,NULL);
    SRPInterface -> ScriptCall(MyButton,NULL,"setText","(s)","Hello");
    SRPInterface -> ScriptCall(MyButton,NULL,"setAbsoluteLayoutParams","(iiii)",100,50,10,100);
    SRPInterface -> RegEventFunction(MyButton,&VSOUTEVENTID_ViewClass_onClick,MyButton,(void *)MyButton_onClick,0);
	
	return VS_TRUE;
}

void StarCoreService_Term(class ClassOfStarCore *starcore)
{
	SRPInterface -> Release();
	return;
}