SrvGroup = libstarcore._GetSrvGroup()
Service = SrvGroup:_GetService("","")

--get activity
StarActivity = Service.ActivityClass:getCurrent();

--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass:_New(StarActivity);

MyPaint = Service.PaintClass:_New();  
MyBitmapFactory = Service.BitmapFactoryClass:_New();        
myView = Service.ViewClass:_New(MyLayout)
function myView:onDraw(canvas)
    self:onSuperDraw(canvas);        		
    MyPaint:setColor(0xFFFF0000);  
    canvas:drawRect(10, 20, 100, 100, MyPaint); 
                    
    MyBitmap = MyBitmapFactory:decodeResource(StarActivity:getResource("drawable/girl"));
    canvas:drawBitmap(MyBitmap, 100, 100, None);                
                    
    matrix=Service.MatrixClass:_New();
    matrix:postScale(0.8, 0.8);
    matrix:postRotate(45);
    dstbmp=Service.BitmapClass:_New();
    dstbmp:createBitmap0(MyBitmap,0,0,MyBitmap:getWidth(),MyBitmap:getHeight(),matrix,true);
    canvas:drawBitmap(dstbmp, 300, 200, nil);
                    
    matrix:_Free();
    dstbmp:_Free();
    MyBitmap:_Free();
end   
myView:setAbsoluteLayoutParams(500,300,10,10);        	
