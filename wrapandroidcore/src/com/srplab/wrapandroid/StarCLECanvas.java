package com.srplab.wrapandroid;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.Canvas;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLECanvas implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			public Canvas canvas;
			private List<Object> RefList;
			public StarCLECanvas(Context ctx,StarObjectClass In_Object){
				canvas = new Canvas();
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return canvas;}
			public void SetAndroidObject(Object object){canvas=(Canvas)object;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}