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
import java.io.File;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class FileInputStreamClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init FileInputStreamClass");

        /* FileInputStreamClass Body */
        Service._GetObject("FileInputStreamClass")._Assign(new StarObjectClass(){
        	/* onCreateAndroid function */
        	public void onCreateAndroid( StarObjectClass self ){
        		StarObjectClass parent = (StarObjectClass)self._Get("_Parent");
        		StarObjectClass activity = (StarObjectClass)self._Call("getActivity");        		
        		StarCLEFileInputStream fileinputstream = new StarCLEFileInputStream((Activity)WrapAndroidClass.GetAndroidObject(activity,"AndroidObject"),self);        		
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)fileinputstream);
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
        		StarCLEFileInputStream fileinputstream = (StarCLEFileInputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileinputstream == null  )
        			return false;
        		try{
        		    fileinputstream.fileinputstream = new FileInputStream(new File(path));
        		    return true;
        		}
        		catch(IOException e){
        			SrvGroup._Print("init FileInputStream ["+path+"] failed");
        			return false;
        		} 
        	}
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  available(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */        	
        	public int  available(StarObjectClass self){
        		StarCLEFileInputStream fileinputstream = (StarCLEFileInputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileinputstream == null || fileinputstream.fileinputstream == null  )
        			return 0;
        		try{
        			return fileinputstream.fileinputstream.available();
        		}catch(IOException e){
        			return 0;
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
        		StarCLEFileInputStream fileinputstream = (StarCLEFileInputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileinputstream == null || fileinputstream.fileinputstream == null  )
        			return;
        		try{
        			fileinputstream.fileinputstream.close();
        		}catch(IOException e){
        			return;
        		}
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  read(StarObjectClass self) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  read(StarObjectClass self){
        		StarCLEFileInputStream fileinputstream = (StarCLEFileInputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileinputstream == null || fileinputstream.fileinputstream == null  )
        			return 0;
        		try{
        			return fileinputstream.fileinputstream.read();
        		}catch(IOException e){
        			return 0;
        		}
        	}   
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  read1(StarObjectClass self,StarBinBufClass buffer, int byteOffset, int byteCount) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  read1(StarObjectClass self,StarBinBufClass buffer, int byteOffset, int byteCount){
        		StarCLEFileInputStream fileinputstream = (StarCLEFileInputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileinputstream == null || fileinputstream.fileinputstream == null  )
        			return 0;
        		int result;
        		byte[] buf = new byte[byteCount];
        		try{
        			result = fileinputstream.fileinputstream.read(buf,0,byteCount);
        			if( result == 0 )
        				return 0;
        			buffer._Write(byteOffset,buf,result);
        			return result;
        		}catch(IOException e){
        			return 0;
        		}
        	}  
        	/**
        	 * <div class="memproto">
        	 *   <table class="memname">
        	 *     <tr><td class="memname">public int  skip(StarObjectClass self,int byteCount) </td></tr>
        	 *   </table>
        	 * </div>
        	 */
        	public int  skip(StarObjectClass self,int byteCount){
        		StarCLEFileInputStream fileinputstream = (StarCLEFileInputStream)WrapAndroidClass.GetAndroidObject(self,"AndroidObject");
        		if( fileinputstream == null || fileinputstream.fileinputstream == null  )
        			return 0;
        		try{
        			return (int)fileinputstream.fileinputstream.skip(byteCount);
        		}catch(IOException e){
        			return 0;
        		}
        	}         	
        });    
        
		return true;
	}	
}