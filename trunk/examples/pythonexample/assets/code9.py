SrvGroup = libstarpy._GetSrvGroup()
Service = SrvGroup._GetService("","")

#--get activity
StarActivity = Service.ActivityClass.getCurrent();

#--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass._New(StarActivity);

myView = Service.ViewClass._New(MyLayout);
def myView_onDraw(self,canvas) :
    self.onSuperDraw(canvas);
    paint = Service.PaintClass._New();
    font = Service.TypefaceClass._New();
    font.create("serif",1);
    paint.setColor(0xFFFF0000);
    paint.setTypeface(font);
    paint.setTextSize(22);
    canvas.drawText("hello world",0,30,paint);
    paint._Free();
    font._Free();
myView.onDraw = myView_onDraw;    
myView.setAbsoluteLayoutParams(300,50,10,10);  	
