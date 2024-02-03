#include <jni.h>         // JDK内置的JNI头文件
#include <stdio.h>       // C标准I/O头文件
#include "CCodeCaller.h" // 生成的头文件

// 实现本地方法hello()
JNIEXPORT void JNICALL Java_CCodeCaller_hello(JNIEnv *env, jobject thisObj) {
   printf("Hello from C using JNI!");
   return;
}