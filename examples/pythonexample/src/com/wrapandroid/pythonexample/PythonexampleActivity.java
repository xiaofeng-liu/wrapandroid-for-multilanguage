package com.wrapandroid.pythonexample;

import android.app.Activity;
import android.os.Bundle;
import com.srplab.wrapandroid.*; 

public class PythonexampleActivity extends WrapAndroidActivity {
    /** Called when the activity is first created. */
    @Override
    public void onCreate(Bundle savedInstanceState) {
    	DumpInfoFlag = true;
        super.onCreate(savedInstanceState);
//        setContentView(R.layout.main);
        //StarActivity._Call("DoAssetsFile", "python", "code.py");    /*first example*/
        //StarActivity._Call("DoAssetsFile", "python", "code1.py");     /*second example*/
        //StarActivity._Call("DoAssetsFile", "python", "code2.py");
        //StarActivity._Call("DoAssetsFile", "python", "code4.py");
        //StarActivity._Call("DoAssetsFile", "python", "code5.py");
        //StarActivity._Call("DoAssetsFile", "python", "code6.py");
        //StarActivity._Call("DoAssetsFile", "python", "code7.py");
        //StarActivity._Call("DoAssetsFile", "python", "code8.py");
        //StarActivity._Call("DoAssetsFile", "python", "code9.py");
        StarActivity._Call("DoAssetsFile", "python", "code10.py");
    }
}