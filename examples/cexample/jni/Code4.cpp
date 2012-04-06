#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

static VS_INT32 MyWebView_onProgressChanged(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    class ClassOfSRPParaPackageInterface *ParaPkg;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    ParaPkg = EventParam -> RequestParam -> ParaPkg;	
    SRPInterface -> Print("[MyWebView] event on onProgressChanged is trigger %d",ParaPkg ->GetInt(0));
    return 0;
}

static VS_INT32 MyWebView_onReceivedError(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    class ClassOfSRPParaPackageInterface *ParaPkg;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    ParaPkg = EventParam -> RequestParam -> ParaPkg;	
    SRPInterface -> Print("[MyWebView] event on onReceivedError is trigger %d",ParaPkg ->GetInt(0));
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
    
    void *MyWebView = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_WebViewClass,0,NULL);
    SRPInterface -> RegEventFunction(MyWebView,&VSOUTEVENTID_WebViewClass_onProgressChanged,MyWebView,(void *)MyWebView_onProgressChanged,0);
    SRPInterface -> RegEventFunction(MyWebView,&VSOUTEVENTID_WebViewClass_onReceivedError,MyWebView,(void *)MyWebView_onReceivedError,0);
    SRPInterface -> ScriptCall(MyWebView,NULL,"setAbsoluteLayoutParams","(iiii)",500,300,10,10);
    
    void *MyWebSettings = (void *)SRPInterface -> ScriptCall(MyWebView,NULL,"getSettings","()o");
    SRPInterface -> ScriptCall(MyWebSettings,NULL,"setJavaScriptEnabled","(z)",true);
    SRPInterface -> FreeObject(MyWebSettings);
    
    SRPInterface -> ScriptCall(MyWebView,NULL,"loadUrl","(s)","http://www.srplab.com/");    
	
	return VS_TRUE;
}

void StarCoreService_Term(class ClassOfStarCore *starcore)
{
	SRPInterface -> Release();
	return;
}