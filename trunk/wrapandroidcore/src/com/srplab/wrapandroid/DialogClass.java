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
import android.app.Dialog;
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

public class DialogClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init DialogClass");

		class StarCLEDialog extends Dialog implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;      
			private List<Object> RefList;
			public StarCLEDialog(Context ctx,StarObjectClass In_Object){
				super(ctx);
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};  
			public Object GetAndroidObject(){return this;}
			public void SetAndroidObject(Object object){SrvGroup._PrintError(1, "DialogClass not support SetAndroidObject" );}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}
        /* DialogClass Body */
        Service._GetObject("DialogClass")._Assign(new StarObjectClass(){         	
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEDialog dialog = new StarCLEDialog((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)dialog);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  cancel(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note after this function, self will be freed by java GC
        	 */   
        	public void  cancel(StarObjectClass self){
        		Dialog dialog = (Dialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( dialog == null )
        			return;
        		self._Call("decAndroidRef");  // release with dialog
        		dialog.cancel();
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  dismiss(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note after this function, self will be freed by java GC
        	 */   
        	public void  dismiss(StarObjectClass self){
        		Dialog dialog = (Dialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( dialog == null )
        			return;
        		self._Call("decAndroidRef");  // release with dialog
        		dialog.dismiss();
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  hide(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */   
        	public void  hide(StarObjectClass self){
        		Dialog dialog = (Dialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( dialog == null )
        			return;
        		dialog.hide();
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isShowing(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */   
        	public boolean  isShowing(StarObjectClass self){
        		Dialog dialog = (Dialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( dialog == null )
        			return false;
        		return dialog.isShowing();
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  show(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */   
        	public void  show(StarObjectClass self){
        		Dialog dialog = (Dialog)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( dialog == null )
        			return;
        		dialog.show();
        	}            	
        });    
        
		return true;
	}	
}