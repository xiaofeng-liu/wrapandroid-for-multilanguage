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
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.graphics.Matrix;

import java.io.IOException;
import java.io.InputStream;
import java.util.Hashtable;
import java.util.Stack;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class WebSettingsClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init WebSettingsClass");

        /* WebSettingsClass Body */
        Service._GetObject("WebSettingsClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEWebSettings websettings = new StarCLEWebSettings((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)websettings);
        		return;
        	}  
        	/* onDestroyAndroid function */
        	public void onDestroyAndroid( StarObjectClass self ){
        		StarCLEWebSettings websettings = (StarCLEWebSettings)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( websettings == null )
        			return;
        		websettings.websettings = null;
        		return;
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setJavaScriptEnabled(StarObjectClass self,boolean flag) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setJavaScriptEnabled(StarObjectClass self,boolean flag){
        		StarCLEWebSettings websettings = (StarCLEWebSettings)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( websettings == null || websettings.websettings == null )
        			return;
        		websettings.websettings.setJavaScriptEnabled(flag);
        	}
        });            
		return true;
	}	
}