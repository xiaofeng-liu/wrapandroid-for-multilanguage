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
import android.graphics.drawable.shapes.Shape;

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

public class ShapeClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init ShapeClass");

        /* ShapeClass Body */
        Service._GetObject("ShapeClass")._Assign(new StarObjectClass(){
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public float  getHeight(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public float  getHeight(StarObjectClass self){
        		BasicAndroidInterface androidinterface = (BasicAndroidInterface)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( androidinterface != null && androidinterface.GetAndroidObject() != null )
        			return ((Shape)androidinterface.GetAndroidObject()).getHeight();
        		return 0;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public float  getWidth(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public float  getWidth(StarObjectClass self){
        		BasicAndroidInterface androidinterface = (BasicAndroidInterface)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( androidinterface != null && androidinterface.GetAndroidObject() != null )
        			return ((Shape)androidinterface.GetAndroidObject()).getWidth();
        		return 0;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  hasAlpha(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  hasAlpha(StarObjectClass self){
        		BasicAndroidInterface androidinterface = (BasicAndroidInterface)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( androidinterface != null && androidinterface.GetAndroidObject() != null )
        			return ((Shape)androidinterface.GetAndroidObject()).hasAlpha();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  resize(StarObjectClass self,float width, float height) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  resize(StarObjectClass self,float width, float height){
        		BasicAndroidInterface androidinterface = (BasicAndroidInterface)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( androidinterface != null && androidinterface.GetAndroidObject() != null )
        			((Shape)androidinterface.GetAndroidObject()).resize(width,height);
        		return;
        	}        	   	
        });    
        
		return true;
	}	
}