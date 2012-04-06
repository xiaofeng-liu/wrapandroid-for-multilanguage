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
import android.graphics.drawable.AnimationDrawable;
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

public class AnimationDrawableClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init AnimationDrawableClass");

        /* AnimationDrawableClass Body */
        Service._GetObject("AnimationDrawableClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEAnimationDrawable animationdrawable = new StarCLEAnimationDrawable((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)animationdrawable);
        		return;
        	}       	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  addFrame(StarObjectClass self,StarObjectClass frame, int duration) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @param frame will be freed with AnimationDrawableClass
        	 */
        	public void  addFrame(StarObjectClass self,StarObjectClass frame, int duration){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null ){
        			BasicAndroidInterface androidinterface = (BasicAndroidInterface)WrapAndroidClass.GetAndroidObject(frame,"AndroidObject");
        			Drawable drawable = (Drawable)androidinterface.GetAndroidObject();
        			((AnimationDrawable)animationdrawable.GetAndroidObject()).addFrame(drawable,duration);
        			animationdrawable.AddRef(androidinterface);
        			frame._LockGC();
        			frame._Call("decAndroidRef");  // release with parent        			
        		}
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getDuration(StarObjectClass self,int i) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getDuration(StarObjectClass self,int i){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null )
        			return ((AnimationDrawable)animationdrawable.GetAndroidObject()).getDuration(i);
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getNumberOfFrames(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getNumberOfFrames(StarObjectClass self){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null )
        			return ((AnimationDrawable)animationdrawable.GetAndroidObject()).getNumberOfFrames();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isOneShot(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isOneShot(StarObjectClass self){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null )
        			return ((AnimationDrawable)animationdrawable.GetAndroidObject()).isOneShot();
        		return false;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isRunning(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isRunning(StarObjectClass self){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null )
        			return ((AnimationDrawable)animationdrawable.GetAndroidObject()).isRunning();
        		return false;
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  run(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  run(StarObjectClass self){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null )
        			((AnimationDrawable)animationdrawable.GetAndroidObject()).run();
        		return;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setOneShot(StarObjectClass self,boolean oneShot) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setOneShot(StarObjectClass self,boolean oneShot){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null )
        			((AnimationDrawable)animationdrawable.GetAndroidObject()).setOneShot(oneShot);
        		return;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  setVisible(StarObjectClass self,boolean visible, boolean restart) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  setVisible(StarObjectClass self,boolean visible, boolean restart){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null )
        			return ((AnimationDrawable)animationdrawable.GetAndroidObject()).setVisible(visible,restart);
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  start(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  start(StarObjectClass self){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null )
        			((AnimationDrawable)animationdrawable.GetAndroidObject()).start();
        		return;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  stop(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  stop(StarObjectClass self){
        		StarCLEAnimationDrawable animationdrawable = (StarCLEAnimationDrawable)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( animationdrawable != null && animationdrawable.GetAndroidObject() != null )
        			((AnimationDrawable)animationdrawable.GetAndroidObject()).stop();
        		return;
        	}    	
        });    
        
		return true;
	}	
}