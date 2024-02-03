#include <jni.h>
#include <iostream>
#include "CPPCodeCaller.h"

JNIEXPORT void JNICALL Java_CPPCodeCaller_hello(JNIEnv *, jobject) {
    std::cout << "Hello from C++ using JNI!" << std::endl;
}