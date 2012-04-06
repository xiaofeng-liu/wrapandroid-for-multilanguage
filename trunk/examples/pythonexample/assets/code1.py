SrvGroup = libstarpy._GetSrvGroup()
Service = SrvGroup._GetService("","")

#--get activity
StarActivity = Service.ActivityClass.getCurrent();

#--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass._New(StarActivity);

MyProgressBarClass = Service.ProgressBarClass;
MyProgressBarClass._SetNameInt("defStyle", StarActivity.getResource("android:attr/progressBarStyleHorizontal"),True);
MyProgressBar = Service.ProgressBarClass._New(MyLayout);
MyProgressBar.setAbsoluteLayoutParams(200,20,10,10);
MyProgressBar.setMax(100);
MyProgressBar.setProgress(50);
        
MyStringArrayAdapter = Service.StringArrayAdapterClass._New();
MyStringArrayAdapter.setDropDownViewResource(StarActivity.getResource("android:layout/simple_spinner_dropdown_item"));
MyStringArrayAdapter.add("red");
MyStringArrayAdapter.add("green");
MyStringArrayAdapter.add("blue");
        
MySpinner = Service.SpinnerClass._New(MyLayout)
def MySpinner_onItemSelected(self, Ev,objid,position,id) :
    print(self," event on click is trigger",objid,"position=  ",position," id=  ",id);
MySpinner.onItemSelected = MySpinner_onItemSelected;

MySpinner.setAbsoluteLayoutParams(200,50,10,50);
MySpinner.setAdapter(MyStringArrayAdapter);
        
MyAdapter = Service.BaseAdapterClass._New();
def MyAdapter_getCount(self) :
    return 4;
MyAdapter.getCount = MyAdapter_getCount;  

def MyAdapter_getItem(self,position) :
    return position;
MyAdapter.getItem = MyAdapter_getItem;  

def MyAdapter_getItemId(self,position)  :
    return position;
MyAdapter.getItemId = MyAdapter_getItemId;  

def MyAdapter_getView(self,position,convertView,parent) :
    global Service;
    if( convertView is None ) :
        i = Service.ImageViewClass._New();
    else :
        i = convertView;
    if( position == 0 ) :
        i.setImageResource(StarActivity.getResource("drawable/aqua02"));
    if( position == 1 ) :
        i.setImageResource(StarActivity.getResource("drawable/aqua03"));
    if( position == 2 ) :
        i.setImageResource(StarActivity.getResource("drawable/aqua04"));
    if( position == 3 ) :
        i.setImageResource(StarActivity.getResource("drawable/aqua05"));
    i.setGridViewLayoutParams(100, 100);
    i.setScaleType("FIT_CENTER");
    i.setPadding(5,5,5,5);
    i._LockGC();
    return i;
MyAdapter.getView = MyAdapter_getView;    

MyGridView = Service.GridViewClass._New(MyLayout);
def MyGridView_onItemClick(self, Ev,objid,position,id) :
    print(self," event on click is trigger",objid,"position=  ",position," id=  ",id);
MyGridView.onItemClick = MyGridView_onItemClick;

MyGridView.setAbsoluteLayoutParams(300,200,10,120);
MyGridView.setAdapter(MyAdapter);
MyGridView.setNumColumns(3);
        
MyAutoCompleteTextView = Service.AutoCompleteTextViewClass._New(MyLayout);
MyAutoCompleteTextView.setAbsoluteLayoutParams(200,50,400,10);
MyAutoCompleteTextView.setThreshold(1);
MyAutoCompleteTextView.setAdapter(MyStringArrayAdapter);

MyAnalogClock = Service.AnalogClockClass._New(MyLayout);
MyAnalogClock.setAbsoluteLayoutParams(100,100,400,70);
        
MyDigitalClock = Service.DigitalClockClass._New(MyLayout);
MyDigitalClock.setAbsoluteLayoutParams(100,50,550,70);        
        
MyTimePicker = Service.TimePickerClass._New(MyLayout);
def MyTimePicker_onTimeChanged(self, Ev,hourOfDay, minute) :
    print(self," event on click is trigger","hourOfDay=  ",hourOfDay," minute=  ",minute);
MyTimePicker.onTimeChanged = MyTimePicker_onTimeChanged;    
MyTimePicker.setAbsoluteLayoutParams(180,140,400,180);  
        
MyDatePicker = Service.DatePickerClass._New(MyLayout);
def MyDatePicker_onDateChanged(self, Ev,year, monthOfYear, dayOfMonth) :
    print(self," event on click is trigger","year=  ",year," monthOfYear=  ",monthOfYear);
MyDatePicker.onDateChanged = MyDatePicker_onDateChanged;    
MyDatePicker.setAbsoluteLayoutParams(180,140,600,180);
