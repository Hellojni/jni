/*
 * Copyright (C) 2009 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#include <string.h>
#include <jni.h>

/* This is a trivial JNI example where we use a native method
 * to return a new VM String. See the corresponding Java source
 * file located at:
 *
 *
 */
/*
 * 方法名称规定 : Java_完整包名类名_方法名()
 * JNIEnv 指针
 *
 * 参数介绍 :
 * env : 代表Java环境, 通过这个环境可以调用Java中的方法
 * thiz : 代表调用JNI方法的对象, 即MainActivity对象
 */
jstring Java_com_example_hellojnitest_MainActivity_stringFromJNI(JNIEnv *env, jobject thiz)
{
    /*
     * 调用 android-ndk-r9c\platforms\android-8\arch-arm\usr\include 中jni.h中的方法
     * jni.h 中定义的方法  jstring (*NewStringUTF)(JNIEnv*, const char*);
     */
    return (*env)->NewStringUTF(env, "hello world jni");
}
