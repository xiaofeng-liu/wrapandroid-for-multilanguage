SrvGroup = libstarpy._GetSrvGroup()
Service = SrvGroup._GetService("","")

#--get activity
StarActivity = Service.ActivityClass.getCurrent();

#--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass._New(StarActivity);

MyStringArrayAdapter = Service.StringArrayAdapterClass._New();
def MyStringArrayAdapter_getView(self,position, convertView, parent) :
    global Service;
        		
    i = Service.LinearLayoutClass._New();
    px = i.dp2px(5);
    i.setPadding(px,px,px,px);
    i.setAbsListViewLayoutParams(Service.WRAP_CONTENT,Service.WRAP_CONTENT);
    imageView = Service.ImageViewClass._New(i);
    imageView.setPadding(5,5,5,5);
    imageView.setLinearLayoutParams(20,20);
    itextview = Service.TextViewClass._New(i);
    itextview.setLinearLayoutParams(Service.WRAP_CONTENT,Service.WRAP_CONTENT);
    if( position == 0 ) :
        itextview.setText("Android");
        imageView.setImageResource(StarActivity.getResource("drawable/android_logo"));
    if( position == 1 ) :
        itextview.setText("WindowsMobile");
        imageView.setImageResource(StarActivity.getResource("drawable/windowsmobile_logo"));
    if( position == 2 ) :
        itextview.setText("iOS");
        imageView.setImageResource(StarActivity.getResource("drawable/ios_logo"));
    if( position == 3 ) :
        itextview.setText("Blackberry");
        imageView.setImageResource(StarActivity.getResource("drawable/blackberry_logo"));
    i._LockGC();
    return i;
MyStringArrayAdapter.getView = MyStringArrayAdapter_getView;    
    
MyStringArrayAdapter.add("Android");
MyStringArrayAdapter.add("WindowsMobile");
MyStringArrayAdapter.add("iOS");
MyStringArrayAdapter.add("Blackberry");
        
MyListView = Service.ListViewClass._New(MyLayout);
def MyListView_onItemClick(self, Ev,objid,position,id) :
    print(self," event on click is trigger",objid,"position=  ",position," id=  ",id);
MyListView.onItemClick = MyListView_onItemClick;    

MyListView.setAbsoluteLayoutParams(300,200,10,10);
MyListView.setAdapter(MyStringArrayAdapter);
