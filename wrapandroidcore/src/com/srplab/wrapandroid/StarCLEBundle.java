package com.srplab.wrapandroid;

import java.util.ArrayList;
import java.util.List;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.os.Bundle;

import com.srplab.www.starcore.StarObjectClass;

class StarCLEBundle implements BasicAndroidInterface{
	private BasicAndroidClass BasicAndroidObject;         			        			
	public Bundle bundle;
	private List<Object> RefList;
	public StarCLEBundle(Context ctx,StarObjectClass In_Object){
		super();
		bundle = null;
		BasicAndroidObject = new BasicAndroidClass();
		BasicAndroidObject.setStarObject(In_Object);
		RefList = new ArrayList<Object>();
	}
	public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
	public Object GetAndroidObject(){return bundle;}
	public void SetAndroidObject(Object object){bundle=(Bundle)object;}
	public void AddRef(Object object){RefList.add(object);}
	public void DelRef(Object object){RefList.remove(object);}
	protected void finalize(){
		StarObjectClass starobject = BasicAndroidObject.getStarObject();
		if( starobject != null )
			starobject._Free();
	}			
}	