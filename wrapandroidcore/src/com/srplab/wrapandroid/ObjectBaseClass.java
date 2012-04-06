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

public class ObjectBaseClass{
	/**
	 * @note do not call Init method directly
	 */	
	static public boolean Init(StarServiceClass In_Service,StarSrvGroupClass In_SrvGroup,boolean In_DumpInformationFlag){
		final StarSrvGroupClass SrvGroup = In_SrvGroup;
		final StarServiceClass Service = In_Service;	
		final boolean DumpInformationFlag = In_DumpInformationFlag;
		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "init ObjectBaseClass");

        /* ObjectBaseClass Body */
        Service._GetObject("ObjectBaseClass")._Assign(new StarObjectClass(){
        	/* _OnCreate Event */
        	public Object[] _OnCreate(Hashtable Ev){
        		StarObjectClass self = (StarObjectClass)Ev.get("_DesObject");
        		self._Call("onCreateAndroid");
        		if( WrapAndroidClass.GetAndroidObject(self,"AndroidObject") != null )
        			self._SLockGC();
        		else{
        			SrvGroup._Print("Create object failed...");
        			return null;
        		}
        		WrapAndroidClass.DumpInformation(SrvGroup, DumpInformationFlag, "starobject : "+self+" is created");
        		return null;
        	} 
        	
        	/* _OnDestroy Event */
        	public Object[] _OnDestroy(Hashtable Ev){
        		StarObjectClass self = (StarObjectClass)Ev.get("_DesObject");      
        		self._Call("onDestroyAndroid");
        		WrapAndroidClass.SetAndroidObject(self,"AndroidObject",(Object)null);    
           		return null;        		
        	}          	    	
        });         
        
		return true;
	}	
}