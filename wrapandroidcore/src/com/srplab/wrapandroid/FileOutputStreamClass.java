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
import java.io.FileOutputStream;
import java.io.File;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class FileOutputStreamClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init FileOutputStreamClass");

        /* FileOutputStreamClass Body */
        Service._GetObject("FileOutputStreamClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEFileOutputStream fileoutputstream = new StarCLEFileOutputStream((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)fileoutputstream);
        		return;
        	}     
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean init(StarObjectClass self,String path) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean init(StarObjectClass self,String path){
        		StarCLEFileOutputStream fileoutputstream = (StarCLEFileOutputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileoutputstream == null  )
        			return false;
        		try{
        			fileoutputstream.fileoutputstream = new FileOutputStream(new File(path));
        		    return true;
        		}
        		catch(IOException e){
        			SrvGroup._Print("init FileOutputStream ["+path+"] failed");
        			return false;
        		} 
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public boolean init1(StarObjectClass self,String path, boolean append) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public boolean init1(StarObjectClass self,String path, boolean append){
        		StarCLEFileOutputStream fileoutputstream = (StarCLEFileOutputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileoutputstream == null  )
        			return false;
        		try{
        			fileoutputstream.fileoutputstream = new FileOutputStream(new File(path),append);
        		    return true;
        		}
        		catch(IOException e){
        			SrvGroup._Print("init FileOutputStream ["+path+"] failed");
        			return false;
        		} 
        	}        	
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  close(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  close(StarObjectClass self){
        		StarCLEFileOutputStream fileoutputstream = (StarCLEFileOutputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileoutputstream == null || fileoutputstream.fileoutputstream == null  )
        			return;
        		try{
        			fileoutputstream.fileoutputstream.close();
        		}catch(IOException e){
        			return;
        		}
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  write(StarObjectClass self,int oneByte) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  write(StarObjectClass self,int oneByte){
        		StarCLEFileOutputStream fileoutputstream = (StarCLEFileOutputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileoutputstream == null || fileoutputstream.fileoutputstream == null  )
        			return;
        		try{
        			fileoutputstream.fileoutputstream.write(oneByte);
        		}catch(IOException e){
        			return;
        		}
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public void  write1(StarObjectClass self,StarBinBufClass buffer, int byteOffset, int byteCount) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public void  write1(StarObjectClass self,StarBinBufClass buffer, int byteOffset, int byteCount){
        		StarCLEFileOutputStream fileoutputstream = (StarCLEFileOutputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileoutputstream == null || fileoutputstream.fileoutputstream == null  )
        			return;
        		try{
        			byte[] buf = new byte[byteCount];
        			buffer._Read(buf, byteOffset, byteCount);        			
        			fileoutputstream.fileoutputstream.write(buf,0,byteCount);
        		}catch(IOException e){
        			return;
        		}
        	}         	
        });    
        
		return true;
	}	
}