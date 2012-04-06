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

public class BundleClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init BundleClass");
	
        /* BundleClass Body */
        Service._GetObject("BundleClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEBundle bundle = new StarCLEBundle((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)bundle);
        		return;
        	}  
        	/* onDestroyAndroid function */
        	public void onDestroyAndroid( StarObjectClass self ){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null )
        			return;
        		bundle.bundle = null;
        		return;
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  clear(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  clear(StarObjectClass self){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return;
        		bundle.bundle.clear();
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  containsKey(StarObjectClass self,String key) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  containsKey(StarObjectClass self,String key){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return false;
        		return bundle.bundle.containsKey(key);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  getBoolean(StarObjectClass self,String key) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  getBoolean(StarObjectClass self,String key){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return false;
        		return bundle.bundle.getBoolean(key);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  getBoolean1(StarObjectClass self,String key, boolean defaultValue) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  getBoolean1(StarObjectClass self,String key, boolean defaultValue){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return false;
        		return bundle.bundle.getBoolean(key,defaultValue);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public String  getCharSequence(StarObjectClass self,String key) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public String  getCharSequence(StarObjectClass self,String key){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return null;
        		return (String)bundle.bundle.getCharSequence(key);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public float  getFloat(StarObjectClass self,String key) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public float  getFloat(StarObjectClass self,String key){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return 0.0f;
        		return bundle.bundle.getFloat(key);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public float  getFloat1(StarObjectClass self,String key, float defaultValue) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public float  getFloat1(StarObjectClass self,String key, float defaultValue){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return 0.0f;
        		return bundle.bundle.getFloat(key,defaultValue);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getInt(StarObjectClass self,String key) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getInt(StarObjectClass self,String key){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return 0;
        		return bundle.bundle.getInt(key);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getInt1(StarObjectClass self,String key, int defaultValue) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getInt1(StarObjectClass self,String key, int defaultValue){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return 0;
        		return bundle.bundle.getInt(key,defaultValue);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  putBoolean(StarObjectClass self,String key, boolean value) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  putBoolean(StarObjectClass self,String key, boolean value){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return;
        		bundle.bundle.putBoolean(key,value);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  putCharSequence(StarObjectClass self,String key, String value) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  putCharSequence(StarObjectClass self,String key, String value){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return;
        		bundle.bundle.putCharSequence(key,value);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  putFloat(StarObjectClass self,String key, float value) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  putFloat(StarObjectClass self,String key, float value){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return;
        		bundle.bundle.putFloat(key,value);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  putInt(StarObjectClass self,String key, int value) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  putInt(StarObjectClass self,String key, int value){
        		StarCLEBundle bundle = (StarCLEBundle)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( bundle == null || bundle.bundle == null )
        			return;
        		bundle.bundle.putInt(key,value);
        	}          	
        });            
		return true;
	}	
}