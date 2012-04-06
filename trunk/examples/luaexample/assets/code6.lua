SrvGroup = libstarcore._GetSrvGroup()
Service = SrvGroup:_GetService("","")

--get activity
StarActivity = Service.ActivityClass:getCurrent();

--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass:_New(StarActivity);

MyIntent = Service.IntentClass:_New();
MyIntent:setAction("android.intent.action.VIEW");
MyIntent:setData("http://www.google.com");
StarActivity:startActivity(MyIntent);       	
