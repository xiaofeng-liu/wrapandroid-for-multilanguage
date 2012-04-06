#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

static VS_INT32 MyAlertDialogPlayer_onClick(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    SRPInterface -> Print("[MyAlertDialogPlayer] event on click is trigger");
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

    void *MyAlertDialogPlayer = SRPInterface->MallocObjectL(&VSOBJID_AlertDialogClass,0,NULL);
    SRPInterface -> RegEventFunction(MyAlertDialogPlayer,&VSOUTEVENTID_AlertDialogClass_onClick,MyAlertDialogPlayer,(void *)MyAlertDialogPlayer_onClick,0);
    
    void *DialogView = SRPInterface->MallocObjectL(&VSOBJID_EditTextClass,0,NULL);
    SRPInterface -> ScriptCall(MyAlertDialogPlayer,NULL,"setView","(o)",DialogView);
    SRPInterface -> ScriptCall(MyAlertDialogPlayer,NULL,"setTitle","(s)","Information");
    SRPInterface -> ScriptCall(MyAlertDialogPlayer,NULL,"setButton","(is)",-1,"Ok");
    SRPInterface -> ScriptCall(MyAlertDialogPlayer,NULL,"setButton","(is)",-2,"Cancel");
    SRPInterface -> ScriptCall(MyAlertDialogPlayer,NULL,"show","()");

	return VS_TRUE;
}

void StarCoreService_Term(class ClassOfStarCore *starcore)
{
	SRPInterface -> Release();
	return;
}