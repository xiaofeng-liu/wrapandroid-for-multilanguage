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

public class PathClass{
	/**
	 * @note do not call Init method directly
	 *       Instance of PaintClass should be freed manually
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init PathClass");

        /* PathClass Body */
        Service._GetObject("PathClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEPath path = new StarCLEPath((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)path);
        		return;
        	}       
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  close(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public void  close(StarObjectClass self){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).close();
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  cubicTo(StarObjectClass self,float x1, float y1, float x2, float y2, float x3, float y3) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  cubicTo(StarObjectClass self,float x1, float y1, float x2, float y2, float x3, float y3){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).cubicTo(x1,y1,x2,y2,x3,y3);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isEmpty(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public boolean  isEmpty(StarObjectClass self){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			return ((Path)path.GetAndroidObject()).isEmpty();
        		return true;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  lineTo(StarObjectClass self,float x, float y) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  lineTo(StarObjectClass self,float x, float y){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).lineTo(x,y);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  moveTo(StarObjectClass self,float x, float y) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  moveTo(StarObjectClass self,float x, float y){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).moveTo(x,y);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  quadTo(StarObjectClass self,float x1, float y1, float x2, float y2) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  quadTo(StarObjectClass self,float x1, float y1, float x2, float y2){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).quadTo(x1,y1,x2,y2);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  rCubicTo(StarObjectClass self,float x1, float y1, float x2, float y2, float x3, float y3) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  rCubicTo(StarObjectClass self,float x1, float y1, float x2, float y2, float x3, float y3){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).rCubicTo(x1,y1,x2,y2,3,y3);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  rLineTo(StarObjectClass self,float dx, float dy) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  rLineTo(StarObjectClass self,float dx, float dy){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).rLineTo(dx,dy);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  rMoveTo(StarObjectClass self,float dx, float dy) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  rMoveTo(StarObjectClass self,float dx, float dy){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).rMoveTo(dx,dy);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  rQuadTo(StarObjectClass self,float dx1, float dy1, float dx2, float dy2) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  rQuadTo(StarObjectClass self,float dx1, float dy1, float dx2, float dy2){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).rQuadTo(dx1,dy1,dx2,dy2);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  reset(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  reset(StarObjectClass self){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).reset();
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  rewind(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  rewind(StarObjectClass self){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).rewind();
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setFillType(StarObjectClass self,String ft) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @param ft "EVEN_ODD" "INVERSE_EVEN_ODD" "INVERSE_WINDING" "WINDING"
        	 */          	
        	public void  setFillType(StarObjectClass self,String ft){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null ){
        			if( ft.equals("EVEN_ODD"))
        				((Path)path.GetAndroidObject()).setFillType(Path.FillType.EVEN_ODD);
        			else if( ft.equals("INVERSE_EVEN_ODD"))
        				((Path)path.GetAndroidObject()).setFillType(Path.FillType.INVERSE_EVEN_ODD);
        			else if( ft.equals("INVERSE_WINDING"))
        				((Path)path.GetAndroidObject()).setFillType(Path.FillType.INVERSE_WINDING);
        			else if( ft.equals("WINDING"))
        				((Path)path.GetAndroidObject()).setFillType(Path.FillType.WINDING);        			        			
        		}
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setLastPoint(StarObjectClass self,float dx, float dy) </td></tr>
        	 *   </table>
        	 * </div>
        	 */          	
        	public void  setLastPoint(StarObjectClass self,float dx, float dy){
        		StarCLEPath path = (StarCLEPath)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( path != null )
        			((Path)path.GetAndroidObject()).setLastPoint(dx,dy);
        	}  
        	
        });    
        
		return true;
	}	
}