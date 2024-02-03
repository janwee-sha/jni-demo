#include <jni.h>
#include <iostream>
#include "CPlusPlusCodeCaller.h"

JNIEXPORT void JNICALL Java_CPlusPlusCodeCaller_hello(JNIEnv *, jobject) {
    std::cout << "Hello from C++ using JNI!" << std::endl;
}