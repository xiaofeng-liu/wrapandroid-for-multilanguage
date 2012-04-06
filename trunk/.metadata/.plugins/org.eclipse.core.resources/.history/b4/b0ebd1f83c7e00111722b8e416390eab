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
import android.graphics.drawable.shapes.ArcShape;

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

public class ArcShapeClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init ArcShapeClass");

        /* ArcShapeClass Body */
        Service._GetObject("ArcShapeClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEArcShape arcshape = new StarCLEArcShape((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)arcshape);
        		return;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  init(StarObjectClass self,float startAngle, float sweepAngle ) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  init(StarObjectClass self,float startAngle, float sweepAngle ){
        		StarCLEArcShape arcshape = (StarCLEArcShape)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( arcshape != null )
        			arcshape.SetAndroidObject(new ArcShape(startAngle,sweepAngle));
        	}	        	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  draw(StarObjectClass self,StarObjectClass canvas,StarObjectClass paint) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  draw(StarObjectClass self,StarObjectClass canvas,StarObjectClass paint){
        		StarCLEArcShape arcshape = (StarCLEArcShape)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		StarCLECanvas star_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(canvas,"AndroidObject");        			
        		if( arcshape != null && arcshape.GetAndroidObject() != null ){
            		if( paint != null ){
            		    StarCLEPaint star_paint = (StarCLEPaint)WrapAndroidClass.GetAndroidObject(paint,"AndroidObject");
            			((ArcShape)arcshape.GetAndroidObject()).draw((Canvas)star_canvas.GetAndroidObject(),(Paint)star_paint.GetAndroidObject());
            		}else
            			((ArcShape)arcshape.GetAndroidObject()).draw((Canvas)star_canvas.GetAndroidObject(),null);
        		}
        	}	
        });    
        
		return true;
	}	
}