package com.srplab.wrapandroid;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.ArrayList;
import java.util.List;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLEFileOutputStream implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			public FileOutputStream fileoutputstream;
			private List<Object> RefList;
			public StarCLEFileOutputStream(Context ctx,StarObjectClass In_Object){
				fileoutputstream = null;
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return fileoutputstream;}
			public void SetAndroidObject(Object object){fileoutputstream=(FileOutputStream)object;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}