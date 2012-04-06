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
import android.media.SoundPool;
import android.content.res.AssetFileDescriptor;
import android.media.AudioManager;

import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Stack;
import android.net.Uri;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class SoundPoolClass{
	/**
	 * @note do not call Init method directly
	 * @note default SoundPoolParameter is new SoundPool(64,STREAM_MUSIC,0);  further will be set dynamically
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init SoundPoolClass");

		class StarCLESoundPool extends SoundPool implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject; 
			private List<Object> RefList;
			public StarCLESoundPool(Context ctx,StarObjectClass In_Object){
				super(64,AudioManager.STREAM_MUSIC,0);
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return this;}
			public void SetAndroidObject(Object object){SrvGroup._PrintError(1, "SoundPoolClass not support SetAndroidObject" );}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}
        /* SoundPoolClass Body */
        Service._GetObject("SoundPoolClass")._Assign(new StarObjectClass(){
        	/* _OnCreate Event */
        	public Object[] _OnCreate(Hashtable Ev){
        		StarObjectClass self = (StarObjectClass)Ev.get("_DesObject");    
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");		
        		return null;
        	}        	
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLESoundPool soundpool = new StarCLESoundPool((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)soundpool);
        		return;
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  load(StarObjectClass self,String path, int priority) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  load(StarObjectClass self,String path, int priority) { 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return 0;
        		return soundpool.load(path,priority);
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  load1(StarObjectClass self,int resId, int priority) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  load1(StarObjectClass self,int resId, int priority){ 
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return 0;
        		return soundpool.load((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),resId,priority);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  load2(StarObjectClass self,StarObjectClass fd, int offset, int length, int priority) </td></tr>
        	 *   </table>
        	 * </div>
        	 * @param fd  Instance of AssetFileDescriptorClass; 
        	 */
        	public int  load2(StarObjectClass self,StarObjectClass fd, int offset, int length, int priority){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return 0;
        		StarObjectClass assertfileclass = Service._GetObject("AssetFileDescriptorClass");
        		if( assertfileclass._IsInst(fd) == true ){
        			StarCLEAssetFileDescriptor starfd = (StarCLEAssetFileDescriptor)WrapAndroidClass.GetAndroidObject(fd,"AndroidObject");
        			if( starfd.assetfiledescriptor == null ){
        				SrvGroup._Print("input fd is not init");
        				return 0;
        			}
       				return soundpool.load(starfd.assetfiledescriptor.getFileDescriptor(),offset,length,priority);
        		}else{
        			SrvGroup._Print("input fd is invalid");
        			return 0;
        		}
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  pause(StarObjectClass self,int streamID) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  pause(StarObjectClass self,int streamID){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return;
        		 soundpool.pause(streamID);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  play(StarObjectClass self,int soundID, float leftVolume, float rightVolume, int priority, int loop, float rate) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  play(StarObjectClass self,int soundID, float leftVolume, float rightVolume, int priority, int loop, float rate){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return 0;
        		return soundpool.play(soundID, leftVolume, rightVolume, priority, loop, rate);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  release(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  release(StarObjectClass self){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return;
        		soundpool.release();
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  resume(StarObjectClass self,int streamID) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  resume(StarObjectClass self,int streamID){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return;
        		soundpool.resume(streamID);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setLoop(StarObjectClass self,int streamID, int loop) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setLoop(StarObjectClass self,int streamID, int loop){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return;
        		soundpool.setLoop(streamID,loop);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setPriority(StarObjectClass self,int streamID, int priority) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setPriority(StarObjectClass self,int streamID, int priority){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return;
        		soundpool.setPriority(streamID,priority);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setRate(StarObjectClass self,int streamID, float rate) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setRate(StarObjectClass self,int streamID, float rate){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return;
        		soundpool.setRate(streamID,rate);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  setVolume(StarObjectClass self,int streamID, float leftVolume, float rightVolume) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  setVolume(StarObjectClass self,int streamID, float leftVolume, float rightVolume){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return;
        		soundpool.setVolume(streamID,leftVolume, rightVolume);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  stop(StarObjectClass self,int streamID) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  stop(StarObjectClass self,int streamID){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return;
        		soundpool.stop(streamID);
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean  unload(StarObjectClass self,int soundID) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean  unload(StarObjectClass self,int soundID){ 
        		StarCLESoundPool soundpool = (StarCLESoundPool)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( soundpool == null  )
        			return false;
        		return soundpool.unload(soundID);
        	}         	
        	
        });    
        
		return true;
	}	
}