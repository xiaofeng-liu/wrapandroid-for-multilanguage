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
import android.graphics.Canvas;
import android.graphics.Rect;

import java.io.IOException;
import java.io.InputStream;
import java.util.Hashtable;
import java.util.Stack;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.File;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class SurfaceViewClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init SurfaceViewClass");

        /* SurfaceViewClass Body */
        Service._GetObject("SurfaceViewClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLESurfaceView surfaceview = new StarCLESurfaceView((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)surfaceview);
        		if( parent != null ){
        			if( activity == parent ){
        				Activity android_activity = (Activity)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        				android_activity.setContentView(surfaceview);
        			}else{
        				ViewGroup android_viewgroup = (ViewGroup)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        				android_viewgroup.addView(surfaceview);
        			}
        			self._LockGC();
        			self._Call("decAndroidRef");  // release with parent
        		}        		
        		return;
        	}     
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  draw(StarObjectClass self,StarObjectClass canvas) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  draw(StarObjectClass self,StarObjectClass canvas){ 
        		StarCLESurfaceView StarCLESurfaceView = (StarCLESurfaceView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( StarCLESurfaceView == null )
        			return;
        		StarCLECanvas android_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(canvas,"AndroidObject");
        		StarCLESurfaceView.draw((Canvas)android_canvas.GetAndroidObject());
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setVisibility(StarObjectClass self,int visibility) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setVisibility(StarObjectClass self,int visibility){ 
        		StarCLESurfaceView StarCLESurfaceView = (StarCLESurfaceView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( StarCLESurfaceView == null )
        			return;
        		StarCLESurfaceView.setVisibility(visibility);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setZOrderMediaOverlay(StarObjectClass self,boolean isMediaOverlay) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setZOrderMediaOverlay(StarObjectClass self,boolean isMediaOverlay){ 
        		StarCLESurfaceView StarCLESurfaceView = (StarCLESurfaceView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( StarCLESurfaceView == null )
        			return;
        		StarCLESurfaceView.setZOrderMediaOverlay(isMediaOverlay);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setZOrderOnTop(StarObjectClass self,boolean onTop) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setZOrderOnTop(StarObjectClass self,boolean onTop){ 
        		StarCLESurfaceView StarCLESurfaceView = (StarCLESurfaceView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( StarCLESurfaceView == null )
        			return;
        		StarCLESurfaceView.setZOrderOnTop(onTop);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isCreating(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isCreating(StarObjectClass self) { 
        		StarCLESurfaceView StarCLESurfaceView = (StarCLESurfaceView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( StarCLESurfaceView == null )
        			return false;
        		return StarCLESurfaceView.getHolder().isCreating();
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public StarObjectClass  lockCanvas1(StarObjectClass self,StarObjectClass dirty) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public StarObjectClass  lockCanvas1(StarObjectClass self,StarObjectClass dirty){ 
        		StarCLESurfaceView StarCLESurfaceView = (StarCLESurfaceView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( StarCLESurfaceView == null )
        			return null;
				if( StarCLESurfaceView.BasicCanvasObject == null )
					StarCLESurfaceView.BasicCanvasObject = ((StarServiceClass)self._Get("_Service"))._GetObject("CanvasClass")._New();
				Canvas android_canvas = StarCLESurfaceView.getHolder().lockCanvas(new Rect(dirty._Getint("left"),dirty._Getint("top"),dirty._Getint("right"),dirty._Getint("bottom")));
				if( android_canvas == null )
					return null;
				StarCLECanvas star_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(StarCLESurfaceView.BasicCanvasObject,"AndroidObject");
				star_canvas.SetAndroidObject(android_canvas);
				return StarCLESurfaceView.BasicCanvasObject;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public StarObjectClass  lockCanvas(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public StarObjectClass  lockCanvas(StarObjectClass self){ 
        		StarCLESurfaceView StarCLESurfaceView = (StarCLESurfaceView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( StarCLESurfaceView == null )
        			return null;
				if( StarCLESurfaceView.BasicCanvasObject == null )
					StarCLESurfaceView.BasicCanvasObject = ((StarServiceClass)self._Get("_Service"))._GetObject("CanvasClass")._New();
				Canvas android_canvas = StarCLESurfaceView.getHolder().lockCanvas();
				if( android_canvas == null )
					return null;
				StarCLECanvas star_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(StarCLESurfaceView.BasicCanvasObject,"AndroidObject");
				star_canvas.SetAndroidObject(android_canvas);
				return StarCLESurfaceView.BasicCanvasObject;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  unlockCanvasAndPost(StarObjectClass self,StarObjectClass canvas) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  unlockCanvasAndPost(StarObjectClass self,StarObjectClass canvas){ 
        		StarCLESurfaceView StarCLESurfaceView = (StarCLESurfaceView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( StarCLESurfaceView == null )
        			return;
        		StarCLECanvas star_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(canvas,"AndroidObject");
        		StarCLESurfaceView.getHolder().unlockCanvasAndPost((Canvas)star_canvas.GetAndroidObject());
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  surfaceChanged(StarObjectClass self,int format, int width, int height) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note default function
        	 */
        	public void  surfaceChanged(StarObjectClass self,int format, int width, int height){
        		return;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  draw(StarObjectClass self,StarObjectClass canvas) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note default function
        	 */
        	public void  surfaceCreated(StarObjectClass self){
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  draw(StarObjectClass self,StarObjectClass canvas) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note default function
        	 */
        	public void  surfaceDestroyed(StarObjectClass self){
        		return;
        	} 
   	
        });    
        
		return true;
	}	
}