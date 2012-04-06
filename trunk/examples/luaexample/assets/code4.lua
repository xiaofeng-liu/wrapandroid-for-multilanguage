SrvGroup = libstarcore._GetSrvGroup()
Service = SrvGroup:_GetService("","")

--get activity
StarActivity = Service.ActivityClass:getCurrent();

--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass:_New(StarActivity);

MyWebView = Service.WebViewClass:_New(MyLayout)
function MyWebView:onProgressChanged(Ev, progress)
    print(self," event onProgressChanged is trigger ",progress);
    return;
end    

function MyWebView:onReceivedError(Ev, errorCode, description, failingUrl) 
    print(self," event onReceivedError is trigger"+errorCode+"description=  ",description," failingUrl=  ",failingUrl);
    return;
end
    
MyWebView:setAbsoluteLayoutParams(500,300,10,10);
MyWebSettings = MyWebView:getSettings();
MyWebSettings:setJavaScriptEnabled(True);
MyWebSettings:_Free();
MyWebView:loadUrl("http://www.srplab.com/");
