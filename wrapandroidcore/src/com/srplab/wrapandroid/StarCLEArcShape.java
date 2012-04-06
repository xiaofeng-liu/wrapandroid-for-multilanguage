package com.srplab.wrapandroid;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.graphics.drawable.shapes.ArcShape;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLEArcShape implements BasicAndroidInterface{
			private BasicAndroidClass BasicAndroidObject;    
			public ArcShape arcshape;
			private List<Object> RefList;
			public StarCLEArcShape(Context ctx,StarObjectClass In_Object){
				arcshape = null;
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return arcshape;}
			public void SetAndroidObject(Object object){arcshape=(ArcShape)object;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
			}			
		}