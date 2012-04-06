package com.srplab.wrapandroid;

import android.app.Activity;
import android.os.Bundle;
import android.content.Context;
import android.content.res.AssetManager;
import android.widget.*;
import android.view.*;
import android.widget.LinearLayout;
import android.widget.AbsoluteLayout.LayoutParams;
import android.util.*;
import android.widget.RadioGroup.OnCheckedChangeListener;
import android.net.Uri;
import android.webkit.WebView;
import android.webkit.WebChromeClient;
import android.webkit.WebViewClient;
import android.webkit.WebSettings;

import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Stack;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class WebViewClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init WebViewClass");

		class StarCLEWebView extends WebView implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			private List<Object> RefList;
			public StarCLEWebView(Context ctx,StarObjectClass In_Object){
				super(ctx);
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};  
			public Object GetAndroidObject(){return this;}
			public void SetAndroidObject(Object object){SrvGroup._PrintError(1, "WebViewClass not support SetAndroidObject" );}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}
        /* WebViewClass Body */
        Service._GetObject("WebViewClass")._Assign(new StarObjectClass(){
        	/* _OnCreate Event */
        	public Object[] _OnCreate(Hashtable Ev){
        		StarObjectClass self = (StarObjectClass)Ev.get("_DesObject");        		        		
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
	            	/**
	            	 * <div class="memproto">
	            	 *   <table class="memname">
	            	 *     <tr><td class="memname">Event : onProgressChanged(Hashtable Ev, int progress) </td></tr>
	            	 *   </table>
	            	 * </div>
	            	 */         		
        		/*onProgressChanged*/
        		view.setWebChromeClient(new WebChromeClient() {
        		    public void onProgressChanged(WebView view, int progress) {
        		    	StarObjectClass self = ((BasicAndroidInterface)view).getBasicAndroid().getStarObject();
        			    self._ProcessEvent("onProgressChanged",progress);  
        			} 
        		});        
	            	/**
	            	 * <div class="memproto">
	            	 *   <table class="memname">
	            	 *     <tr><td class="memname">Event : onReceivedError(Hashtable Ev, int errorCode, String description, String failingUrl) </td></tr>
	            	 *   </table>
	            	 * </div>
	            	 */         		
        		/*onReceivedError*/
        		view.setWebViewClient(new WebViewClient() {   
        		    public void onReceivedError(WebView view, int errorCode, String description, String failingUrl) {
        		    	StarObjectClass self = ((BasicAndroidInterface)view).getBasicAndroid().getStarObject();
        			    self._ProcessEvent("onReceivedError",errorCode,description,failingUrl);  
        		    } 
        		});        		
			    return null;
        	}          	
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEWebView webview = new StarCLEWebView((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)webview);
        		if( parent != null ){
        			if( activity == parent ){
        				Activity android_activity = (Activity)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        				android_activity.setContentView(webview);
        			}else{
        				ViewGroup android_viewgroup = (ViewGroup)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        				android_viewgroup.addView(webview);
        			}
        			self._LockGC();
        			self._Call("decAndroidRef");  // release with parent
        		}
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getProgress(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */   
        	public int  getProgress(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getProgress();
        		return 0;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public float  getScale(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public float  getScale(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getScale();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public StarObjectClass  getSettings(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public StarObjectClass  getSettings(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null ){
        			WebSettings websettings = view.getSettings();
        			StarObjectClass object = Service._GetObject("WebSettingsClass")._New();
        			StarCLEWebSettings cle_websettings = (StarCLEWebSettings)WrapAndroidClass.GetAndroidObject(object,"AndroidObject");
        			cle_websettings.websettings = websettings;
        			return object;
        		}
        		return null;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public String  getTitle(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public String  getTitle(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getTitle();
        		return null;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public String  getUrl(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public String  getUrl(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getUrl();
        		return null;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  goBack(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  goBack(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.goBack();
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  goBackOrForward(StarObjectClass self,int steps) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  goBackOrForward(StarObjectClass self,int steps){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.goBackOrForward(steps);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  goForward(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  goForward(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.goForward();
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  loadData(StarObjectClass self,String data, String mimeType, String encoding) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  loadData(StarObjectClass self,String data, String mimeType, String encoding){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.loadData(data,mimeType,encoding);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  loadDataWithBaseURL(StarObjectClass self,String baseUrl, String data, String mimeType, String encoding, String historyUrl) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  loadDataWithBaseURL(StarObjectClass self,String baseUrl, String data, String mimeType, String encoding, String historyUrl){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.loadDataWithBaseURL(baseUrl,data,mimeType,encoding,historyUrl);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  loadUrl(StarObjectClass self,String url) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  loadUrl(StarObjectClass self,String url){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.loadUrl(url);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setBackgroundColor(StarObjectClass self,int color) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  setBackgroundColor(StarObjectClass self,int color){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setBackgroundColor(color);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setInitialScale(StarObjectClass self,int scaleInPercent) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  setInitialScale(StarObjectClass self,int scaleInPercent){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setInitialScale(scaleInPercent);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setScrollBarStyle(StarObjectClass self,int style) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  setScrollBarStyle(StarObjectClass self,int style){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setScrollBarStyle(style);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  stopLoading(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public void  stopLoading(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.stopLoading();
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  zoomIn(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public boolean  zoomIn(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.zoomIn();
        		return false;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  zoomOut(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */ 
        	public boolean  zoomOut(StarObjectClass self){
        		WebView view = (WebView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.zoomIn();
        		return false;
        	}          	
        });    
        
		return true;
	}	
}