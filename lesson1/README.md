# Lesson 1

## Table of Contents
1. [Command Lines](#command-lines)
2. [Introduction to C++](#introduction-to-c)

## Command Lines 

1. Open WSL/Ubuntu terminal. 

2. Go to your directory for the course 

```bash
cd /mnt/c/Users/[yourusername]/.../.../
```
- cd [folder/directory] : Change directory 
- cd .. : Goes to the previous directory 
- ls : list all files in current working directory
- pwd : prints current working directory
- history : lists the previous used command lines
- clear : clears the terminal

Also, pressing the TAB key auto-completes

3. Running C++ Program

- Compile the file: 
```bash 
clang++ -g -o [nameofthefile].out [nameofthefile].cpp
```
- Then run it 
```bash 
./[nameofthefile].out
```

## Introduction to C++

### 0. Overview of C++

C++ is a general-purpose programming language that supports procedural, object-oriented, and generic programming. It is an extension of the C programming language and was developed by Bjarne Stroustrup in 1985. The language has gained popularity for its performance, efficiency, and flexibility.

### 1. Basics of C++ Programming

#### 1.1 Variables and Data Types

C++ has several basic data types, including:

- `int`: integers
- `float`: floating-point numbers
- `double`: double-precision floating-point numbers
- `char`: characters
- `bool`: boolean values (true or false)

You can declare variables with a specific data type:

```cpp
char grade = 'A';
int age = 30;
float weight = 65.5;
double pi = 3.14159265359;
bool isTrue = true; // 1
bool isFalse = false; // 0 
std::string name = "Ethan";
```

### 1.2 Comments

```cpp
// line comment
/* block comment */
```

### 1.3 Input and Output
For input and output, you'll use the iostream library, which provides the cin and cout objects for reading from and writing to the console, respectively:

```cpp
#include <iostream>
using namespace std:

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    return 0;
}
'''
