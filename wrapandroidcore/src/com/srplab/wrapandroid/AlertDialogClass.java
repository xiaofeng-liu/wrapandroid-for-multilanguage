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
import android.app.AlertDialog;
import android.content.DialogInterface;

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

public class AlertDialogClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init AlertDialogClass");

		class StarCLEAlertDialog extends AlertDialog implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;        
			private List<Object> RefList;
			public StarCLEAlertDialog(Context ctx,StarObjectClass In_Object){
				super(ctx);
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;}; 
			public Object GetAndroidObject(){return this;}
			public void SetAndroidObject(Object object){SrvGroup._PrintError(1, "AlertDialogClass not support SetAndroidObject" );}
			public void AddRef(Object object){RefList.add(object);}		
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}
        /* AlertDialogClass Body */
        Service._GetObject("AlertDialogClass")._Assign(new StarObjectClass(){         	
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEAlertDialog alertdialog = new StarCLEAlertDialog((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)alertdialog);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setButton(StarObjectClass self,int whichButton, String text) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @param whichButton BUTTON_POSITIVE = -1, BUTTON_NEGATIVE = -2, or BUTTON_NEUTRAL = -3
        	 */   
        	public void  setButton(StarObjectClass self,int whichButton, String text){
        		StarCLEAlertDialog alertdialog = (StarCLEAlertDialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( alertdialog == null )
        			return;
        		StarObjectClass dialoginterface = Service._GetObject("DialogInterfaceClass")._New(self)._Assign(new StarObjectClass(){
        			public void onClick (StarObjectClass self, Hashtable Ev, int which){
        				StarObjectClass parent = (StarObjectClass)self._GetChild("_Parent");
        				parent._ProcessEvent("onClick",which);
        			}
        		});        
        		DialogInterface.OnClickListener listener = (DialogInterface.OnClickListener)WrapAndroidClass.GetAndroidObject(dialoginterface,"AndroidObject");
        		alertdialog.setButton(whichButton,text,listener);
        		dialoginterface._LockGC();
        		dialoginterface._Call("decAndroidRef");  // release with parent
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setCustomTitle(StarObjectClass self,StarObjectClass customTitleView)</td></tr>
        	 *   </table>
        	 * </div>
        	 * @note view will be freed by java GC
        	 */  
        	public void  setCustomTitle(StarObjectClass self,StarObjectClass customTitleView){
        		StarCLEAlertDialog alertdialog = (StarCLEAlertDialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( alertdialog == null )
        			return;
        		View view = (View)WrapAndroidClass.GetAndroidObject(customTitleView,"AndroidObject");
        		if( view == null )
        			return;
        		alertdialog.setCustomTitle(view);
        		customTitleView._LockGC();
        		customTitleView._Call("decAndroidRef");  // release with parent
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setIcon(StarObjectClass self,int resId) </td></tr>
        	 *   </table>
        	 * </div>
        	 */  
        	public void  setIcon(StarObjectClass self,int resId){
        		StarCLEAlertDialog alertdialog = (StarCLEAlertDialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( alertdialog == null )
        			return;
        		alertdialog.setIcon(resId);
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setInverseBackgroundForced(StarObjectClass self,boolean forceInverseBackground) </td></tr>
        	 *   </table>
        	 * </div>
        	 */  
        	public void  setInverseBackgroundForced(StarObjectClass self,boolean forceInverseBackground){
        		StarCLEAlertDialog alertdialog = (StarCLEAlertDialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( alertdialog == null )
        			return;
        		alertdialog.setInverseBackgroundForced(forceInverseBackground);
        	}     
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMessage(StarObjectClass self,String message) </td></tr>
        	 *   </table>
        	 * </div>
        	 */  
        	public void  setMessage(StarObjectClass self,String message){
        		StarCLEAlertDialog alertdialog = (StarCLEAlertDialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( alertdialog == null )
        			return;
        		alertdialog.setMessage(message);
        	}      
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setTitle(StarObjectClass self,String title) </td></tr>
        	 *   </table>
        	 * </div>
        	 */  
        	public void  setTitle(StarObjectClass self,String title){
        		StarCLEAlertDialog alertdialog = (StarCLEAlertDialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( alertdialog == null )
        			return;
        		alertdialog.setTitle(title);
        	}     
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setView(StarObjectClass self,StarObjectClass view, int viewSpacingLeft, int viewSpacingTop, int viewSpacingRight, int viewSpacingBottom) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note view will be freed by java GC
        	 */  
        	public void  setView(StarObjectClass self,StarObjectClass view, int viewSpacingLeft, int viewSpacingTop, int viewSpacingRight, int viewSpacingBottom){
        		StarCLEAlertDialog alertdialog = (StarCLEAlertDialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( alertdialog == null )
        			return;
        		View android_view = (View)WrapAndroidClass.GetAndroidObject(view,"AndroidObject");
        		if( android_view == null )
        			return;
        		alertdialog.setView(android_view,viewSpacingLeft,viewSpacingTop,viewSpacingRight,viewSpacingBottom);
        		view._LockGC();
        		view._Call("decAndroidRef");  // release with parent
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setView(StarObjectClass self,StarObjectClass view) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note view will be freed by java GC
        	 */  
        	public void  setView(StarObjectClass self,StarObjectClass view){
        		StarCLEAlertDialog alertdialog = (StarCLEAlertDialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( alertdialog == null )
        			return;
        		View android_view = (View)WrapAndroidClass.GetAndroidObject(view,"AndroidObject");
        		if( android_view == null )
        			return;
        		alertdialog.setView(android_view);
        		view._LockGC();
        		view._Call("decAndroidRef");  // release with parent
        	}          	
        });    
        
		return true;
	}	
}