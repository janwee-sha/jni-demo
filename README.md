# Overview

This is a Java demo project using JNI (Java Native Interface), 
    which invokes native C/C++ code through Java code. 
    Switch to modules for different implementations.

# Requirements
- Windows 64-Bit system
- Java Development Kit (Java 8 or higher)
- C++ compiler (e.g. MinGW-w64(for Windows))

# Install C/C++ compiler

## Install C/C++ compiler on Windows

If your Windows doesn't have MinGW-w64 installed,
you can follow the steps below to install MinGW-w64 in PowerShell (run as an administrator).

### 1). Run the command below to install Chocolatey:
```bash
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
```

### 2). Run the following command to install MinGW-w64:
```bash
choco install mingw -y
```

### 3). Restart the Powershell, and run the following command to check if the installation is successful:
```bash
gcc --version
```
If the powershell prints a MinGW-w64 version output, then we are done.