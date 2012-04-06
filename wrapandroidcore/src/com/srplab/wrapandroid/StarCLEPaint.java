package com.srplab.wrapandroid;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Paint;
import android.graphics.Typeface;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.Canvas;
import android.graphics.Path;

import com.srplab.www.starcore.StarObjectClass;

class StarCLEPaint implements BasicAndroidInterface{
	private BasicAndroidClass BasicAndroidObject;  
	Paint paint;
	private List<Object> RefList;
	public StarCLEPaint(Context ctx,StarObjectClass In_Object){
		super();
		paint = new Paint();
		BasicAndroidObject = new BasicAndroidClass();
		BasicAndroidObject.setStarObject(In_Object);
		RefList = new ArrayList<Object>();
	}
	public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;}; 
	public Object GetAndroidObject(){return paint;}
	public void SetAndroidObject(Object object){paint = (Paint)object;}
	public void AddRef(Object object){RefList.add(object);}
	public void DelRef(Object object){RefList.remove(object);}
	protected void finalize(){
		StarObjectClass starobject = BasicAndroidObject.getStarObject();
		if( starobject != null )
			starobject._Free();
	}			
}