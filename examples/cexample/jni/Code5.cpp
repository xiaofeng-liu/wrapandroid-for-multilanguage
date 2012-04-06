#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;


static VS_INT32 MyMediaPlayer_onPrepared(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    SRPInterface -> Print("[MyMediaPlayer] event on onPrepared is trigger");
    return 0;
}

static VS_INT32 MyMediaPlayer_onCompletion(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    SRPInterface -> Print("[MyMediaPlayer] event on onCompletion is trigger");
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
    
    void *MyTableLayout = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_TableLayoutClass,0,NULL);
    SRPInterface -> ScriptCall(MyTableLayout,NULL,"setAbsoluteLayoutParams","(iiii)",500,300,10,10);
    void *MyTableRow1 = SRPInterface->MallocObject(MyTableLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_TableRowClass,0,NULL);
    void *MyButton = SRPInterface->MallocObject(MyTableRow1,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_ButtonClass,0,NULL);
    SRPInterface -> ScriptCall(MyButton,NULL,"setText","(s)","hello world");
    SRPInterface -> ScriptCall(MyButton,NULL,"setTableRowLayoutParams","(ii)",FILL_PARENT,WRAP_CONTENT);
    void *MyButton1 = SRPInterface->MallocObject(MyTableRow1,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_ButtonClass,0,NULL);
    SRPInterface -> ScriptCall(MyButton1,NULL,"setText","(s)","hello world1");
    SRPInterface -> ScriptCall(MyButton1,NULL,"setTextColor","(i)",0xFFFF0000);
    SRPInterface -> ScriptCall(MyButton1,NULL,"setTextSize","(i)",30);
    SRPInterface -> ScriptCall(MyButton1,NULL,"setTableRowLayoutParams","(ii)",FILL_PARENT,WRAP_CONTENT);
            
    void *MyMediaPlayer = SRPInterface->MallocObjectL(&VSOBJID_MediaPlayerClass,0,NULL);
    SRPInterface -> RegEventFunction(MyMediaPlayer,&VSOUTEVENTID_MediaPlayerClass_onPrepared,MyMediaPlayer,(void *)MyMediaPlayer_onPrepared,0);
    SRPInterface -> RegEventFunction(MyMediaPlayer,&VSOUTEVENTID_MediaPlayerClass_onCompletion,MyMediaPlayer,(void *)MyMediaPlayer_onCompletion,0);
    //SRPInterface -> ScriptCall(MyMediaPlayer,NULL,"setDataSource","(s)","/sdcard/srplab/aaa.mp3");
    //SRPInterface -> ScriptCall(MyMediaPlayer,NULL,"prepare","()");
    //SRPInterface -> ScriptCall(MyMediaPlayer,NULL,"start","()");
            
    void *MyAssetFileDescriptor = (void *)SRPInterface -> ScriptCall(StarActivity,NULL,"getAssetFileDescriptor","(s)O","aaa.mp3");  
    if( MyAssetFileDescriptor != NULL ){
        SRPInterface -> ScriptCall(MyMediaPlayer,NULL,"setDataSource2","(oii)",MyAssetFileDescriptor,SRPInterface -> ScriptCall(MyAssetFileDescriptor,NULL,"getStartOffset","()i"),SRPInterface -> ScriptCall(MyAssetFileDescriptor,NULL,"getLength","()i"));
        SRPInterface -> ScriptCall(MyAssetFileDescriptor,NULL,"close","()");        
        SRPInterface -> ScriptCall(MyMediaPlayer,NULL,"prepare","()");
        SRPInterface -> ScriptCall(MyMediaPlayer,NULL,"start","()");
    }	
	return VS_TRUE;
}

void StarCoreService_Term(class ClassOfStarCore *starcore)
{
	SRPInterface -> Release();
	return;
}