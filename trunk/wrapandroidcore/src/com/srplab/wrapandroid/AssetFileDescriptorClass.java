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
import java.util.Hashtable;
import java.util.Stack;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.File;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class AssetFileDescriptorClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init AssetFileDescriptorClass");

        /* AssetFileDescriptorClass Body */
        Service._GetObject("AssetFileDescriptorClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEAssetFileDescriptor assetfiledescriptor = new StarCLEAssetFileDescriptor((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)assetfiledescriptor);
        		return;
        	}     
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  close(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  close(StarObjectClass self){ 
        		StarCLEAssetFileDescriptor assetfiledescriptor = (StarCLEAssetFileDescriptor)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( assetfiledescriptor == null || assetfiledescriptor.assetfiledescriptor == null )
        			return;
        		try{
        			assetfiledescriptor.assetfiledescriptor.close();
        			return;
        		}catch(IOException e){
        			return;
        		}
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public StarObjectClass  createInputStream(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public StarObjectClass  createInputStream(StarObjectClass self){ 
        		StarCLEAssetFileDescriptor assetfiledescriptor = (StarCLEAssetFileDescriptor)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( assetfiledescriptor == null || assetfiledescriptor.assetfiledescriptor == null )
        			return null;
        		try{
        			FileInputStream fileinputstream = assetfiledescriptor.assetfiledescriptor.createInputStream();
        			if( fileinputstream == null )
        				return null;
        			StarObjectClass cle_fileinputstream = Service._GetObject("FileInputStreamClass")._New();
        			StarCLEFileInputStream starcle_fileinputstream = (StarCLEFileInputStream)WrapAndroidClass.GetAndroidObject(cle_fileinputstream,"AndroidObject");
        			starcle_fileinputstream.fileinputstream = fileinputstream;
        			return cle_fileinputstream;
        		}catch(IOException e){
        			return null;
        		}
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public StarObjectClass  createOutputStream(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public StarObjectClass  createOutputStream(StarObjectClass self){ 
        		StarCLEAssetFileDescriptor assetfiledescriptor = (StarCLEAssetFileDescriptor)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( assetfiledescriptor == null || assetfiledescriptor.assetfiledescriptor == null )
        			return null;
        		try{
        			FileOutputStream fileoutputstream = assetfiledescriptor.assetfiledescriptor.createOutputStream();
        			if( fileoutputstream == null )
        				return null;
        			StarObjectClass cle_fileoutputstream = Service._GetObject("FileOutputStreamClass")._New();
        			StarCLEFileOutputStream starcle_fileoutputstream = (StarCLEFileOutputStream)WrapAndroidClass.GetAndroidObject(cle_fileoutputstream,"AndroidObject");
        			starcle_fileoutputstream.fileoutputstream = fileoutputstream;
        			return cle_fileoutputstream;
        		}catch(IOException e){
        			return null;
        		}        			
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  describeContents(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  describeContents(StarObjectClass self){ 
        		StarCLEAssetFileDescriptor assetfiledescriptor = (StarCLEAssetFileDescriptor)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( assetfiledescriptor == null || assetfiledescriptor.assetfiledescriptor == null )
        			return 0;
       			return assetfiledescriptor.assetfiledescriptor.describeContents();
        	} 
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getDeclaredLength(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getDeclaredLength(StarObjectClass self){ 
        		StarCLEAssetFileDescriptor assetfiledescriptor = (StarCLEAssetFileDescriptor)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( assetfiledescriptor == null || assetfiledescriptor.assetfiledescriptor == null )
        			return 0;
       			return (int)assetfiledescriptor.assetfiledescriptor.getDeclaredLength();
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getLength(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getLength(StarObjectClass self){ 
        		StarCLEAssetFileDescriptor assetfiledescriptor = (StarCLEAssetFileDescriptor)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( assetfiledescriptor == null || assetfiledescriptor.assetfiledescriptor == null )
        			return 0;
       			return (int)assetfiledescriptor.assetfiledescriptor.getLength();
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  getStartOffset(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  getStartOffset(StarObjectClass self){ 
        		StarCLEAssetFileDescriptor assetfiledescriptor = (StarCLEAssetFileDescriptor)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( assetfiledescriptor == null || assetfiledescriptor.assetfiledescriptor == null )
        			return 0;
       			return (int)assetfiledescriptor.assetfiledescriptor.getStartOffset();
        	}          	
   	
        });    
        
		return true;
	}	
}