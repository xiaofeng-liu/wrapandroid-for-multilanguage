#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

static VS_OBJPTR SRPAPI MyAdapter_getView(void *Object,VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent)
{
	void *i;
	
	VS_INT32 ScriptStack = SRPInterface -> ScriptGetStack();
	i = SRPInterface->MallocObjectL(&VSOBJID_LinearLayoutClass,0,NULL);
	VS_INT32 px = SRPInterface -> ScriptCall(i,NULL,"dp2px","(f)i",5.0f);
	SRPInterface -> ScriptCall(i,NULL,"setPadding","(iiii)",px,px,px,px);
	SRPInterface -> ScriptCall(i,NULL,"setAbsListViewLayoutParams","(ii)",WRAP_CONTENT,WRAP_CONTENT);
	
    void *imageView = SRPInterface->MallocObject(i,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_ImageViewClass,0,NULL);
    SRPInterface -> ScriptCall(imageView,NULL,"setPadding","(iiii)",5,5,5,5);
	SRPInterface -> ScriptCall(imageView,NULL,"setLinearLayoutParams","(ii)",20,20);    
    void *itextview = SRPInterface->MallocObject(i,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_TextViewClass,0,NULL);
    SRPInterface -> ScriptCall(itextview,NULL,"setLinearLayoutParams","(ii)",WRAP_CONTENT,WRAP_CONTENT); 
        	
	switch( position ){
	case 0 : 
		SRPInterface -> ScriptCall(itextview,NULL,"setText","(s)","Android"); 
		SRPInterface -> ScriptCall(imageView,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/android_logo")); 
		break;
	case 1 : 
		SRPInterface -> ScriptCall(itextview,NULL,"setText","(s)","WindowsMobile"); 
		SRPInterface -> ScriptCall(imageView,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/windowsmobile_logo")); 
		break;
	case 2 : 
		SRPInterface -> ScriptCall(itextview,NULL,"setText","(s)","iOS"); 
		SRPInterface -> ScriptCall(imageView,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/ios_logo")); 
		break;
	case 3 : 
		SRPInterface -> ScriptCall(itextview,NULL,"setText","(s)","Blackberry"); 
		SRPInterface -> ScriptCall(imageView,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/blackberry_logo")); 
		break;
    }    
    SRPInterface -> ScriptSetStack(ScriptStack); 
    return i;    
}

static VS_INT32 MyListView_onItemClick(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    class ClassOfSRPParaPackageInterface *ParaPkg;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    ParaPkg = EventParam -> RequestParam -> ParaPkg;	
    SRPInterface -> Print("[MyListView] event on click is trigger %s",ParaPkg ->GetStr(0));
    return 0;
}

VS_BOOL StarCoreService_Init(class ClassOfStarCore *starcore)
{
	class ClassOfBasicSRPInterface *BasicSRPInterface;
	
	//--init star core
	BasicSRPInterface = starcore ->GetBasicInterface();	
	SRPInterface = BasicSRPInterface ->GetSRPInterface(BasicSRPInterface->QueryActiveService(NULL),"","");
	
	VS_INT32 ScriptStack;
	
	ScriptStack = SRPInterface -> ScriptGetStack();
	
	void *ActivityClass;
	ActivityClass = SRPInterface -> GetObjectEx(NULL,"ActivityClass");
	StarActivity = (void *)SRPInterface -> ScriptCall(ActivityClass,NULL,"getCurrent","()O");
	SRPInterface -> Print("Get Main Activity = %s", SRPInterface -> GetName(StarActivity));	
	
	//--create AbsoluteLayout        
    void *MyLayout = SRPInterface->MallocObject(StarActivity,VSATTRINDEX_ACTIVITYCLASS_VIEWGROUPQUEUE,&VSOBJID_AbsoluteLayoutClass,0,NULL);
    
    void *MyStringArrayAdapter = SRPInterface->MallocObjectL(&VSOBJID_StringArrayAdapterClass,0,NULL);
    SRPInterface -> CreateOVLFunction(MyStringArrayAdapter,&VSFUNCID_StringArrayAdapterClass_getView,(void *)MyAdapter_getView,NULL);
    SRPInterface -> ScriptCall(MyStringArrayAdapter,NULL,"add","(s)","Android");
    SRPInterface -> ScriptCall(MyStringArrayAdapter,NULL,"add","(s)","WindowsMobile");
    SRPInterface -> ScriptCall(MyStringArrayAdapter,NULL,"add","(s)","iOS");
    SRPInterface -> ScriptCall(MyStringArrayAdapter,NULL,"add","(s)","Blackberry");

        
    void *MyListView = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_ListViewClass,0,NULL);
    SRPInterface -> RegEventFunction(MyListView,&VSOUTEVENTID_AdapterViewClass_onItemClick,MyListView,(void *)MyListView_onItemClick,0);
    SRPInterface -> ScriptCall(MyListView,NULL,"setAbsoluteLayoutParams","(iiii)",300,200,10,10);
    SRPInterface -> ScriptCall(MyListView,NULL,"setAdapter","(o)",MyStringArrayAdapter);
    
    SRPInterface -> ScriptSetStack(ScriptStack); 
	
	return VS_TRUE;
}

void StarCoreService_Term(class ClassOfStarCore *starcore)
{
	SRPInterface -> Release();
	return;
}