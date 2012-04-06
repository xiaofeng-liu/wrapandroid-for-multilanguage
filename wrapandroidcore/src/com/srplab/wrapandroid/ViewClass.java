package com.srplab.wrapandroid;

import android.app.Activity;
import android.os.Bundle;
import android.content.res.AssetManager;
import android.widget.*;
import android.content.Context;
import android.view.*;
import android.widget.LinearLayout;
import android.widget.AbsoluteLayout.LayoutParams;
import android.util.*;
import android.widget.RadioGroup.OnCheckedChangeListener;
import android.net.Uri;
import android.widget.LinearLayout.*;
import android.widget.RadioGroup.LayoutParams.*;
import android.graphics.Canvas;
import android.view.MotionEvent;

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

public class ViewClass{
	static public StarObjectClass motionevent;
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		if( motionevent != null ){
			motionevent._Free();
			motionevent = null;
		}
		
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;		
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init ViewClass");

		class StarCLEView extends View implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;     
			private StarObjectClass BasicCanvasObject;	
			private List<Object> RefList;
			public StarCLEView(Context ctx,StarObjectClass In_Object){
				super(ctx);
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);	
				BasicCanvasObject = null;
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};  
			public Object GetAndroidObject(){return this;}
			public void SetAndroidObject(Object object){SrvGroup._PrintError(1, "ViewClass not support SetAndroidObject" );}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
				if( BasicCanvasObject != null )
					BasicCanvasObject._Free();
			}	
			@Override
		     protected void onDraw(Canvas canvas){
				StarObjectClass self = BasicAndroidObject.getStarObject();
				StarObjectClass definedclass = self._DefinedClass("onDraw");
				StarObjectClass basicclass = Service._GetObject("ViewClass");
				if( definedclass._GetStr("_ID").equals(basicclass._GetStr("_ID")) ){
					super.onDraw(canvas);
					return;
				}
				if( BasicCanvasObject == null )
					BasicCanvasObject = Service._GetObject("CanvasClass")._New();
				StarCLECanvas star_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(BasicCanvasObject,"AndroidObject");
				star_canvas.SetAndroidObject(canvas);
				self._Call("onDraw", BasicCanvasObject);
			}
			public void onSuperDraw(StarObjectClass canvas){
				StarCLECanvas star_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(canvas,"AndroidObject");
				if( star_canvas != null )
					super.onDraw((Canvas)star_canvas.GetAndroidObject());
			}
			
			@Override
		     protected void onLayout(boolean changed, int left, int top, int right, int bottom) {
				StarObjectClass self = BasicAndroidObject.getStarObject();
				StarObjectClass definedclass = self._DefinedClass("onLayout");
				StarObjectClass basicclass = Service._GetObject("ViewClass");
				if( definedclass._GetStr("_ID").equals(basicclass._GetStr("_ID")) ){
					super.onLayout(changed, left, top, right, bottom);
					return;
				}
				self._Call("onLayout", changed,left, top, right, bottom);
			}
			public void onSuperLayout(boolean changed, int left, int top, int right, int bottom){
				super.onLayout(changed, left, top, right, bottom);
			}	
			
			@Override
		     protected void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {
				StarObjectClass self = BasicAndroidObject.getStarObject();
				StarObjectClass definedclass = self._DefinedClass("onMeasure");
				StarObjectClass basicclass = Service._GetObject("ViewClass");
				if( definedclass._GetStr("_ID").equals(basicclass._GetStr("_ID")) ){
					super.onMeasure(widthMeasureSpec, heightMeasureSpec);
					return;
				}
				self._Call("onMeasure", widthMeasureSpec, heightMeasureSpec);
			}
			public void onSuperMeasure(int widthMeasureSpec, int heightMeasureSpec){
				super.onMeasure(widthMeasureSpec, heightMeasureSpec);
			}	
			
			@Override
		     protected void onSizeChanged(int w, int h, int oldw, int oldh) {
				StarObjectClass self = BasicAndroidObject.getStarObject();
				StarObjectClass definedclass = self._DefinedClass("onSizeChanged");
				StarObjectClass basicclass = Service._GetObject("ViewClass");
				if( definedclass._GetStr("_ID").equals(basicclass._GetStr("_ID")) ){
					super.onSizeChanged(w, h, oldw, oldh);
					return;
				}
				self._Call("onSizeChanged", w, h, oldw, oldh);
			}
			public void onSuperSizeChanged(int w, int h, int oldw, int oldh){
				super.onSizeChanged(w, h, oldw, oldh);
			}				
			
			void _setMeasuredDimension(int measuredWidth,int measuredHeight){
				super.setMeasuredDimension(measuredWidth,measuredHeight);
			}
		}
		
		Service._GetObject("ViewClass")._Assign(new StarObjectClass(){ 
        	/* _OnCreate Event */
        	public Object[] _OnCreate(Hashtable Ev){
        		StarObjectClass self = (StarObjectClass)Ev.get("_DesObject");        		        		
			    self._Call("onCreateAndroid");
			    /*set event for View*/
			    View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
			    if( view != null )
			        self._SLockGC();
			    else{
			    	SrvGroup._Print("Create view failed...");
			    	return null;
			    }			    
			    StarObjectClass adapterviewclass = Service._GetObject("AdapterViewClass");
			    StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
			    if( adapterviewclass._IsInst(self) == false &&
			    	parent != null	){
	            	/**
	            	 * <div class="memproto">
	            	 *   <table class="memname">
	            	 *     <tr><td class="memname">Event : onClick(Hashtable Ev) </td></tr>
	            	 *   </table>
	            	 * </div>
	            	 */        					    	
			    	view.setOnClickListener(new View.OnClickListener(){ 
			    		public void onClick(View v) {
			    			StarObjectClass self = ((BasicAndroidInterface)v).getBasicAndroid().getStarObject();
			    			if( self._Getbool("_IsValid") == false )
			    				return;
			    			self._ProcessEvent("onClick");
			    		} 
			    	});
      					    	
			    	view.setOnTouchListener(new View.OnTouchListener(){ 
			    		public boolean  onTouch(View v, MotionEvent event) {
			    			StarObjectClass self = ((BasicAndroidInterface)v).getBasicAndroid().getStarObject();
			    	    	StarObjectClass definedclass = self._DefinedClass("onTouchEvent");
			    	    	StarObjectClass basicclass = Service._GetObject("ActivityClass");
			    			if( definedclass == null || definedclass._GetStr("_ID").equals(basicclass._GetStr("_ID")) )
			    				return false;
			    			if( motionevent == null )
			    				motionevent = Service._GetObject("MotionEventClass")._New();
			    			StarCLEMotionEvent star_motionevent = (StarCLEMotionEvent)WrapAndroidClass.GetAndroidObject(motionevent,"AndroidObject");
			    			star_motionevent.motionevent = event;
			    			boolean Result = self._Tobool(self._Call("onTouchEvent", motionevent));
			    			star_motionevent.motionevent = null;
			    			return Result;
			    		} 
			    	});			    	
			    }
			    WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "starobject : "+self+" is created");
			    return null;
        	}     
        	/* _OnParentChange Event */
        	public Object[] _OnParentChange(Hashtable Ev){
        		StarObjectClass self = (StarObjectClass)Ev.get("_DesObject");        		        		
			    /*set event for View*/
			    View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
			    StarObjectClass adapterviewclass = Service._GetObject("AdapterViewClass");
			    StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
			    if( adapterviewclass._IsInst(self) == false && 
			    	parent != null ){
			    	view.setOnClickListener(new View.OnClickListener(){ 
			    		public void onClick(View v) {
			    			StarObjectClass self = ((BasicAndroidInterface)v).getBasicAndroid().getStarObject();
			    			self._ProcessEvent("onClick");
			    		} 
			    	});
			    }
			    WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "starobject : "+self+" parent changed");
			    return null;
        	}        	
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEView view = new StarCLEView((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
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
        	}			  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setAbsoluteLayoutParams(StarObjectClass self,int width,int height,int x,int y) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setAbsoluteLayoutParams(StarObjectClass self,int width,int height,int x,int y){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
       			AbsoluteLayout.LayoutParams par = (AbsoluteLayout.LayoutParams)view.getLayoutParams();
       			if( par == null ){
       				par = new AbsoluteLayout.LayoutParams(width,height,x,y);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			par.x = x;
       			par.y = y;
       			view.setLayoutParams(par);
       			return;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setLinearLayoutParams(StarObjectClass self,int width,int height) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setLinearLayoutParams(StarObjectClass self,int width,int height){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
       			LinearLayout.LayoutParams  par = (LinearLayout.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new LinearLayout.LayoutParams(width,height);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			view.setLayoutParams(par);
       			return;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setLinearWeightLayoutParams(StarObjectClass self,int width,int height,double weight) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setLinearWeightLayoutParams(StarObjectClass self,int width,int height,double weight){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
       			LinearLayout.LayoutParams  par = (LinearLayout.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new LinearLayout.LayoutParams(width,height,(float)weight);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			par.weight = (float)weight;
       			view.setLayoutParams(par);
       			return;
        	}     
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setTableLayoutParams(StarObjectClass self,int width,int height) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setTableLayoutParams(StarObjectClass self,int width,int height){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
       			TableLayout.LayoutParams  par = (TableLayout.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new TableLayout.LayoutParams(width,height);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			view.setLayoutParams(par);
       			return;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setTableWeightLayoutParams(StarObjectClass self,int width,int height,double weight) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setTableWeightLayoutParams(StarObjectClass self,int width,int height,double weight){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
       			TableLayout.LayoutParams  par = (TableLayout.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new TableLayout.LayoutParams(width,height,(float)weight);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			par.weight = (float)weight;
       			view.setLayoutParams(par);
       			return;
        	}     
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setTableRowLayoutParams(StarObjectClass self,int width,int height) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setTableRowLayoutParams(StarObjectClass self,int width,int height){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		TableRow.LayoutParams  par = (TableRow.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new TableRow.LayoutParams(width,height);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			view.setLayoutParams(par);
       			return;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setTableRowWeightLayoutParams(StarObjectClass self,int width,int height,double weight) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setTableRowWeightLayoutParams(StarObjectClass self,int width,int height,double weight){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		TableRow.LayoutParams  par = (TableRow.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new TableRow.LayoutParams(width,height,(float)weight);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			par.weight = (float)weight;
       			view.setLayoutParams(par);
       			return;
        	}             
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setRadioGroupLayoutParams(StarObjectClass self,int width,int height) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setRadioGroupLayoutParams(StarObjectClass self,int width,int height){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		RadioGroup.LayoutParams  par = (RadioGroup.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new RadioGroup.LayoutParams(width,height);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			view.setLayoutParams(par);
       			return;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setRadioGroupWeightLayoutParams(StarObjectClass self,int width,int height,double weight) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setRadioGroupWeightLayoutParams(StarObjectClass self,int width,int height,double weight){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		RadioGroup.LayoutParams  par = (RadioGroup.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new RadioGroup.LayoutParams(width,height,(float)weight);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			par.weight = (float)weight;
       			view.setLayoutParams(par);
       			return;
        	}      
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setGalleryLayoutParams(StarObjectClass self,int width,int height) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setGalleryLayoutParams(StarObjectClass self,int width,int height){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		Gallery.LayoutParams  par = (Gallery.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new Gallery.LayoutParams(width,height);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			view.setLayoutParams(par);
       			return;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setRelativeLayoutParams(StarObjectClass self,int width,int height) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setRelativeLayoutParams(StarObjectClass self,int width,int height){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		RelativeLayout.LayoutParams  par = (RelativeLayout.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new RelativeLayout.LayoutParams(width,height);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			view.setLayoutParams(par);
       			return;
        	}         	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setGridViewLayoutParams(StarObjectClass self,int width,int height) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setGridViewLayoutParams(StarObjectClass self,int width,int height){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		GridView.LayoutParams  par = (GridView.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new GridView.LayoutParams(width,height);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			view.setLayoutParams(par);
       			return;
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setAbsListViewLayoutParams(StarObjectClass self,int width,int height) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setAbsListViewLayoutParams(StarObjectClass self,int width,int height){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		AbsListView.LayoutParams  par = (AbsListView.LayoutParams )view.getLayoutParams();
       			if( par == null ){
       				par = new AbsListView.LayoutParams(width,height);
       				view.setLayoutParams(par);
       				return;
       			}
       			par.width = width;
       			par.height = height;
       			view.setLayoutParams(par);
       			return;
        	}       
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int sp2px(StarObjectClass self,double sp) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int sp2px(StarObjectClass self,double sp){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return 0;  //may be content view
        		Activity android_activity = (Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject");
        		DisplayMetrics metrics = new DisplayMetrics();
        		android_activity.getWindowManager().getDefaultDisplay().getMetrics(metrics);
        		return (int)(sp * metrics.scaledDensity);
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int dp2px(StarObjectClass self,double dp) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int dp2px(StarObjectClass self,double dp){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return 0;  //may be content view
        		Activity android_activity = (Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject");
        		DisplayMetrics metrics = new DisplayMetrics();
        		android_activity.getWindowManager().getDefaultDisplay().getMetrics(metrics);
        		return (int)(dp * metrics.density + 0.5f);
        	}          	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int pt2pxX(StarObjectClass self,double sp) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int pt2pxX(StarObjectClass self,double pt){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return 0;  //may be content view
        		Activity android_activity = (Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject");
        		DisplayMetrics metrics = new DisplayMetrics();
        		android_activity.getWindowManager().getDefaultDisplay().getMetrics(metrics);
        		return (int)(pt * metrics.xdpi * (1.0f/72));
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int pt2pxY(StarObjectClass self,double sp) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int pt2pxY(StarObjectClass self,double pt){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return 0;  //may be content view
        		Activity android_activity = (Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject");
        		DisplayMetrics metrics = new DisplayMetrics();
        		android_activity.getWindowManager().getDefaultDisplay().getMetrics(metrics);
        		return (int)(pt * metrics.ydpi * (1.0f/72));
        	}        	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setBackgroundResource(StarObjectClass self,int resid) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setBackgroundResource(StarObjectClass self,int resid){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setBackgroundResource(resid);
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setPadding(StarObjectClass self,int left,int top,int right,int bottom) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setPadding(StarObjectClass self,int left,int top,int right,int bottom){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setPadding(left,top,right,bottom);
        	}     
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setPadding(StarObjectClass self,int left,int top,int right,int bottom) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note   if onDraw function is override then users can use this function to call super method \n
        	 *            void onDraw(StarObjectClass self,StarObjectClass Canvas)
        	 */
        	public void onSuperDraw(StarObjectClass self,StarObjectClass Canvas){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.onSuperDraw(Canvas);
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  bringToFront(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public void  bringToFront(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.bringToFront();
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  clearFocus(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  clearFocus(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.clearFocus();
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  draw(StarObjectClass self,StarObjectClass canvas) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  draw(StarObjectClass self,StarObjectClass canvas){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		StarCLECanvas star_canvas = (StarCLECanvas)WrapAndroidClass.GetAndroidObject(canvas,"AndroidObject");
        		if( view != null && star_canvas != null )
        			view.draw((Canvas)star_canvas.GetAndroidObject());
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getBottom(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getBottom(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getBottom();
        		return 0;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public String  getContentDescription(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public String  getContentDescription(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return (String)view.getContentDescription();
        		return null;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getHeight(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getHeight(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getHeight();
        		return 0;
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getId(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getId(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getId();
        		return 0;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getLeft(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getLeft(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getLeft();
        		return 0;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getPaddingBottom(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getPaddingBottom(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getPaddingBottom();
        		return 0;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getPaddingLeft(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getPaddingLeft(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getPaddingLeft();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getPaddingRight(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getPaddingRight(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getPaddingRight();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getPaddingTop(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getPaddingTop(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getPaddingTop();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getRight(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getRight(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getRight();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getTop(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getTop(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getTop();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getVisibility(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getVisibility(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getVisibility();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getWidth(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getWidth(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.getWidth();
        		return 0;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  hasFocus(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  hasFocus(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.hasFocus();
        		return false;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  invalidate(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public void  invalidate(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.invalidate();
        		return;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  invalidate1(StarObjectClass self,int l, int t, int r, int b) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  invalidate1(StarObjectClass self,int l, int t, int r, int b){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.invalidate(l,t,r,b);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isClickable(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isClickable(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isClickable();
        		return false;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isEnabled(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isEnabled();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isFocusable(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isFocusable(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isFocusable();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isFocusableInTouchMode(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isFocusableInTouchMode(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isFocusableInTouchMode();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isFocused(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isFocused(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isFocused();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isHapticFeedbackEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isHapticFeedbackEnabled(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isHapticFeedbackEnabled();
        		return false;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isHorizontalFadingEdgeEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isHorizontalFadingEdgeEnabled(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isHorizontalFadingEdgeEnabled();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isHorizontalScrollBarEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isHorizontalScrollBarEnabled(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isHorizontalScrollBarEnabled();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isInEditMode(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isInEditMode(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isInEditMode();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isInTouchMode(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isInTouchMode(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isInTouchMode();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isLayoutRequested(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isLayoutRequested(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isLayoutRequested();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isLongClickable(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isLongClickable(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isLongClickable();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isOpaque(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isOpaque(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isOpaque();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isPressed(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isPressed(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isPressed();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isSaveEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isSaveEnabled(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isSaveEnabled();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isScrollbarFadingEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isScrollbarFadingEnabled(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isScrollbarFadingEnabled();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isSelected(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isSelected(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isSelected();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isShown(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isShown(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isShown();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isSoundEffectsEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isSoundEffectsEnabled(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isSoundEffectsEnabled();
        		return false;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isVerticalFadingEdgeEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isVerticalFadingEdgeEnabled(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isVerticalFadingEdgeEnabled();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  isVerticalScrollBarEnabled(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  isVerticalScrollBarEnabled(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.isVerticalScrollBarEnabled();
        		return false;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  layout(StarObjectClass self,int l, int t, int r, int b) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public void  layout(StarObjectClass self,int l, int t, int r, int b){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.layout(l, t, r, b);
        		return;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  measure(StarObjectClass self,int widthMeasureSpec, int heightMeasureSpec) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  measure(StarObjectClass self,int widthMeasureSpec, int heightMeasureSpec){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.measure(widthMeasureSpec,heightMeasureSpec);
        		return;
        	}          	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  postInvalidate(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public void  postInvalidate(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.postInvalidate();
        		return;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  postInvalidate1(StarObjectClass self,int left, int top, int right, int bottom) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  postInvalidate1(StarObjectClass self,int left, int top, int right, int bottom){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.postInvalidate(left, top,  right, bottom);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  postInvalidateDelayed(StarObjectClass self,long delayMilliseconds) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  postInvalidateDelayed(StarObjectClass self,long delayMilliseconds){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.postInvalidateDelayed(delayMilliseconds);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  postInvalidateDelayed1(StarObjectClass self,long delayMilliseconds, int left, int top, int right, int bottom){ </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	  
        	public void  postInvalidateDelayed1(StarObjectClass self,long delayMilliseconds, int left, int top, int right, int bottom){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.postInvalidateDelayed(delayMilliseconds,left,top,right,bottom);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  requestFocus(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  requestFocus(StarObjectClass self){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			return view.requestFocus();
        		return false;
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  scrollBy(StarObjectClass self,int x, int y) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  scrollBy(StarObjectClass self,int x, int y){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.scrollBy(x,y);
        		return;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setPadding(StarObjectClass self,int left,int top,int right,int bottom) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  scrollTo(StarObjectClass self,int x, int y){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.scrollTo(x,y);
        		return;
        	}        
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setBackgroundColor(StarObjectClass self,int color) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setBackgroundColor(StarObjectClass self,int color){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setBackgroundColor(color);
        		return;
        	}           
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setFocusable(StarObjectClass self,boolean focusable) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setFocusable(StarObjectClass self,boolean focusable){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setFocusable(focusable);
        		return;
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setId(StarObjectClass self,int id) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setId(StarObjectClass self,int id){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setId(id);
        		return;
        	}           
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setPressed(StarObjectClass self,boolean pressed) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setPressed(StarObjectClass self,boolean pressed){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setPressed(pressed);
        		return;
        	}                    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setScrollBarStyle(StarObjectClass self,int style) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setScrollBarStyle(StarObjectClass self,int style){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setScrollBarStyle(style);
        		return;
        	}      
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setScrollbarFadingEnabled(StarObjectClass self,boolean fadeScrollbars) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setScrollbarFadingEnabled(StarObjectClass self,boolean fadeScrollbars){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setScrollbarFadingEnabled(fadeScrollbars);
        		return;
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setSelected(StarObjectClass self,boolean selected) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setSelected(StarObjectClass self,boolean selected){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setSelected(selected);
        		return;
        	}          
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setVerticalFadingEdgeEnabled(StarObjectClass self,boolean verticalFadingEdgeEnabled) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setVerticalFadingEdgeEnabled(StarObjectClass self,boolean verticalFadingEdgeEnabled){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setVerticalFadingEdgeEnabled(verticalFadingEdgeEnabled);
        		return;
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setVerticalScrollBarEnabled(StarObjectClass self,boolean verticalScrollBarEnabled) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setVerticalScrollBarEnabled(StarObjectClass self,boolean verticalScrollBarEnabled){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setVerticalScrollBarEnabled(verticalScrollBarEnabled);
        		return;
        	}       
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setVisibility(StarObjectClass self,int visibility) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setVisibility(StarObjectClass self,int visibility){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setVisibility(visibility);
        		return;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  onTouchEvent(StarObjectClass self,StarObjectClass event)</td></tr>
        	 *   </table>
        	 * </div>  
        	 * @note this function can be override   	 
        	 */
        	public boolean  onTouchEvent(StarObjectClass self,StarObjectClass event){
        		return false;
        	}       
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void onLayout(StarObjectClass self,boolean changed, int left, int top, int right, int bottom)</td></tr>
        	 *   </table>
        	 * </div>  
        	 * @note this function can be override   	 
        	 */
        	public void onLayout(StarObjectClass self,boolean changed, int left, int top, int right, int bottom){
        		return;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void onSuperLayout(StarObjectClass self,boolean changed, int left, int top, int right, int bottom) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note   if onLayout function is override then users can use this function to call super method \n
        	 */
        	public void onSuperLayout(StarObjectClass self,boolean changed, int left, int top, int right, int bottom){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.onSuperLayout(changed, left, top, right, bottom);
        	}         	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public onMeasure(StarObjectClass self,int widthMeasureSpec, int heightMeasureSpec)</td></tr>
        	 *   </table>
        	 * </div>  
        	 * @note this function can be override   	 
        	 */
        	public void onMeasure(StarObjectClass self,int widthMeasureSpec, int heightMeasureSpec){
        		return;
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void onSuperMeasure(StarObjectClass self,int widthMeasureSpec, int heightMeasureSpec) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note   if onMeasure function is override then users can use this function to call super method \n
        	 */
        	public void onSuperMeasure(StarObjectClass self,int widthMeasureSpec, int heightMeasureSpec){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.onSuperMeasure(widthMeasureSpec, heightMeasureSpec);
        	}        	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void onSizeChanged(StarObjectClass self,int w, int h, int oldw, int oldh)</td></tr>
        	 *   </table>
        	 * </div>  
        	 * @note this function can be override   	 
        	 */
        	public void onSizeChanged(StarObjectClass self,int w, int h, int oldw, int oldh) {
        		return;
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void onSuperSizeChanged(StarObjectClass self,int w, int h, int oldw, int oldh) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @note   if onSizeChanged function is override then users can use this function to call super method \n
        	 */
        	public void onSuperSizeChanged(StarObjectClass self,int w, int h, int oldw, int oldh){
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.onSuperSizeChanged(w, h, oldw, oldh);
        	}        	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setVisibility(StarObjectClass self,int visibility) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMeasuredDimension(StarObjectClass self,int measuredWidth, int measuredHeight)  {
        		StarCLEView view = (StarCLEView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view._setMeasuredDimension(measuredWidth,measuredHeight);
        		return;
        	}        	
        });        
		return true;
	}	
}