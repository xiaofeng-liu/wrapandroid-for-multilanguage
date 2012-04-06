package com.srplab.wrapandroid;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.graphics.drawable.shapes.RectShape;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLERectShape implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			public RectShape rectshape;
			private List<Object> RefList;
			public StarCLERectShape(Context ctx,StarObjectClass In_Object){
				rectshape = new RectShape();
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return rectshape;}
			public void SetAndroidObject(Object object){rectshape=(RectShape)object;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}