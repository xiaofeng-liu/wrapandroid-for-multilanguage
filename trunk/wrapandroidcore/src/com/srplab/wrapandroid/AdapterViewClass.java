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
import android.widget.AdapterView.OnItemClickListener;

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

public class AdapterViewClass{
	/**
	 * @note do not call Init method directly
	 */
	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init AdapterViewClass");

        /* AdapterViewClass Body */
        Service._GetObject("AdapterViewClass")._Assign(new StarObjectClass(){
        	/* _OnCreate Event */
        	public Object[] _OnCreate(Hashtable Ev){
        		StarObjectClass self = (StarObjectClass)Ev.get("_DesObject");    
        		AdapterView adapterview = (AdapterView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		StarObjectClass spinnerclass  = (StarObjectClass)Service._GetObject("SpinnerClass");
        		if( spinnerclass._IsInst(self) == false ){
                	/**
                	 * <div class="memproto">
                	 *   <table class="memname">
                	 *     <tr><td class="memname">Event : onItemClick(Hashtable Ev,string ObjectID,int position, int id) </td></tr>
                	 *   </table>
                	 * </div>
                	 */          			
        			adapterview.setOnItemClickListener(new AdapterView.OnItemClickListener() {
        				@Override 
        				public void onItemClick(AdapterView<?> parent, View v, int position, long id){
        					StarObjectClass self = ((BasicAndroidInterface)parent).getBasicAndroid().getStarObject();
        					StarObjectClass ViewObject = ((BasicAndroidInterface)v).getBasicAndroid().getStarObject();
        					self._ProcessEvent("onItemClick", ViewObject._Get("_ID"),position,id);
        				};
        			});
        		}else{
                	/**
                	 * <div class="memproto">
                	 *   <table class="memname">
                	 *     <tr><td class="memname">Event : onItemSelected(Hashtable Ev,string ObjectID,int position, int id) </td></tr>
                	 *   </table>
                	 * </div>
                	 */        			
        			adapterview.setOnItemSelectedListener(new AdapterView.OnItemSelectedListener() {
        				@Override 
        				public void onItemSelected(AdapterView<?> parent, View view, int position, long id) {
        					StarObjectClass self = ((BasicAndroidInterface)parent).getBasicAndroid().getStarObject();
        					if( view instanceof BasicAndroidInterface ){
        						StarObjectClass ViewObject = ((BasicAndroidInterface)view).getBasicAndroid().getStarObject();
        						self._ProcessEvent("onItemSelected", ViewObject._Get("_ID"),position,id);
        					}else{
        						self._ProcessEvent("onItemSelected", "",position,id);
        					}
        				};
        				@Override
        				public void  onNothingSelected(AdapterView<?> parent){
        					StarObjectClass self = ((BasicAndroidInterface)parent).getBasicAndroid().getStarObject();
        					self._ProcessEvent("onNothingSelected", self._Get("_ID"));
        				};
        			});
        		}
			    return null;
        	}
        	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setAdapter(StarObjectClass self,StarObjectClass adapter) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setAdapter(StarObjectClass self,StarObjectClass adapter){
        		AdapterView adapterview = (AdapterView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( adapterview == null )
        			return;
        		Adapter android_adapter = (Adapter)WrapAndroidClass.GetAndroidObject(adapter,"AndroidObject");
        		if( android_adapter == null )
        			return;
        		adapter._LockGC();
        		adapterview.setAdapter(android_adapter);
        		adapter._Call("decAndroidRef");  // adapter release with AdapterView
        	}        	          	
        });
        
		return true;
	}	
}