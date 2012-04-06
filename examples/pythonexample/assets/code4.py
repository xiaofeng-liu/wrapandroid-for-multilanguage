SrvGroup = libstarpy._GetSrvGroup()
Service = SrvGroup._GetService("","")

#--get activity
StarActivity = Service.ActivityClass.getCurrent();

#--create AbsoluteLayout        
MyLayout = Service.AbsoluteLayoutClass._New(StarActivity);

MyWebView = Service.WebViewClass._New(MyLayout)
def MyWebView_onProgressChanged(self, Ev, progress) :
    print(self," event onProgressChanged is trigger ",progress);
    return;
MyWebView.onProgressChanged = MyWebView_onProgressChanged    

def MyWebView_onReceivedError(self, Ev, errorCode, description, failingUrl) :
    print(self," event onReceivedError is trigger"+errorCode+"description=  ",description," failingUrl=  ",failingUrl);
    return;
MyWebView.onReceivedError = MyWebView_onReceivedError;
    
MyWebView.setAbsoluteLayoutParams(500,300,10,10);
MyWebSettings = MyWebView.getSettings();
MyWebSettings.setJavaScriptEnabled(True);
MyWebSettings._Free();
MyWebView.loadUrl("http://www.srplab.com/");
