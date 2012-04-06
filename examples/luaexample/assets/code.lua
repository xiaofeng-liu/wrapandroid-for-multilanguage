SrvGroup = libstarcore._GetSrvGroup()
Service = SrvGroup:_GetService("","")

--get activity
StarActivity = Service.ActivityClass.getCurrent();

--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass:_New(StarActivity);

--create TextView
MyText = Service.TextViewClass:_New(MyLayout);
MyText:setText("we are all happy");
MyText:setAbsoluteLayoutParams(100,50,10,10);

--create Button
MyButton = Service.ButtonClass:_New(MyLayout);
MyButton:setText("Hello");
MyButton:setAbsoluteLayoutParams(100,50,10,100);
function MyButton:onClick(Event)
    print("[MyButton event on click is trigger");
end

--create Button
MyButton1 = Service.ButtonClass:_New(MyLayout);
MyButton1:setText("............Hello");
MyButton1:setAbsoluteLayoutParams(100,80,80,200);
function MyButton1:onClick(Event) 
    print("[MyButton1] event on click is trigger");
end    

--create RadioGroup
MyRadioGroup = Service.RadioGroupClass:_New(MyLayout);
MyRadioGroup:setAbsoluteLayoutParams(300,100,400,100);
function MyRadioGroup:onCheckedChanged(Event,objid)
    print("[MyRadioGroup] event on click is trigger",objid);
end   
        
--create RadioButton         
MyRadioButton1 = Service.RadioButtonClass:_New(MyRadioGroup);
MyRadioButton1:setText("Hello");
MyRadioButton2 = Service.RadioButtonClass:_New(MyRadioGroup);
MyRadioButton2:setText("Hello");

--create EditText 
MyEdit = Service.EditTextClass:_New(MyLayout);
MyEdit:setAbsoluteLayoutParams(300,50,200,50);
        
--create ImageButton         
MyImageButton = Service.ImageButtonClass:_New(MyLayout);
MyImageButton:setAbsoluteLayoutParams(100,100,240,200);
MyImageButton:setImageResource(StarActivity:getResource("drawable/ic_launcher"));

--Gallery
MyAdapter = Service.AdapterClass:_New()
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
    i = Service.ImageViewClass:_New();
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
    i:setGalleryLayoutParams(100, 100);
    i:setScaleType("FIT_XY");
    i:_LockGC();
    return i;    
end    
        
MyGallery = Service.GalleryClass:_New(MyLayout)
function MyGallery:onItemClick(event,objid,position,id )
    print(self," event on click is trigger",objid,"position=  ",position," id=  ",id);
end    
MyGallery:setAdapter(MyAdapter);
MyGallery:setAbsoluteLayoutParams(200,200,500,200);
