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
import android.graphics.drawable.BitmapDrawable;
import android.graphics.Canvas;
import android.graphics.Bitmap;
import android.graphics.Path;
import android.graphics.Paint;
import android.graphics.Shader.TileMode;
import android.graphics.drawable.*;
import android.graphics.Rect;

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

public class TransitionDrawableClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init TransitionDrawableClass");

        /* TransitionDrawableClass Body */
        Service._GetObject("TransitionDrawableClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLETransitionDrawable transitiondrawable = new StarCLETransitionDrawable((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)transitiondrawable);
        		return;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean Init(StarObjectClass self,StarParaPkgClass layers) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @param layers set of strings of object's ID
        	 */        	
        	public boolean Init(StarObjectClass self,StarParaPkgClass layers){
        		StarCLETransitionDrawable transitiondrawable = (StarCLETransitionDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( transitiondrawable != null ){
        			int number = layers._Getint("_Number");
        			if( number == 0 )
        				return false;
        			StarObjectClass[] starobject = new StarObjectClass[number];
        			Drawable[] drawable = new Drawable[number];
        			for( int i=0; i < number ;i ++ ){
        				String objectid = (String)layers._Get(i);
        				starobject[i] = Service._GetObjectEx(objectid);
        				BasicAndroidInterface androidinterface = (BasicAndroidInterface)WrapAndroidClass.GetAndroidObject(starobject[i],"AndroidObject");
        				drawable[i] = (Drawable)androidinterface.GetAndroidObject();
        			}
        			transitiondrawable.SetAndroidObject(new TransitionDrawable(drawable));
        			for( int i=0; i < number ;i ++ ){
        				transitiondrawable.AddRef(starobject[i]);
        				starobject[i]._LockGC();
        				starobject[i]._Call("decAndroidRef");  // release with parent        				
        			}        			
        			return true;
        		}
        		return false;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  draw(StarObjectClass self,StarObjectClass canvas) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  draw(StarObjectClass self,StarObjectClass canvas){
        		StarCLETransitionDrawable transitiondrawable = (StarCLETransitionDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		StarCLECanvas star_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(canvas,"AndroidObject");
        		if( transitiondrawable != null && transitiondrawable.GetAndroidObject() != null )
        			((TransitionDrawable)transitiondrawable.GetAndroidObject()).draw((Canvas)star_canvas.GetAndroidObject());        		
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isCrossFadeEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public boolean  isCrossFadeEnabled(StarObjectClass self){
        		StarCLETransitionDrawable transitiondrawable = (StarCLETransitionDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( transitiondrawable != null && transitiondrawable.GetAndroidObject() != null )
        			return ((TransitionDrawable)transitiondrawable.GetAndroidObject()).isCrossFadeEnabled();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  resetTransition(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  resetTransition(StarObjectClass self){
        		StarCLETransitionDrawable transitiondrawable = (StarCLETransitionDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( transitiondrawable != null && transitiondrawable.GetAndroidObject() != null )
        			((TransitionDrawable)transitiondrawable.GetAndroidObject()).resetTransition();
        		return;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  reverseTransition(StarObjectClass self,int duration) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  reverseTransition(StarObjectClass self,int duration){
        		StarCLETransitionDrawable transitiondrawable = (StarCLETransitionDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( transitiondrawable != null && transitiondrawable.GetAndroidObject() != null )
        			((TransitionDrawable)transitiondrawable.GetAndroidObject()).reverseTransition(duration);
        		return;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setCrossFadeEnabled(StarObjectClass self,boolean enabled) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setCrossFadeEnabled(StarObjectClass self,boolean enabled){
        		StarCLETransitionDrawable transitiondrawable = (StarCLETransitionDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( transitiondrawable != null && transitiondrawable.GetAndroidObject() != null )
        			((TransitionDrawable)transitiondrawable.GetAndroidObject()).setCrossFadeEnabled(enabled);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  startTransition(StarObjectClass self,int durationMillis) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  startTransition(StarObjectClass self,int durationMillis){
        		StarCLETransitionDrawable transitiondrawable = (StarCLETransitionDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( transitiondrawable != null && transitiondrawable.GetAndroidObject() != null )
        			((TransitionDrawable)transitiondrawable.GetAndroidObject()).startTransition(durationMillis);
        		return;
        	}    	
        });    
        
		return true;
	}	
}