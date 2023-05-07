# Lesson 1: Set Up and Introduction

## Table of Contents
- [Command Lines](#command-lines)
- [Introduction to C++](#introduction-to-c)
    - [0. Overview of C++](#0-overview-of-c)
    - [1. Basics of C++ Programming](#1-basics-of-c-programming)

## Command Lines 

1. Open WSL/Ubuntu terminal. 

2. Go to your directory for the course 

```bash
cd /mnt/c/Users/[yourusername]/...
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

### 1.3 Escape Code

```cpp
'\n' // new line
'\t' // tab
'\'' // single quote (')
'\"' // double quote (")
'\?' // question mark (?)
'\\' // backslash (\)
```

### 1.4 Typed Constant Expressions

```cpp 
const char newline = '\n';
newline = '\t'; // this is incorrect
```

### 1.5 Operators 

#### Arithmetic Operators (`+`, `-`, `*`, `/`, `%`)

```cpp
x += y; // equivalent to x = x + y;
x ++; // equivalent to x += 1; and x = x + 1;
```

#### Comparison Operators (`==`, `!=`, `<`, `>`, `<=`, `>=`)

### 1.6 Input and Output
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
```
Also `cerr` for standard error (output) stream.
