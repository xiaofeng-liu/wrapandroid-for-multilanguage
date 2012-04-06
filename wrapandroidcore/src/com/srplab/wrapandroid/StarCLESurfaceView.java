package com.srplab.wrapandroid;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.List;

import android.view.SurfaceView;
import android.view.SurfaceHolder;

import com.srplab.www.starcore.StarObjectClass;

		class StarCLESurfaceView extends SurfaceView implements BasicAndroidInterface,SurfaceHolder.Callback{
			private BasicAndroidClass BasicAndroidObject;    
			public StarObjectClass BasicCanvasObject;
			private List<Object> RefList;
			public StarCLESurfaceView(Context ctx,StarObjectClass In_Object){
				super(ctx);
	            
				getHolder().addCallback(this);
	            
				BasicCanvasObject = null;
				BasicAndroidObject = new BasicAndroidClass();
				BasicAndroidObject.setStarObject(In_Object);
				RefList = new ArrayList<Object>();
			}
			public BasicAndroidClass getBasicAndroid(){return BasicAndroidObject;};
			public Object GetAndroidObject(){return this;}
			public void SetAndroidObject(Object object){return;}
			public void AddRef(Object object){RefList.add(object);}
			public void DelRef(Object object){RefList.remove(object);}
			protected void finalize(){
				StarObjectClass starobject = BasicAndroidObject.getStarObject();
				if( starobject != null )
					starobject._Free();
				if( BasicCanvasObject != null )
					BasicCanvasObject._Free();				
			}	
	        @Override  
	        public void surfaceChanged(SurfaceHolder holder, int format,int width,int height) {  
				StarObjectClass self = BasicAndroidObject.getStarObject();
				self._Call("surfaceChanged", format,width,height);	        	
	        }   
	  
	        @Override  
	        public void surfaceCreated(SurfaceHolder holder) {   
				StarObjectClass self = BasicAndroidObject.getStarObject();
				self._Call("surfaceCreated");	        	
	        }   
	  
	        @Override  
	        public void surfaceDestroyed(SurfaceHolder holder) {   
				StarObjectClass self = BasicAndroidObject.getStarObject();
				self._Call("surfaceCreated");	        		               
	        } 			
		}