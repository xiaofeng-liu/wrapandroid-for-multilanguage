SrvGroup = libstarcore._GetSrvGroup()
Service = SrvGroup:_GetService("","")

--get activity
StarActivity = Service.ActivityClass:getCurrent();

--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass:_New(StarActivity);

MyProgressBarClass = Service.ProgressBarClass;
MyProgressBarClass:_SetNameInt("defStyle", StarActivity:getResource("android:attr/progressBarStyleHorizontal"),true);
MyProgressBar = Service.ProgressBarClass:_New(MyLayout);
MyProgressBar:setAbsoluteLayoutParams(200,20,10,10);
MyProgressBar:setMax(100);
MyProgressBar:setProgress(50);
        
MyStringArrayAdapter = Service.StringArrayAdapterClass:_New();
MyStringArrayAdapter:setDropDownViewResource(StarActivity:getResource("android:layout/simple_spinner_dropdown_item"));
MyStringArrayAdapter:add("red");
MyStringArrayAdapter:add("green");
MyStringArrayAdapter:add("blue");       
MySpinner = Service.SpinnerClass:_New(MyLayout)
function MySpinner:onItemSelected(Ev,objid,position,id)
    print(self," event on click is trigger",objid,"position=  ",position," id=  ",id);
end    
MySpinner:setAbsoluteLayoutParams(200,50,10,50);
MySpinner:setAdapter(MyStringArrayAdapter);
        
MyAdapter = Service.BaseAdapterClass:_New();
function MyAdapter:getCount() 
    return 4;
end      
function MyAdapter:getItem(position)
    return position;
end    
function MyAdapter:getItemId(position)
    return position;
end    
function MyAdapter:getView(position,convertView,parent)
    if( convertView == nil ) then
        i = Service.ImageViewClass:_New();
    else
        i = convertView;
    end        
    if( position == 0 ) then
        i:setImageResource(StarActivity:getResource("drawable/aqua02"));
    end
    if( position == 1 ) then
        i:setImageResource(StarActivity:getResource("drawable/aqua03"));
    end
    if( position == 2 ) then
        i:setImageResource(StarActivity:getResource("drawable/aqua04"));
    end
    if( position == 3 ) then
        i:setImageResource(StarActivity:getResource("drawable/aqua05"));
    end
    i:setGridViewLayoutParams(100, 100);
    i:setScaleType("FIT_CENTER");
    i:setPadding(5,5,5,5);
    i:_LockGC();
    return i;
end  

MyGridView = Service.GridViewClass:_New(MyLayout);
function MyGridView:onItemClick( Ev,objid,position,id) 
    print(self," event on click is trigger",objid,"position=  ",position," id=  ",id);
end    
MyGridView:setAbsoluteLayoutParams(300,200,10,120);
MyGridView:setAdapter(MyAdapter);
MyGridView:setNumColumns(3);
        
MyAutoCompleteTextView = Service.AutoCompleteTextViewClass:_New(MyLayout);
MyAutoCompleteTextView:setAbsoluteLayoutParams(200,50,400,10);
MyAutoCompleteTextView:setThreshold(1);
MyAutoCompleteTextView:setAdapter(MyStringArrayAdapter);

MyAnalogClock = Service.AnalogClockClass:_New(MyLayout);
MyAnalogClock:setAbsoluteLayoutParams(100,100,400,70);
        
MyDigitalClock = Service.DigitalClockClass:_New(MyLayout);
MyDigitalClock:setAbsoluteLayoutParams(100,50,550,70);        
        
MyTimePicker = Service.TimePickerClass:_New(MyLayout);
function MyTimePicker_onTimeChanged(Ev,hourOfDay, minute)
    print(self," event on click is trigger","hourOfDay=  ",hourOfDay," minute=  ",minute);
end        
MyTimePicker:setAbsoluteLayoutParams(180,140,400,180);  
        
MyDatePicker = Service.DatePickerClass:_New(MyLayout);
function MyDatePicker:onDateChanged(Ev,year, monthOfYear, dayOfMonth) 
    print(self," event on click is trigger","year=  ",year," monthOfYear=  ",monthOfYear);
end        
MyDatePicker:setAbsoluteLayoutParams(180,140,600,180);
