# JNI with C++

This is a Java demo project using JNI (Java Native Interface),
    which invokes native C++ code through Java code and prints "Hello from C++ using JNI!".

## How to Compile from source

### Requirements
- Windows 64-Bit system
- Java Development Kit (Java 8 or higher)
- C++ compiler (e.g. MinGW-w64(for Windows))

### 1). Compile Java source file and generate a C/C++ header file:

Switch to the project's root directory and run the following `javac` command:
```bash
javac -h src/cfile -d out src/java/CPPCodeCaller.java
```

### 2). Compile C native code to generate a local library (on Windows a library is a DLL file):
```bash
gcc -shared -o hello_from_cpp.dll -I $env:JAVA_HOME/include -I $env:JAVA_HOME/include/win32 src/cfile/Hello.cpp
```

### 3). Package Java Classes to JAR file

```bash
jar cfe JNIWithCPP.jar CPPCodeCaller -C out .
```

## How to use

### Requirements:
- Windows 64-Bit system
- Java Runtime Kit (e.g. OpenJRE)

### Command to run

```bash
java -jar JNIWithCPP.jar
``` 