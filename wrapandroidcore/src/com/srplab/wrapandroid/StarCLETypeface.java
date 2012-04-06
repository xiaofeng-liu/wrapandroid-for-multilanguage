package com.srplab.wrapandroid;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLETypeface implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			public Typeface typeface;
			private List<Object> RefList;
			public StarCLETypeface(Context ctx,StarObjectClass In_Object){
				typeface = null;
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};  
			public Object GetAndroidObject(){return typeface;}
			public void SetAndroidObject(Object object){typeface=(Typeface)object;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}