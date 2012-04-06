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
import android.graphics.Path;
import android.widget.Toast;

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

public class ToastClass{
	/**
	 * @note do not call Init method directly
	 *       Instance of PaintClass should be freed manually
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init ToastClass");

        /* ToastClass Body */
        Service._GetObject("ToastClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEToast toast = new StarCLEToast((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)toast);
        		return;
        	}       
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  cancel(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public void  cancel(StarObjectClass self){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null ){
        			((Toast)toast.GetAndroidObject()).cancel();
        			self._LockGC();
        			self._Call("decAndroidRef");  // release with parent
        		}
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getDuration(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public int  getDuration(StarObjectClass self){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			return ((Toast)toast.GetAndroidObject()).getDuration();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getGravity(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getGravity(StarObjectClass self){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			return ((Toast)toast.GetAndroidObject()).getGravity();
        		return 0;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public float  getHorizontalMargin(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public float  getHorizontalMargin(StarObjectClass self){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			return ((Toast)toast.GetAndroidObject()).getHorizontalMargin();
        		return 0;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public float  getVerticalMargin(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public float  getVerticalMargin(StarObjectClass self){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			return ((Toast)toast.GetAndroidObject()).getVerticalMargin();
        		return 0;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getXOffset(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getXOffset(StarObjectClass self){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			return ((Toast)toast.GetAndroidObject()).getXOffset();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getYOffset(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getYOffset(StarObjectClass self){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			return ((Toast)toast.GetAndroidObject()).getYOffset();
        		return 0;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public StarObjectClass  makeText(StarObjectClass self,String text, int duration) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public StarObjectClass  makeText(StarObjectClass self,String text, int duration){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null ){
            		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
            		toast.SetAndroidObject(((Toast)toast.GetAndroidObject()).makeText((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),text,duration));
            		return self;
        		}
        		return null;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setDuration(StarObjectClass self,int duration) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setDuration(StarObjectClass self,int duration){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			((Toast)toast.GetAndroidObject()).setDuration(duration);
        		return;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setGravity(StarObjectClass self,int gravity, int xOffset, int yOffset) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setGravity(StarObjectClass self,int gravity, int xOffset, int yOffset){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			((Toast)toast.GetAndroidObject()).setGravity(gravity,xOffset,yOffset);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMargin(StarObjectClass self,float horizontalMargin, float verticalMargin) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMargin(StarObjectClass self,float horizontalMargin, float verticalMargin){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			((Toast)toast.GetAndroidObject()).setMargin(horizontalMargin,verticalMargin);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setText(StarObjectClass self,String s) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setText(StarObjectClass self,String s){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null )
        			((Toast)toast.GetAndroidObject()).setText(s);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setView(StarObjectClass self,StarObjectClass view) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note view will be freed by Toast
        	 */
        	public void  setView(StarObjectClass self,StarObjectClass view){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null && view != null ){
        			BasicAndroidInterface androidinterface = (BasicAndroidInterface)WrapAndroidClass.GetAndroidObject(view,"AndroidObject");
        			((Toast)toast.GetAndroidObject()).setView((View)androidinterface.GetAndroidObject());
        			view._LockGC();
        			view._Call("decAndroidRef");  // release with parent        			
        		}
        		return;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  show(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  show(StarObjectClass self){
        		StarCLEToast toast = (StarCLEToast)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( toast != null ){
        			((Toast)toast.GetAndroidObject()).show();
        			self._LockGC();
        			self._Call("decAndroidRef");  // release with parent
        		}
        		return;
        	}  
        	
        });    
        
		return true;
	}	
}