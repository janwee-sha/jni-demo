#include <jni.h>
#include <stdio.h>
#include "JNIPrimitiveTest.h"

JNIEXPORT jdouble JNICALL Java_JNIPrimitiveTest_avg
  (JNIEnv *env, jobject thisObj, jint n1, jint n2) {
    jdouble avg;
    avg = ((jdouble) n1 + n2) / 2.0;
    return avg;
}