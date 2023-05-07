# Lesson 2: Control Flow and Functions/Classes

## Table of Contents
- [Control Structures](#control-structures)
- [Functions](#functions)
- [Classes](#classes)
- [Scope](#scope)
- [Memory Management](#memory-management)
- [Collections](#collections)
- [Iteration](#iteration)

## Control Structures

### If Statements
```cpp 
if (condition) {
    // code to execute if condition is true
} else if (another_condition) {
    // code to execute if another_condition is true
} else {
    // code to execute if all conditions are false
}
```
### For Loops
```cpp 
for (initialization; condition; update) {
    // code to execute for each iteration
}
```

## Functions 
```cpp
return_type function_name(arguments) {
    // function body
    return result;
}
```

## Classes
```cpp
class ClassName {
public:
    // public members

private:
    // private members
};
```

## Scope
- Local scope: Variables and functions defined within a block or function.
- Class scope: Variables and functions defined within a class.
- Global scope: Variables and functions defined outside any block, function, or class.

## Memory Management

### Stack 
- Automatically managed memory.
- Variables and function calls are stored on the stack.

### Heap 
- Manually managed memory.
- Memory can be allocated and deallocated as needed.

## Pointers and Null

```cpp 
int* ptr = nullptr; // Declare a null pointer
int x = 42;
ptr = &x; // Point ptr to the memory address of x
```

## Collections

### Arrays
- Fixed-size.
- Elements of the same type.
- Can store duplicates.
```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

### Lists
- Dynamic size.
- Elements of the same type.
- Can store duplicates.
```cpp
#include <list>
std::list<int> myList = {1, 2, 3, 4, 5};
```

### Sets
- Dynamic size.
- Elements of the same type.
- Cannot store duplicates.
```cpp
#include <set>
std::set<int> mySet = {1, 2, 3, 4, 5};
```

## Iteration

### Using for loop with lists 
```cpp
#include <list>
std::list<int> myList = {1, 2, 3, 4, 5};

for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
    // access the element through the iterator
    std::cout << *it << std::endl;
}
```