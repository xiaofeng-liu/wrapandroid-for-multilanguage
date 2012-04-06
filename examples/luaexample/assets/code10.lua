SrvGroup = libstarcore._GetSrvGroup()
Service = SrvGroup:_GetService("","")

--get activity
StarActivity = Service.ActivityClass:getCurrent();

--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass:_New(StarActivity);
        	
--create Button
MyButton = Service.ButtonClass:_New(MyLayout);
MyButton:setText("Hello");
MyButton:setAbsoluteLayoutParams(100,50,10,100);
function MyButton:onClick(Event)
    toast = Service.ToastClass:_New();
    toast:makeText("Button is click", 0):show();
    toast:_LockGC(); 
    return;
end    
  