SrvGroup = libstarpy._GetSrvGroup()
Service = SrvGroup._GetService("","")

#--get activity
StarActivity = Service.ActivityClass.getCurrent();

#--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass._New(StarActivity);

MyAlertDialogPlayer = Service.AlertDialogClass._New();
def MyAlertDialogPlayer_onClick(self, Ev,which) :
    print(self," event onClick is trigger =",which);
    return;
MyAlertDialogPlayer.onClick = MyAlertDialogPlayer_onClick;
    
DialogView = Service.EditTextClass._New();    
MyAlertDialogPlayer.setView(DialogView);
MyAlertDialogPlayer.setTitle("Information");
MyAlertDialogPlayer.setButton(-1,"Ok");
MyAlertDialogPlayer.setButton(-2,"Cancel");
            
MyAlertDialogPlayer.show();     	
