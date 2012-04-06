package com.srplab.wrapandroid;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.graphics.drawable.BitmapDrawable;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLEBitmapDrawable implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			public BitmapDrawable bitmapdrawable;
			private List<Object> RefList;
			public StarCLEBitmapDrawable(Context ctx,StarObjectClass In_Object){
				bitmapdrawable = new BitmapDrawable();
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return bitmapdrawable;}
			public void SetAndroidObject(Object object){bitmapdrawable=(BitmapDrawable)object;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}