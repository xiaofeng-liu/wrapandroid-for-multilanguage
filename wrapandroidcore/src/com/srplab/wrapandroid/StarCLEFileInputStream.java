package com.srplab.wrapandroid;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.os.Bundle;

import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.List;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLEFileInputStream implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			public FileInputStream fileinputstream;
			private List<Object> RefList;
			public StarCLEFileInputStream(Context ctx,StarObjectClass In_Object){
				fileinputstream = null;
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return fileinputstream;}
			public void SetAndroidObject(Object object){fileinputstream=(FileInputStream)object;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}