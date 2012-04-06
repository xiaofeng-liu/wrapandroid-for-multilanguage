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

import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Stack;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class GridViewClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init RadioButtonClass");

		class StarCLEGridView extends GridView implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject; 
			private List<Object> RefList;
			public StarCLEGridView(Context ctx,StarObjectClass In_Object){
				super(ctx);
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;}; 
			public Object GetAndroidObject(){return this;}
			public void SetAndroidObject(Object object){SrvGroup._PrintError(1, "RadioButtonClass not support SetAndroidObject" );}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}
        
        /* GridViewClass Body */
        Service._GetObject("GridViewClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEGridView view = new StarCLEGridView((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)view);    
        		if( parent != null ){
        			if( activity == parent ){
        				Activity android_activity = (Activity)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        				android_activity.setContentView(view);
        			}else{
        				ViewGroup android_viewgroup = (ViewGroup)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        				android_viewgroup.addView(view);
        			}
        			self._LockGC();
        			self._Call("decAndroidRef");  // release with parent
        		}
        		return;
        	}       
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setNumColumns(StarObjectClass self,int numColumns) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setNumColumns(StarObjectClass self,int numColumns){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		GridView view = (GridView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setNumColumns(numColumns);
        	}     
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setSelection(StarObjectClass self,int setSelection) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setSelection(StarObjectClass self,int setSelection){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		GridView view = (GridView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setSelection(setSelection);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setStretchMode(StarObjectClass self,String stretchMode) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @param stretchMode "NO_STRETCH", STRETCH_SPACING, STRETCH_SPACING_UNIFORM, or STRETCH_COLUMN_WIDTH
        	 */
        	public void setStretchMode(StarObjectClass self,String stretchMode){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		GridView view = (GridView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null ){
        			if( stretchMode.equals("NO_STRETCH"))
        				view.setStretchMode(GridView.NO_STRETCH);
        			else if( stretchMode.equals("STRETCH_SPACING"))
        				view.setStretchMode(GridView.STRETCH_SPACING);   
        			else if( stretchMode.equals("STRETCH_SPACING_UNIFORM"))
        				view.setStretchMode(GridView.STRETCH_SPACING_UNIFORM);    
        			else if( stretchMode.equals("STRETCH_COLUMN_WIDTH"))
        				view.setStretchMode(GridView.STRETCH_COLUMN_WIDTH);   
        		}
        	}      
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setVerticalSpacing(StarObjectClass self,int verticalSpacing) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setVerticalSpacing(StarObjectClass self,int verticalSpacing){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		GridView view = (GridView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setVerticalSpacing(verticalSpacing);
        	}        
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setHorizontalSpacing(StarObjectClass self,int verticalSpacing) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setHorizontalSpacing(StarObjectClass self,int horizontalSpacing){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		GridView view = (GridView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setHorizontalSpacing(horizontalSpacing);
        	}         	
        });   
        
		return true;
	}	
}