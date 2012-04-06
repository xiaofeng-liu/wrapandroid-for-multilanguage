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
import java.lang.ref.WeakReference;
import java.util.Hashtable;
import java.util.Stack;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class AndroidBaseClass{
	static Hashtable<String,Boolean> ClassInitRecord;
	
	static public void prepare(){
		ClassInitRecord = new Hashtable<String,Boolean>();		
	}	
	/**
	 * @note do not call Init method directly----------------
	 * 
	 * -------------------------------------------------------------------------------------\n
	 * | AndroidBaseClass -> ViewClass       ->  SurfaceViewClass\n
	 * | ------------------------------------->  AnalogClockClass\n
	 * | ------------------------------------->  ImageViewClass--------> ImageButtonClass\n
	 * | ------------------------------------->  ProgressBarClass\n
	 * | ------------------------------------->  TextViewClass---------> ButtonClass------------> CompoundButtonClass---------> CheckBoxClass\n
	 * | ---------------------------------------------------------------------------------------------------------------------> RadioButtonClass\n        
	 * | --------------------------------------------------------------> DigitalClockClass\n
	 * | --------------------------------------------------------------> EditTextClass----------> AutoCompleteTextViewClass\n
	 * | ------------------------------------->  ViewGroupClass--------> AbsoluteLayoutClass-- -> WebViewClass\n                                     
	 * | --------------------------------------------------------------> AdapterViewClass----- -> AbsListViewClass-------> ListViewClass\n
	 * | ----------------------------------------------------------------------------------------------------------------> GridViewClass\n
	 * | ---------------------------------------------------------------------------------------> AbsSpinnerClass--------> SpinnerClass\n
	 * | ----------------------------------------------------------------------------------------------------------------> GalleryClass\n
	 * | --------------------------------------------------------------> FrameLayoutClass-------> TimePickerClass\n
	 * | ---------------------------------------------------------------------------------------> TimePickerClass\n
	 * | --------------------------------------------------------------> LinearLayoutClass------> RadioGroupClass\n
	 * | ---------------------------------------------------------------------------------------> TableLayoutClass\n
	 * | ---------------------------------------------------------------------------------------> TableRowClass\n
	 * | --------------------------------------------------------------> RelativeLayoutClass
	 * | ------------------> ObjectBaseClass ->  BitmapClass\n
	 * | ------------------------------------->  BitmapFactoryClass\n
	 * | ------------------------------------->  CanvasClass\n
	 * | ------------------------------------->  SoundPoolClass\n
	 * | ------------------------------------->  OutputStreamClass---> FileOutputStreamClass\n
	 * | ------------------------------------->  InputStreamClass----> FileInputStreamClass\n
	 * | ------------------------------------->  FileDescriptorClass--> AssetFileDescriptorClass\n
	 * | ------------------------------------->  MediaPlayerClass\n
	 * | ------------------------------------->  IntentClass\n
	 * | ------------------------------------->  MatrixClass\n
	 * | ------------------------------------->  PaintClass\n
	 * | ------------------------------------->  PathClass\n
	 * | ------------------------------------->  TypefaceClass\n
	 * | ------------------------------------->  WebSettingsClass\n
	 * | ------------------------------------->  DialogInterfaceClass\n
	 * | ------------------------------------->  DialogClass------------->AlertDialogClass\n
	 * | ------------------> ActivityClass\n
	 * | ------------------> AdapterClass\n
	 * | ------------------> BaseAdapterClass--> StringArrayAdapterClass\n
	 * | --------------------------------------> SimpleAdapterClass\n 
	 * | RectClass\n
	 * | RectFClass\n        	
	 *         		
	 */
	
	static void InitClass(StarServiceClass Service,StarSrvGroupClass SrvGroup,StarObjectClass self,boolean DumpInformationFlag){
		StarObjectClass classobject;
		
		classobject = (StarObjectClass)self._Get("_Class");
		String classname = classobject._GetStr("_Name");
		if( classname.equals("AndroidBaseClass") ){
			
		}else{			
		    if( ClassInitRecord.get(classname) == null ){
		    	InitClass(Service,SrvGroup,classobject,DumpInformationFlag);
		    	/*ActivityClass*/
		    	if( classname.equals("ActivityClass") ){
		    		ActivityClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ViewClass") ){
		    		ViewClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("LinearLayoutClass") ){
		    		LinearLayoutClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("RadioGroupClass") ){
		    		RadioGroupClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("AbsoluteLayoutClass") ){
		    		AbsoluteLayoutClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("TextViewClass") ){
		    		TextViewClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("EditTextClass") ){
		    		EditTextClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ButtonClass") ){
		    		ButtonClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("CompoundButtonClass") ){
		    		CompoundButtonClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("RadioButtonClass") ){
		    		RadioButtonClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("CheckBoxClass") ){
		    		CheckBoxClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ImageViewClass") ){
		    		ImageViewClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ImageButtonClass") ){
		    		ImageButtonClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("AdapterClass") ){
		    		AdapterClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("AdapterViewClass") ){
		    		AdapterViewClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("AbsSpinnerClass") ){
		    		AbsSpinnerClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("GalleryClass") ){
		    		GalleryClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ProgressBarClass") ){
		    		ProgressBarClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("SpinnerClass") ){
		    		SpinnerClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("BaseAdapterClass") ){
		    		BaseAdapterClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("StringArrayAdapterClass") ){
		    		StringArrayAdapterClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("GridViewClass") ){
		    		GridViewClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("AutoCompleteTextViewClass") ){
		    		AutoCompleteTextViewClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("AnalogClockClass") ){
		    		AnalogClockClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("DigitalClockClass") ){
		    		DigitalClockClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("FrameLayoutClass") ){
		    		FrameLayoutClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("DatePickerClass") ){
		    		DatePickerClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("TimePickerClass") ){
		    		TimePickerClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ListViewClass") ){
		    		ListViewClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("PaintClass") ){
		    		PaintClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("PathClass") ){
		    		PathClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("CanvasClass") ){
		    		CanvasClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ObjectBaseClass") ){
		    		ObjectBaseClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("BitmapClass") ){
		    		BitmapClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("MatrixClass") ){
		    		MatrixClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("BitmapFactoryClass") ){
		    		BitmapFactoryClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("TypefaceClass") ){
		    		TypefaceClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("WebSettingsClass") ){
		    		WebSettingsClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("WebViewClass") ){
		    		WebViewClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("TableRowClass") ){
		    		TableRowClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("TableLayoutClass") ){
		    		TableLayoutClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("FileOutputStreamClass") ){
		    		FileOutputStreamClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("FileInputStreamClass") ){
		    		FileInputStreamClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("AssetFileDescriptorClass") ){
		    		AssetFileDescriptorClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("MediaPlayerClass") ){
		    		MediaPlayerClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("SurfaceViewClass") ){
		    		SurfaceViewClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("SoundPoolClass") ){
		    		SoundPoolClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("IntentClass") ){
		    		IntentClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("DialogInterfaceClass") ){
		    		DialogInterfaceClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("AlertDialogClass") ){
		    		AlertDialogClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("DialogClass") ){
		    		DialogClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("RelativeLayoutClass") ){
		    		RelativeLayoutClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("BundleClass") ){
		    		BundleClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("MotionEventClass") ){
		    		MotionEventClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("DrawableClass") ){
		    		DrawableClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("BitmapDrawableClass") ){
		    		BitmapDrawableClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ColorDrawableClass") ){
		    		ColorDrawableClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("GradientDrawableClass") ){
		    		GradientDrawableClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ShapeDrawableClass") ){
		    		ShapeDrawableClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("AnimationDrawableClass") ){
		    		AnimationDrawableClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("TransitionDrawableClass") ){
		    		TransitionDrawableClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("LayerDrawableClass") ){
		    		LayerDrawableClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("DrawableContainerClass") ){
		    		DrawableContainerClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ShapeClass") ){
		    		ShapeClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);	
		    	}else if( classname.equals("RectShapeClass") ){
		    		RectShapeClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("OvalShapeClass") ){
		    		OvalShapeClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);		  
		    	}else if( classname.equals("ArcShapeClass") ){
		    		ArcShapeClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("RoundRectShapeClass") ){
		    		RoundRectShapeClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ViewGroupClass") ){
		    		ViewGroupClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);
		    	}else if( classname.equals("ToastClass") ){
		    		ToastClass.Init(Service, SrvGroup,DumpInformationFlag);
		    		ClassInitRecord.put(classname,true);			    				    				    				    		
		    	}
		    }
		}		
	}
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init AndroidBaseClass");

        /* AndroidBaseClass Body */
        Service._GetObject("AndroidBaseClass")._Assign(new StarObjectClass(){
        	/* _OnCreate Event */
        	public Object[] _OnCreate(Hashtable Ev){
        		StarObjectClass self = (StarObjectClass)Ev.get("_DesObject");
        		InitClass(Service,SrvGroup,self,DumpInformationFlag);
        		self._Set("AndroidRefCount",1);  //--default value
        		return null;
        	} 
        	
        	/* _OnDestroy Event */
        	public Object[] _OnDestroy(Hashtable Ev){
        		StarObjectClass self = (StarObjectClass)Ev.get("_DesObject"); 
        		Object parentobject = self._Get("_Parent");
        		if( SrvGroup._IsObject(parentobject) == false ){
            		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)null);    
            		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "starobject : "+self+" is freed");
        			return null;
        		}
        		StarObjectClass parent = (StarObjectClass)parentobject;
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass viewclass = (StarObjectClass)Service._GetObject("ViewClass");
        		if( parent != null && viewclass != null && viewclass._IsInst(self) == true ){
        			View view = (View)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        			if( activity != parent ){
        				ViewGroup android_viewgroup = (ViewGroup)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        				if( android_viewgroup != null )
        				    android_viewgroup.removeView(view);
        			}else{
        				View defaultview = (View)activity._Get("DefaultAndroidView");
        				if( defaultview != null ){
        					Activity android_activity = (Activity)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        					android_activity.setContentView(defaultview);
        				}
        			}
        		}
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)null);    
        		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "starobject : "+self+" is freed");
           		return null;        		
        	}          	
        	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void incAndroidRef(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
             */
        	public void incAndroidRef(StarObjectClass self){
        		int RefCount = self._Getint("AndroidRefCount");
        		if( RefCount == 0 ){  // weak ref 
        			Object[] RefObj = (Object[])self._Get("AndroidObject");
        			if( RefObj != null ){
        				Object Value = ((WeakReference)RefObj[0]).get();
        				if( Value != null )
        					self._Set("AndroidObject",Value);
        			}
        		}
        		self._Set("AndroidRefCount",RefCount + 1);
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public StarObjectClass getActivity(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @return  Current activity object
        	 */
        	public StarObjectClass getActivity(StarObjectClass self){
        		StarObjectClass activity = Service._GetObject("ActivityClass");  
        		return (StarObjectClass)activity._Call("getCurrent");
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void decAndroidRef(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
             */
        	public void decAndroidRef(StarObjectClass self){
        		int RefCount = self._Getint("AndroidRefCount");
        		if( RefCount == 0 )  // weak ref
        			return;
        		if( RefCount == 1 ){  // change to weak ref
        			Object object = (Object)self._Get("AndroidObject");
        		    if( object != null ){
        		    	Object[] RefObj = new Object[1];
        		    	RefObj[0] = new WeakReference(object);
        		    	self._Set("AndroidObject", (Object)RefObj);
        		    }
        		    self._Set("AndroidRefCount",0);
        		    return;
        		}
        		//--remain strong ref
        		self._Set("AndroidRefCount",RefCount-1);
        		return;
        	}      	
        });         
        
		return true;
	}	
}