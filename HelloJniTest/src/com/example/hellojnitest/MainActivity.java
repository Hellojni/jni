package com.example.hellojnitest;

import android.os.Bundle;
import android.support.v7.app.ActionBarActivity;
import android.view.View;
import android.widget.Toast;

public class MainActivity extends ActionBarActivity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		
		 System.out.println(stringFromJNI());

	}
	
	static {
		System.loadLibrary("hello-jni");
	}
	
	public native String stringFromJNI();
	
	public void onClick(View view) {  
        //�����ť��ʾ��jni���õõ����ַ�����Ϣ  
        Toast.makeText(getApplicationContext(), stringFromJNI(), 1000).show();  
    }  

	

	



}
