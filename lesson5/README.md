# Lesson 5: Recursive functions and Pointers

## Table of Contents
- [Recursive Binary Search](#recursive-binary-search)
- [Recursive Fibonacci Sequence](#recursive-fibonacci-sequence)
- [Tips for Writing Recursive Functions](#tips-for-writing-recursive-functions)
- [Stack vs Heap and Pointers](#stack-vs-heap-and-pointers)
- [Pointers to Arrays](#pointers-to-arrays)


## Recursive Binary Search

In the previous lesson, we learned about iterative binary search. Now, let's explore the recursive implementation of the binary search algorithm.

``` cpp
int recursiveBinarySearch(const std::vector<int>& arr, int target, int left, int right) {
    if (left > right) {
        return -1; // Element not found
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid; // Element found at index mid
    } else if (arr[mid] < target) {
        return recursiveBinarySearch(arr, target, mid + 1, right); // Search in the right half
    } else {
        return recursiveBinarySearch(arr, target, left, mid - 1); // Search in the left half
    }
}
```
The recursiveBinarySearch function takes the array, target value, left index, and right index as parameters. It recursively divides the search space in half and compares the target value with the middle element. If the middle element is equal to the target, it returns the index. If the middle element is less than the target, the function is called again for the right half of the array. If the middle element is greater than the target, the function is called again for the left half of the array. The process continues until the element is found or the search space is exhausted.

## Recursive Fibonacci Sequence
The Fibonacci sequence is a series of numbers in which each number is the sum of the two preceding ones. We can implement a recursive function to calculate the nth Fibonacci number.

```cpp
int recursiveFibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}
```
The recursiveFibonacci function takes an integer n as input and recursively calculates the Fibonacci number at index n. The base case is when n is 0 or 1, in which case the function returns n. Otherwise, the function recursively calls itself with n-1 and n-2 as arguments and adds the results to compute the nth Fibonacci number.

## Tips for Writing Recursive Functions

1. Base Case or Termination Condition: Define one or more base cases that determine when the recursive function should stop recursing and return a result. Base cases are typically simple scenarios where the answer is known or easily computable without further recursion. It's important to ensure that the recursive function eventually reaches the base case to avoid infinite recursion.

2. Finding the Recurring Function(s): Identify the recurring function or functions that will be called within the recursive function. These recurring functions are responsible for breaking down the problem into smaller subproblems and making progress towards the base case. The recurring functions should be designed to transform the current problem into a smaller, more manageable instance of the same problem. Carefully determine the inputs and outputs of the recurring function(s) to ensure correct computation and convergence towards the base case.

By focusing on these two aspects, you can effectively structure and implement recursive functions in a way that ensures proper termination and efficient problem solving.

## Stack vs Heap and Pointers

In this lesson, we discussed the concepts of stack and heap memory and their relationship with pointers. We learned that variables declared inside a function are typically stored on the stack, while dynamically allocated memory using the `new` keyword is stored on the heap.

Pointers allow us to work with memory addresses and access data indirectly. We can allocate memory on the heap using the `new` operator and deallocate it using the `delete` operator.

```cpp 
int* ptr = new int; // Allocate memory on the heap
*ptr = 10; // Store a value in the allocated memory
std::cout << *ptr; // Access the value

delete ptr; // Deallocate the memory
```
It's important to manage memory properly to avoid memory leaks. Memory allocated with `new` should be deallocated with `delete` to free the memory and prevent memory leaks.

Understanding the difference between stack and heap memory and how to use pointers effectively is crucial for writing efficient and correct C++ code.

## Pointers to Arrays

In C++, arrays are represented as contiguous blocks of memory. Pointers can be used to access and manipulate array elements efficiently.

```cpp 
int arr[5] = {1, 2, 3, 4, 5};
int* ptr = arr; // Pointer to the first element of the array

for (int i = 0; i < 5; ++i) {
    std::cout << *ptr << " "; // Accessing array elements through the pointer
    ++ptr; // Move the pointer to the next element
}

// Output: 1 2 3 4 5
```

By using a pointer to the array, we can iterate through the elements, access and modify them, and perform various operations efficiently.

Understanding how to work with pointers and arrays is essential for manipulating data structures and optimizing performance in C++ programs.

