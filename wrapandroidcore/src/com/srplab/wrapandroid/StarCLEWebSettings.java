package com.srplab.wrapandroid;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.webkit.WebSettings;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLEWebSettings implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			public WebSettings websettings;
			private List<Object> RefList;
			public StarCLEWebSettings(Context ctx,StarObjectClass In_Object){
				websettings = null;
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return websettings;}
			public void SetAndroidObject(Object object){websettings=(WebSettings)object;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}