#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

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
    
    void *MyIntent = SRPInterface->MallocObjectL(&VSOBJID_IntentClass,0,NULL);
    SRPInterface -> ScriptCall(MyIntent,NULL,"setAction","(s)","android.intent.action.VIEW");
    SRPInterface -> ScriptCall(MyIntent,NULL,"setData","(s)","http://www.google.com");
    SRPInterface -> ScriptCall(StarActivity,NULL,"startActivity","(o)",MyIntent);
	
	return VS_TRUE;
}

void StarCoreService_Term(class ClassOfStarCore *starcore)
{
	SRPInterface -> Release();
	return;
}