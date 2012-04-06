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

public class AutoCompleteTextViewClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init AutoCompleteTextViewClass");

		class StarCLEAutoCompleteTextView extends AutoCompleteTextView implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;         
			private List<Object> RefList;
			public StarCLEAutoCompleteTextView(Context ctx,StarObjectClass In_Object){
				super(ctx);
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;}; 
			public Object GetAndroidObject(){return this;}
			public void SetAndroidObject(Object object){SrvGroup._PrintError(1, "AutoCompleteTextViewClass not support SetAndroidObject" );}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}
        
        /* AutoCompleteTextViewClass Body */
        Service._GetObject("AutoCompleteTextViewClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEAutoCompleteTextView view = new StarCLEAutoCompleteTextView((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);
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
        	public void setThreshold(StarObjectClass self,int threshold){
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		if( parent != null && parent == activity )
        			return;  //may be content view        		
        		AutoCompleteTextView view = (AutoCompleteTextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( view != null )
        			view.setThreshold(threshold);
        	}      
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setAdapter(StarObjectClass self,StarObjectClass adapter) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setAdapter(StarObjectClass self,StarObjectClass adapter){
        		AutoCompleteTextView adapterview = (AutoCompleteTextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( adapterview == null )
        			return;
        		ArrayAdapter<String> android_adapter = (ArrayAdapter<String>)WrapAndroidClass.GetAndroidObject(adapter,"AndroidObject");
        		if( android_adapter == null )
        			return;
        		adapter._LockGC();
                adapterview.setAdapter(android_adapter);
                adapter._Call("decAndroidRef");  // adapter release with parent
        	}         	
        });   
        
		return true;
	}	
}