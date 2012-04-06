package com.srplab.wrapandroid;

import android.app.Activity;
import android.os.Bundle;
import android.content.res.AssetManager;
import android.widget.*;
import android.view.*;
import android.widget.LinearLayout;
import android.widget.AbsoluteLayout.LayoutParams;
import android.util.*;
import android.widget.RadioGroup.OnCheckedChangeListener;
import android.net.Uri;

import java.io.IOException;
import java.io.InputStream;
import java.util.Hashtable;
import java.util.Stack;

import com.srplab.www.starcore.*;

public class BasicAndroidClass{  
     private StarObjectClass StarObject;
     
     public BasicAndroidClass(){};
     public StarObjectClass getStarObject(){return StarObject;};
     public void setStarObject(StarObjectClass In_Object){StarObject = In_Object;};
}  

