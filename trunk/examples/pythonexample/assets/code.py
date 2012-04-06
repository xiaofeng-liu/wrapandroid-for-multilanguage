SrvGroup = libstarpy._GetSrvGroup()
Service = SrvGroup._GetService("","")

#--get activity
StarActivity = Service.ActivityClass.getCurrent();

#--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass._New(StarActivity);

#--create TextView
MyText = Service.TextViewClass._New(MyLayout);
MyText.setText("we are all happy");
MyText.setAbsoluteLayoutParams(100,50,10,10);

#--create Button
MyButton = Service.ButtonClass._New(MyLayout);
MyButton.setText("Hello");
MyButton.setAbsoluteLayoutParams(100,50,10,100);
def MyButton_onClick(self,Event) :
    print("[MyButton event on click is trigger");
    return;
MyButton.onClick = MyButton_onClick;    

#--create Button
MyButton1 = Service.ButtonClass._New(MyLayout);
MyButton1.setText("............Hello");
MyButton1.setAbsoluteLayoutParams(100,80,80,200);
def MyButton1_onClick(self,Event) :
    print("[MyButton1] event on click is trigger");
    return;
MyButton1.onClick = MyButton1_onClick;    

#--create RadioGroup
MyRadioGroup = Service.RadioGroupClass._New(MyLayout);
MyRadioGroup.setAbsoluteLayoutParams(300,100,400,100);
def MyRadioGroup_onCheckedChanged(self,Event,objid) :
    print("[MyRadioGroup] event on click is trigger"+objid);
    return;
MyRadioGroup.onCheckedChanged = MyRadioGroup_onCheckedChanged;   
        
#--create RadioButton         
MyRadioButton1 = Service.RadioButtonClass._New(MyRadioGroup);
MyRadioButton1.setText("Hello");
MyRadioButton2 = Service.RadioButtonClass._New(MyRadioGroup);
MyRadioButton2.setText("Hello");

#--create EditText 
MyEdit = Service.EditTextClass._New(MyLayout);
MyEdit.setAbsoluteLayoutParams(300,50,200,50);
        
#--create ImageButton         
MyImageButton = Service.ImageButtonClass._New(MyLayout);
MyImageButton.setAbsoluteLayoutParams(100,100,240,200);
MyImageButton.setImageResource(StarActivity.getResource("drawable/ic_launcher"));

#--Gallery
MyAdapter = Service.AdapterClass._New()
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
    i = Service.ImageViewClass._New();
    if( position == 0 ) :
        i.setImageResource(StarActivity.getResource("drawable/aqua02"));
    if( position == 1 ) :
        i.setImageResource(StarActivity.getResource("drawable/aqua03"));
    if( position == 2 ) :
        i.setImageResource(StarActivity.getResource("drawable/aqua04"));
    if( position == 3 ) :
        i.setImageResource(StarActivity.getResource("drawable/aqua05")); 
    i.setGalleryLayoutParams(100, 100);
    i.setScaleType("FIT_XY");
    i._LockGC();
    return i;    
MyAdapter.getView = MyAdapter_getView;
        
MyGallery = Service.GalleryClass._New(MyLayout)
def MyGallery_onItemClick(self,event,objid,position,id ):
    print(self," event on click is trigger",objid,"position=  ",position," id=  ",id);
MyGallery.onItemClick = MyGallery_onItemClick;

MyGallery.setAdapter(MyAdapter);
MyGallery.setAbsoluteLayoutParams(200,200,500,200);
