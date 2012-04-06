#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

static VS_INT32 MyButton_onClick(VS_ULONG FunctionChoice,void *EventPara)
{
    SRPInterface -> Print("[MyButton event on click is trigger");
    return 0;
}

static VS_INT32 MyButton1_onClick(VS_ULONG FunctionChoice,void *EventPara)
{
    SRPInterface -> Print("[MyButton1 event on click is trigger");
    return 0;
}

static VS_INT32 MyRadioGroup_onCheckedChanged(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    class ClassOfSRPParaPackageInterface *ParaPkg;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    ParaPkg = EventParam -> RequestParam -> ParaPkg;
    SRPInterface -> Print("[MyRadioGroup] event on click is trigger %s",ParaPkg ->GetStr(0));
    return 0;
}

static VS_INT32 SRPAPI MyAdapter_getCount(void *Object)
{
	return 4;
}

static VS_CHAR * SRPAPI MyAdapter_getItem(void *Object,VS_INT32 Position)
{
	return NULL;
}	
static VS_LONG SRPAPI MyAdapter_getItemId(void *Object,VS_INT32 Position)
{
	return Position;
}		
static VS_OBJPTR SRPAPI MyAdapter_getView(void *Object,VS_INT32 position,VS_OBJPTR convertView,VS_OBJPTR parent)
{
	void *i;
	
	VS_INT32 ScriptStack = SRPInterface -> ScriptGetStack();
	i = SRPInterface->MallocObjectL(&VSOBJID_ImageViewClass,0,NULL);
	switch( position ){
	case 0 : SRPInterface -> ScriptCall(i,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/aqua02")); break;
	case 1 : SRPInterface -> ScriptCall(i,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/aqua03")); break;
	case 2 : SRPInterface -> ScriptCall(i,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/aqua04")); break;
	case 3 : SRPInterface -> ScriptCall(i,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/aqua05")); break;
    }    
    SRPInterface -> ScriptCall(i,NULL,"setGalleryLayoutParams","(ii)",100, 100);
    SRPInterface -> ScriptCall(i,NULL,"setScaleType","FIT_XY");
    SRPInterface -> ScriptSetStack(ScriptStack); 
    return i;    
}

static VS_INT32 MyGallery_onItemClick(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    class ClassOfSRPParaPackageInterface *ParaPkg;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    ParaPkg = EventParam -> RequestParam -> ParaPkg;	
    SRPInterface -> Print("[MyGallery] event on click is trigger %s",ParaPkg ->GetStr(0));
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
    
    //--create TextView
    void *MyText = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_TextViewClass,0,NULL);
    SRPInterface -> ScriptCall(MyText,NULL,"setText","(s)","we are all happy");
    SRPInterface -> ScriptCall(MyText,NULL,"setAbsoluteLayoutParams","(iiii)",100,50,10,10);
    
    //--create Button
    void *MyButton = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_ButtonClass,0,NULL);
    SRPInterface -> ScriptCall(MyButton,NULL,"setText","(s)","Hello");
    SRPInterface -> ScriptCall(MyButton,NULL,"setAbsoluteLayoutParams","(iiii)",100,50,10,100);
    SRPInterface -> RegEventFunction(MyButton,&VSOUTEVENTID_ViewClass_onClick,MyButton,(void *)MyButton_onClick,0);
    
    //--create Button
    void *MyButton1 = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_ButtonClass,0,NULL);
    SRPInterface -> ScriptCall(MyButton1,NULL,"setText","(s)","............Hello");
    SRPInterface -> ScriptCall(MyButton1,NULL,"setAbsoluteLayoutParams","(iiii)",100,80,80,200);
    SRPInterface -> RegEventFunction(MyButton1,&VSOUTEVENTID_ViewClass_onClick,MyButton1,(void *)MyButton1_onClick,0);

    //--create RadioGroup
    void *MyRadioGroup = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_RadioGroupClass,0,NULL);
    SRPInterface -> ScriptCall(MyRadioGroup,NULL,"setAbsoluteLayoutParams","(iiii)",300,100,400,100);
    SRPInterface -> RegEventFunction(MyRadioGroup,&VSOUTEVENTID_RadioGroupClass_onCheckedChanged,MyRadioGroup,(void *)MyRadioGroup_onCheckedChanged,0);
    
    //--create RadioButton         
    void *MyRadioButton1 = SRPInterface->MallocObject(MyRadioGroup,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_RadioButtonClass,0,NULL);
    SRPInterface -> ScriptCall(MyRadioButton1,NULL,"setText","(s)","Hello");
    void *MyRadioButton2 = SRPInterface->MallocObject(MyRadioGroup,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_RadioButtonClass,0,NULL);
    SRPInterface -> ScriptCall(MyRadioButton2,NULL,"setText","(s)","Hello");

    //--create EditText 
    void *MyEdit = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_EditTextClass,0,NULL);
    SRPInterface -> ScriptCall(MyEdit,NULL,"setAbsoluteLayoutParams","(iiii)",300,50,200,50);
        
    //--create ImageButton         
    void *MyImageButton = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_ImageButtonClass,0,NULL);
    SRPInterface -> ScriptCall(MyImageButton,NULL,"setAbsoluteLayoutParams","(iiii)",100,100,240,200);    
    SRPInterface -> ScriptCall(MyImageButton,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","R.drawable.ic_launcher"));

    //--Gallery
    void *MyAdapter = SRPInterface->MallocObjectL(&VSOBJID_AdapterClass,0,NULL);
    SRPInterface -> CreateOVLFunction(MyAdapter,&VSFUNCID_AdapterClass_getCount,(void *)MyAdapter_getCount,NULL);
    SRPInterface -> CreateOVLFunction(MyAdapter,&VSFUNCID_AdapterClass_getItem,(void *)MyAdapter_getItem,NULL);
    SRPInterface -> CreateOVLFunction(MyAdapter,&VSFUNCID_AdapterClass_getItemId,(void *)MyAdapter_getItemId,NULL);
    SRPInterface -> CreateOVLFunction(MyAdapter,&VSFUNCID_AdapterClass_getView,(void *)MyAdapter_getView,NULL);
    
    void *MyGallery = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_GalleryClass,0,NULL);
    SRPInterface -> RegEventFunction(MyGallery,&VSOUTEVENTID_AdapterViewClass_onItemClick,MyGallery,(void *)MyGallery_onItemClick,0);
    SRPInterface -> ScriptCall(MyGallery,NULL,"setAdapter","(o)",MyAdapter);
    SRPInterface -> ScriptCall(MyGallery,NULL,"setAbsoluteLayoutParams","(iiii)",200,200,500,200);
    
    SRPInterface -> ScriptSetStack(ScriptStack); 
	
	return VS_TRUE;
}

void StarCoreService_Term(class ClassOfStarCore *starcore)
{
	SRPInterface -> Release();
	return;
}