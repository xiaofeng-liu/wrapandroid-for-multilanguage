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
import android.graphics.drawable.shapes.RoundRectShape;

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

public class RoundRectShapeClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init RoundRectShapeClass");

        /* RoundRectShapeClass Body */
        Service._GetObject("RoundRectShapeClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLERoundRectShape roundrectshape = new StarCLERoundRectShape((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)roundrectshape);
        		return;
        	}       	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  draw(StarObjectClass self,StarObjectClass canvas,StarObjectClass paint) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  draw(StarObjectClass self,StarObjectClass canvas,StarObjectClass paint){
        		StarCLERoundRectShape roundrectshape = (StarCLERoundRectShape)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		StarCLECanvas star_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(canvas,"AndroidObject");        			
        		if( roundrectshape != null && roundrectshape.GetAndroidObject() != null ){
            		if( paint != null ){
            		    StarCLEPaint star_paint = (StarCLEPaint)WrapAndroidClass.GetAndroidObject(paint,"AndroidObject");
            			((RoundRectShape)roundrectshape.GetAndroidObject()).draw((Canvas)star_canvas.GetAndroidObject(),(Paint)star_paint.GetAndroidObject());
            		}else
            			((RoundRectShape)roundrectshape.GetAndroidObject()).draw((Canvas)star_canvas.GetAndroidObject(),null);
        		}
        	}	
        });    
        
		return true;
	}	
}