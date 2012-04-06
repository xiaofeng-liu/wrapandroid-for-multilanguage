package com.srplab.wrapandroid;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLEGradientDrawable implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			public GradientDrawable gradientdrawable;
			private List<Object> RefList;
			public StarCLEGradientDrawable(Context ctx,StarObjectClass In_Object){
				gradientdrawable = new GradientDrawable();
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return gradientdrawable;}
			public void SetAndroidObject(Object object){gradientdrawable=(GradientDrawable)object;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}