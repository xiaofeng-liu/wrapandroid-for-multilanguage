package com.srplab.wrapandroid;

import android.app.Activity;
import android.os.Bundle;
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
import java.lang.ref.WeakReference;

import com.srplab.www.starcore.*;

/**
 * 
 * @author srplab
 *
 */

public class WrapAndroidClass{
	static public void DumpInformation(StarSrvGroupClass SrvGroup,boolean Flag,String Info){
		if( Flag == true )
		    SrvGroup._Print(Info);
	}
	static public void SetAndroidObject(StarObjectClass Obj,String AttrName,Object AndroidObj){
		if( Obj == null )
			return;		
		if( AndroidObj == null ){
			Obj._Set(AttrName, null);
			return;
		}
		Obj._Set(AttrName, AndroidObj);
	}
	static public Object GetAndroidObject(StarObjectClass Obj,String AttrName){
		if( Obj == null )
			return null;
	    int RefCount = Obj._Getint("AndroidRefCount");
	    if( RefCount != 0 )
	        return Obj._Get(AttrName);
	    Object object = Obj._Get(AttrName);
	    if( object == null )
	    	return null;
		Object[] RefObj = (Object[])object;
		return ((WeakReference)RefObj[0]).get();
	}	
	
	static public StarServiceClass Init(Activity activity,StarSrvGroupClass SrvGroup,boolean DumpFlag){
		final StarSrvGroupClass MySrvGroup = SrvGroup;
        try{
        	String xmlbuf;
        	
        	AssetManager assetManager = activity.getAssets();
	       	InputStream dataSource = assetManager.open("SRPWrapAndroidEngine.xml");
	       	int size=dataSource.available();
	       	byte[] buffer=new byte[size]; 
	       	dataSource.read(buffer); 
	       	dataSource.close();        
	       	xmlbuf=new String(buffer);
	       	SrvGroup._ImportServiceFromXmlBuf(xmlbuf, true);
	    }
	    catch(IOException e ){
	    	return null;
	    }   	      
        //----create functions for each class
        StarServiceClass Service = SrvGroup._GetServiceEx("SRPWrapAndroidEngine","root", "123");
        AndroidBaseClass.prepare();
        AndroidBaseClass.Init(Service, SrvGroup,DumpFlag);
        
		StarServiceClass WrapService = SrvGroup._CreateService( "","wrapandroid", "123",5,0,0,0,0,0,"" );
		WrapService._CheckPassword(false);
		
		StarObjectClass StarActivity = Service._GetObject("ActivityClass")._New();
		WrapAndroidClass.SetAndroidObject(StarActivity,"AndroidObject",(Object)activity);	
		StarActivity._Call("pushActivity",StarActivity);
        
		return WrapService;
	}	
}