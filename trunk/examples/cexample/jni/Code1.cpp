#include "SRPWrapAndroidEngine_VSClass.h"

static class ClassOfSRPInterface *SRPInterface;
static void *StarActivity;

static VS_INT32 MySpinner_onItemSelected(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    class ClassOfSRPParaPackageInterface *ParaPkg;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    ParaPkg = EventParam -> RequestParam -> ParaPkg;
    SRPInterface -> Print("[MySpinner] event on onItemSelected is trigger %s",ParaPkg ->GetStr(0));
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
	if( convertView == NULL )
		i = SRPInterface->MallocObjectL(&VSOBJID_ImageViewClass,0,NULL);
	else
		i = convertView;
	switch( position ){
	case 0 : SRPInterface -> ScriptCall(i,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/aqua02")); break;
	case 1 : SRPInterface -> ScriptCall(i,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/aqua03")); break;
	case 2 : SRPInterface -> ScriptCall(i,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/aqua04")); break;
	case 3 : SRPInterface -> ScriptCall(i,NULL,"setImageResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","drawable/aqua05")); break;
    }    
    SRPInterface -> ScriptCall(i,NULL,"setGridViewLayoutParams","(ii)",100, 100);
    SRPInterface -> ScriptCall(i,NULL,"setScaleType","(s)","FIT_CENTER");
    SRPInterface -> ScriptCall(i,NULL,"setPadding","(iiii)",5,5,5,5);
    SRPInterface -> ScriptSetStack(ScriptStack); 
    return i;    
}

static VS_INT32 MySpinner_onItemClick(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    class ClassOfSRPParaPackageInterface *ParaPkg;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    ParaPkg = EventParam -> RequestParam -> ParaPkg;	
    SRPInterface -> Print("[MySpinner] event on click is trigger %s",ParaPkg ->GetStr(0));
    return 0;
}

static VS_INT32 MyTimePicker_onTimeChanged(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    class ClassOfSRPParaPackageInterface *ParaPkg;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    ParaPkg = EventParam -> RequestParam -> ParaPkg;	
    SRPInterface -> Print("[MyTimePicker] event on click is trigger %d",ParaPkg ->GetInt(0));
    return 0;
}

static VS_INT32 MyDatePicker_onDateChanged(VS_ULONG FunctionChoice,void *EventPara)
{
    VS_EVENTPARAM *EventParam;
    class ClassOfSRPParaPackageInterface *ParaPkg;
    
    EventParam = (VS_EVENTPARAM *)EventPara;
    ParaPkg = EventParam -> RequestParam -> ParaPkg;	
    SRPInterface -> Print("[MyDatePicker] event on click is trigger %d",ParaPkg ->GetInt(0));
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
    
    void *MyProgressBarClass = SRPInterface->GetObjectEx(NULL,"ProgressBarClass");
    SRPInterface-> SetNameIntValue( MyProgressBarClass,"defStyle", SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","android:attr/progressBarStyleHorizontal"),true);
    void *MyProgressBar = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_ProgressBarClass,0,NULL);
    SRPInterface -> ScriptCall(MyProgressBar,NULL,"setAbsoluteLayoutParams","(iiii)",200,20,10,10);
    SRPInterface -> ScriptCall(MyProgressBar,NULL,"setMax","(i)",100);
    SRPInterface -> ScriptCall(MyProgressBar,NULL,"setProgress","(i)",50);
        
    void *MyStringArrayAdapter = SRPInterface->MallocObjectL(&VSOBJID_StringArrayAdapterClass,0,NULL);
    SRPInterface -> ScriptCall(MyStringArrayAdapter,NULL,"setDropDownViewResource","(i)",SRPInterface -> ScriptCall(StarActivity,NULL,"getResource","(s)i","android:layout/simple_spinner_dropdown_item"));
    SRPInterface -> ScriptCall(MyStringArrayAdapter,NULL,"add","(s)","red");
    SRPInterface -> ScriptCall(MyStringArrayAdapter,NULL,"add","(s)","green");
    SRPInterface -> ScriptCall(MyStringArrayAdapter,NULL,"add","(s)","blue");

    void *MySpinner = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_SpinnerClass,0,NULL);
    SRPInterface -> RegEventFunction(MySpinner,&VSOUTEVENTID_AdapterViewClass_onItemSelected,MySpinner,(void *)MySpinner_onItemSelected,0);
    SRPInterface -> ScriptCall(MySpinner,NULL,"setAbsoluteLayoutParams","(iiii)",200,50,10,50);
    SRPInterface -> ScriptCall(MySpinner,NULL,"setAdapter","(o)",MyStringArrayAdapter);

    void *MyAdapter = SRPInterface->MallocObjectL(&VSOBJID_AdapterClass,0,NULL);
    SRPInterface -> CreateOVLFunction(MyAdapter,&VSFUNCID_AdapterClass_getCount,(void *)MyAdapter_getCount,NULL);
    SRPInterface -> CreateOVLFunction(MyAdapter,&VSFUNCID_AdapterClass_getItem,(void *)MyAdapter_getItem,NULL);
    SRPInterface -> CreateOVLFunction(MyAdapter,&VSFUNCID_AdapterClass_getItemId,(void *)MyAdapter_getItemId,NULL);
    SRPInterface -> CreateOVLFunction(MyAdapter,&VSFUNCID_AdapterClass_getView,(void *)MyAdapter_getView,NULL);

    void *MyGridView = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_GridViewClass,0,NULL);
    SRPInterface -> RegEventFunction(MyGridView,&VSOUTEVENTID_AdapterViewClass_onItemClick,MyGridView,(void *)MySpinner_onItemClick,0);
    SRPInterface -> ScriptCall(MyGridView,NULL,"setAbsoluteLayoutParams","(iiii)",300,200,10,120);
    SRPInterface -> ScriptCall(MyGridView,NULL,"setAdapter","(o)",MyAdapter);
    SRPInterface -> ScriptCall(MyGridView,NULL,"setNumColumns","(i)",3);
         
    void *MyAutoCompleteTextView = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_AutoCompleteTextViewClass,0,NULL);
    SRPInterface -> ScriptCall(MyAutoCompleteTextView,NULL,"setAbsoluteLayoutParams","(iiii)",200,50,400,10);
    SRPInterface -> ScriptCall(MyAutoCompleteTextView,NULL,"setThreshold","(i)",1);
    SRPInterface -> ScriptCall(MyAutoCompleteTextView,NULL,"setAdapter","(o)",MyStringArrayAdapter);

    void *MyAnalogClock = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_AnalogClockClass,0,NULL);
    SRPInterface -> ScriptCall(MyAnalogClock,NULL,"setAbsoluteLayoutParams","(iiii)",100,100,400,70);
         
    void *MyDigitalClock = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_DigitalClockClass,0,NULL);
    SRPInterface -> ScriptCall(MyDigitalClock,NULL,"setAbsoluteLayoutParams","(iiii)",100,50,550,70);
        
    void *MyTimePicker = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_TimePickerClass,0,NULL);
    SRPInterface -> RegEventFunction(MyTimePicker,&VSOUTEVENTID_TimePickerClass_onTimeChanged,MyTimePicker,(void *)MyTimePicker_onTimeChanged,0);
    SRPInterface -> ScriptCall(MyTimePicker,NULL,"setAbsoluteLayoutParams","(iiii)",180,140,400,180);
        
    void *MyDatePicker = SRPInterface->MallocObject(MyLayout,VSATTRINDEX_VIEWGROUPCLASS_VIEWQUEUE,&VSOBJID_DatePickerClass,0,NULL);
    SRPInterface -> RegEventFunction(MyDatePicker,&VSOUTEVENTID_DatePickerClass_onDateChanged,MyDatePicker,(void *)MyDatePicker_onDateChanged,0);
    SRPInterface -> ScriptCall(MyDatePicker,NULL,"setAbsoluteLayoutParams","(iiii)",180,140,600,180);
    
    SRPInterface -> ScriptSetStack(ScriptStack); 
	
	return VS_TRUE;
}

void StarCoreService_Term(class ClassOfStarCore *starcore)
{
	SRPInterface -> Release();
	return;
}