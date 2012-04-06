SrvGroup = libstarcore._GetSrvGroup()
Service = SrvGroup:_GetService("","")

--get activity
StarActivity = Service.ActivityClass:getCurrent();

--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass:_New(StarActivity);

mDrawable = Service.ShapeDrawableClass:_New();
mDrawable:init(Service.OvalShapeClass:_New());
mPaint = mDrawable:getPaint();
mPaint:setColor(0xff74AC23);
mDrawable:setBounds(10,10,10+300,10+50);
        	
myView = Service.ViewClass:_New(MyLayout);
function myView:onDraw(canvas)
    self:onSuperDraw(canvas);
    canvas:drawColor(0xFFFFFFFF);
    mDrawable:draw(canvas);
end        
myView:setAbsoluteLayoutParams(300,50,10,10);