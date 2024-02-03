# 1. JNI with C

## How to Compile from source

### 1). Compile Java source file and generate a C/C++ header file:

Switch to the project's root directory and run the following `javac` command:
```bash
javac -h src/cfile -d out src/java/CCodeCaller.java
```

### 2). Compile C native code to generate a local library (on Windows a library is a DLL file):
```bash
gcc -shared -o hello_from_c.dll -I $env:JAVA_HOME/include -I $env:JAVA_HOME/include/win32 src/cfile/Hello.c
```

### 3). Package Java Classes to JAR file

```bash
jar cfe JNIWithC.jar CCodeCaller -C out .
```

## How to use

### Requirements:
- Windows 64-Bit system
- Java Runtime Kit (e.g. OpenJRE)

### Command to run

```bash
java -jar JNIWithC.jar
``` 