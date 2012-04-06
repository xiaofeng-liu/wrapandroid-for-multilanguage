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

public class TextViewClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init TextViewClass");

		class StarCLETextView extends TextView implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;     
			private List<Object> RefList;
			public StarCLETextView(Context ctx,StarObjectClass In_Object){
				super(ctx);
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;}; 
			public Object GetAndroidObject(){return this;}
			public void SetAndroidObject(Object object){SrvGroup._PrintError(1, "TextViewClass not support SetAndroidObject" );}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}
        /* TextViewClass Body */
        Service._GetObject("TextViewClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLETextView textview = new StarCLETextView((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)textview);
        		if( parent != null ){
        			if( activity == parent ){
        				Activity android_activity = (Activity)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        				android_activity.setContentView(textview);
        			}else{
        				ViewGroup android_viewgroup = (ViewGroup)WrapAndroidClass.GetAndroidObject(parent,"AndroidObject");
        				android_viewgroup.addView(textview);
        			}
        			self._LockGC();
        			self._Call("decAndroidRef");  // release with parent
        		}
        		return;
        	}         
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public String getText(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public String getText(StarObjectClass self){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview == null )
        			return null;
        		String Value = textview.getText().toString();
        		return Value;
        	}    
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setAutoLinkMask(StarObjectClass self,int mask) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setAutoLinkMask(StarObjectClass self,int mask){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setAutoLinkMask(mask);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setCursorVisible(StarObjectClass self,boolean visible) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setCursorVisible(StarObjectClass self,boolean visible){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setCursorVisible(visible);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setEnabled(StarObjectClass self,boolean enabled) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setEnabled(StarObjectClass self,boolean enabled){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setEnabled(enabled);
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setGravity(StarObjectClass self,int gravity) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setGravity(StarObjectClass self,int gravity){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setGravity(gravity);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setHeight(StarObjectClass self,int pixels) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setHeight(StarObjectClass self,int pixels){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setHeight(pixels);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setHighlightColor(StarObjectClass self,int color) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setHighlightColor(StarObjectClass self,int color){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setHighlightColor(color);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setHint(StarObjectClass self,String hint) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setHint(StarObjectClass self,String hint){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setHint(hint);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setHint1(StarObjectClass self,int resid) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setHint1(StarObjectClass self,int resid){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setHint(resid);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setHintTextColor(StarObjectClass self,int color) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setHintTextColor(StarObjectClass self,int color){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setHintTextColor(color);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setHorizontallyScrolling(StarObjectClass self,boolean whether) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setHorizontallyScrolling(StarObjectClass self,boolean whether){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setHorizontallyScrolling(whether);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setImeActionLabel(StarObjectClass self,String label, int actionId) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setImeActionLabel(StarObjectClass self,String label, int actionId){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setImeActionLabel(label,actionId);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setImeOptions(StarObjectClass self,int imeOptions) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setImeOptions(StarObjectClass self,int imeOptions){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setImeOptions(imeOptions);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setIncludeFontPadding(StarObjectClass self,boolean includepad) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setIncludeFontPadding(StarObjectClass self,boolean includepad){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setIncludeFontPadding(includepad);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setInputExtras(StarObjectClass self,int xmlResId) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setInputExtras(StarObjectClass self,int xmlResId){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null ){
try{        			
        			textview.setInputExtras(xmlResId);
}
catch(Exception e){
	
}
        		}
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setInputType(StarObjectClass self,int type) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setInputType(StarObjectClass self,int type){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setInputType(type);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setLineSpacing(StarObjectClass self,float add, float mult) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setLineSpacing(StarObjectClass self,float add, float mult){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setLineSpacing(add,mult);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setLines(StarObjectClass self,int lines) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setLines(StarObjectClass self,int lines){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setLines(lines);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setLinkTextColor(StarObjectClass self,int color) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setLinkTextColor(StarObjectClass self,int color){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setLinkTextColor(color);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setLinksClickable(StarObjectClass self,boolean whether) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setLinksClickable(StarObjectClass self,boolean whether){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setLinksClickable(whether);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMarqueeRepeatLimit(StarObjectClass self,int marqueeLimit) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMarqueeRepeatLimit(StarObjectClass self,int marqueeLimit){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setMarqueeRepeatLimit(marqueeLimit);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMaxEms(StarObjectClass self,int maxems) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMaxEms(StarObjectClass self,int maxems){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setMaxEms(maxems);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMaxHeight(StarObjectClass self,int maxHeight) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMaxHeight(StarObjectClass self,int maxHeight){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setMaxHeight(maxHeight);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMaxLines(StarObjectClass self,int maxlines) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMaxLines(StarObjectClass self,int maxlines){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setMaxLines(maxlines);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMaxWidth(StarObjectClass self,int maxpixels) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMaxWidth(StarObjectClass self,int maxpixels){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setMaxWidth(maxpixels);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMinEms(StarObjectClass self,int minems) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMinEms(StarObjectClass self,int minems){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setMinEms(minems);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMinHeight(StarObjectClass self,int minHeight) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMinHeight(StarObjectClass self,int minHeight){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setMinHeight(minHeight);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMinLines(StarObjectClass self,int minlines) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMinLines(StarObjectClass self,int minlines){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setMinLines(minlines);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setMinWidth(StarObjectClass self,int minpixels) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setMinWidth(StarObjectClass self,int minpixels){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setMinWidth(minpixels);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setPadding(StarObjectClass self,int left, int top, int right, int bottom) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setPadding(StarObjectClass self,int left, int top, int right, int bottom){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setPadding(left,top,right,bottom);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setPaintFlags(StarObjectClass self,int flags) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setPaintFlags(StarObjectClass self,int flags){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setPaintFlags(flags);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setPrivateImeOptions(StarObjectClass self,String type) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setPrivateImeOptions(StarObjectClass self,String type){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setPrivateImeOptions(type);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setRawInputType(StarObjectClass self,int type) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setRawInputType(StarObjectClass self,int type){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setRawInputType(type);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setSelectAllOnFocus(StarObjectClass self,boolean selectAllOnFocus) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setSelectAllOnFocus(StarObjectClass self,boolean selectAllOnFocus){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setSelectAllOnFocus(selectAllOnFocus);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setSelected(StarObjectClass self,boolean selected) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setSelected(StarObjectClass self,boolean selected){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setSelected(selected);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setShadowLayer(StarObjectClass self,float radius, float dx, float dy, int color) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setShadowLayer(StarObjectClass self,float radius, float dx, float dy, int color){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setShadowLayer(radius,dx,dy,color);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setSingleLine(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setSingleLine(StarObjectClass self){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setSingleLine();
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setSingleLine1(StarObjectClass self,boolean singleLine) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setSingleLine1(StarObjectClass self,boolean singleLine){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setSingleLine(singleLine);
        	} 

        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void setText(StarObjectClass self,String Text) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void setText(StarObjectClass self,String Text){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setText(Text);
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setTextColor(StarObjectClass self,int color) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public void  setTextColor(StarObjectClass self,int color){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setTextColor(color);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setTextKeepState(StarObjectClass self,String text) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setTextKeepState(StarObjectClass self,String text){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setTextKeepState(text);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setTextScaleX(StarObjectClass self,float size) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setTextScaleX(StarObjectClass self,float size){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setTextScaleX(size);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setTextSize(StarObjectClass self,float size) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setTextSize(StarObjectClass self,float size){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setTextSize(size);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setTextSize1(StarObjectClass self,int unit, float size) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setTextSize1(StarObjectClass self,int unit, float size){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setTextSize(unit,size);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setTypeface(StarObjectClass self,StarObjectClass tf) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setTypeface(StarObjectClass self,StarObjectClass tf) {
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		StarCLETypeface typeface = (StarCLETypeface)WrapAndroidClass.GetAndroidObject(tf,"AndroidObject");
        		if( textview != null && typeface != null && typeface.typeface != null )
        			textview.setTypeface(typeface.typeface);
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setTypeface1(StarObjectClass self,StarObjectClass tf,int style) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @param style : "normal", "bold", "italic"
        	 */
        	public void  setTypeface1(StarObjectClass self,StarObjectClass tf,int style){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		StarCLETypeface typeface = (StarCLETypeface)WrapAndroidClass.GetAndroidObject(tf,"AndroidObject");
        		if( textview != null && typeface != null && typeface.typeface != null ){
       				textview.setTypeface(typeface.typeface,style);
        		}
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setWidth(StarObjectClass self,int pixels) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setWidth(StarObjectClass self,int pixels){
        		TextView textview = (TextView)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( textview != null )
        			textview.setWidth(pixels);
        	} 

        	
        });         
        
		return true;
	}	
}