SrvGroup = libstarcore._GetSrvGroup()
Service = SrvGroup:_GetService("","")

--get activity
StarActivity = Service.ActivityClass:getCurrent();

--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass:_New(StarActivity);

MyAlertDialogPlayer = Service.AlertDialogClass:_New();
function MyAlertDialogPlayer:onClick(Ev,which) 
    print(self," event onClick is trigger =",which);
    return;
end    
    
DialogView = Service.EditTextClass:_New();    
MyAlertDialogPlayer:setView(DialogView);
MyAlertDialogPlayer:setTitle("Information");
MyAlertDialogPlayer:setButton(-1,"Ok");
MyAlertDialogPlayer:setButton(-2,"Cancel");
            
MyAlertDialogPlayer:show();     	
