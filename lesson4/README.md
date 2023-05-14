# Lesson 4: Loops and Searching

## Table of Contents
- [For Loop vs. While Loop](#for-loop-vs-while-loop)
- [Nested For Loop for 3D](#nested-for-loop-for-3d)
- [Searching](#searching)
    - [Linear Search](#linear-search)
    - [Binary Search](#binary-search)


## For Loop vs. While Loop

The main difference is that the initialization and increment/decrement statements are placed outside the loop in a while loop, whereas in a for loop, they are included in the loop header.

### For Loop 

The for loop is used when you know the number of iterations in advance. It consists of an initialization, a condition, and an increment/decrement statement. The loop iterates until the condition becomes false.

``` cpp
for (int i = 0; i < 5; i++) {
    // Code to be executed
}
```

### While Loop 

The while loop is used when the number of iterations is not known in advance. It repeats a block of code as long as the condition is true.

``` cpp 
int i = 0;
while (i < 5) {
    // Code to be executed
    i++;
}
```

## Nested For Loop for 3D


A nested for loop can be used to iterate over elements in a 3D array. Here's an example:

``` cpp
#include <iostream>

int main() {
    int arr[3][3][3] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    // Nested for loop to iterate over elements in a 3D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                std::cout << arr[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}
```

In this example, we have a 3D array `arr` with dimensions 3x3x3. The nested for loop iterates over the elements of the array, printing each element. The outer loop controls the first dimension, the middle loop controls the second dimension, and the inner loop controls the third dimension.

The output will display the elements of the 3D array as follows:

```
1 2 3
4 5 6
7 8 9

10 11 12
13 14 15
16 17 18

19 20 21
22 23 24
25 26 27
```

Each element is printed in the format `arr[i][j][k]`, where `i`, `j`, and `k` are the indices of the three dimensions respectively.

## Searching

### Linear Search

Linear search is a simple searching algorithm that sequentially checks each element in a collection until a match is found or the end of the collection is reached. It is suitable for unsorted or small-sized collections.

``` cpp
int main() {
   int search;
   std::cout << "Search for which number: ";
   std::cin >> search; 
   
   int arr[5] = {1, 2, 3, 4, 5};
   for (int i = 0; i < 5; i++) {
      if (arr[i] == search) {
         std::cout << "index: " << i << std::endl;
         break;
      }
   }

   return 0;
}
```

### Binary Search 

Binary search is an efficient searching algorithm for sorted collections. It repeatedly divides the search space in half by comparing the target value with the middle element, eliminating half of the remaining elements at each step.

``` cpp
int main() {
   int search;
   std::cout << "Search for which number: ";
   std::cin >> search; 

   int array[5] = {1, 2, 3, 4, 5};
   int low = 0; 
   int high = 5;
   while (low != high) {
      int mid = (int)(low + high) / 2;
      if (array[mid] < search) {
         low = mid + 1; 
      } else {
         high = mid; 
      }
   }
   std::cout << "index: " << low << std::endl;

   return 0;
}
```

Binary search requires the collection to be sorted in ascending order. It efficiently reduces the search space and has a time complexity of O(log n), making it suitable for large-sized collections.
