SrvGroup = libstarcore._GetSrvGroup()
Service = SrvGroup:_GetService("","")

--get activity
StarActivity = Service.ActivityClass:getCurrent();

--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass:_New(StarActivity);

MyTableLayout = Service.TableLayoutClass:_New(MyLayout);
MyTableLayout:setAbsoluteLayoutParams(500,300,10,10);
MyTableRow1 = Service.TableRowClass:_New(MyTableLayout);
MyButton = Service.ButtonClass:_New(MyTableRow1);
MyButton:setText("hello world");
MyButton:setTableRowLayoutParams(Service.FILL_PARENT,Service.WRAP_CONTENT);        
MyButton1 = Service.ButtonClass:_New(MyTableRow1);
MyButton1:setText("hello world1");
MyButton1:setTextColor(0xFFFF0000);
MyButton1:setTextSize(30);
MyButton1:setTableRowLayoutParams(Service.FILL_PARENT,Service.WRAP_CONTENT);        
            
MyMediaPlayer = Service.MediaPlayerClass:_New()
function MyMediaPlayer:onPrepared( Ev)
    print(self," event onPrepared is trigger ");
    return;
end
function MyMediaPlayer:onCompletion( Ev) 
    print(self," event onCompletion is trigger");
    return;
end      	

--MyMediaPlayer:setDataSource("/sdcard/srplab/aaa.mp3");
--MyMediaPlayer:prepare();
--MyMediaPlayer:start();
            
MyAssetFileDescriptor = StarActivity:getAssetFileDescriptor("aaa.mp3");
if( MyAssetFileDescriptor ~= nil ) then
    MyMediaPlayer:setDataSource2(MyAssetFileDescriptor,MyAssetFileDescriptor:getStartOffset(),MyAssetFileDescriptor:getLength());
    MyAssetFileDescriptor:close();
    MyMediaPlayer:prepare();
    MyMediaPlayer:start();   
end         	
