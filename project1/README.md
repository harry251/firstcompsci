# Project 1

## Table of Contents
- [Collections](#collections)
- [Tic Tac Toe](#tic-tac-toe)
- [Nested For Loop](#nested-for-loop)
- [Break Statement](#break-statement)
- [Continue Statement](#continue-statement)

## Collections

### Arrays
- Use arrays when the size of the collection is fixed and known at compile-time.
- Arrays provide direct and efficient access to elements by index.
- Suitable for small collections or when memory efficiency is important.
- Examples: Storing a fixed set of constants, representing colors in a color palette.rr[5] = {1, 2, 3, 4, 5};

### Vectors
- Use vectors when the size of the collection needs to dynamically grow or shrink.
- Vectors provide efficient random access to elements by index.
- Suitable for most general-purpose collection needs.
- Examples: Storing a list of user inputs, managing a collection of game entities.

### Lists
- Use lists when efficient insertion and deletion of elements at any position is required.
- Lists provide constant time complexity for insertion and deletion at any position.
- Suitable for scenarios where frequent insertion or deletion operations are expected.
- Examples: Implementing a linked list data structure, managing a queue of tasks.

### Sets
- Use sets when uniqueness of elements and fast membership check is important.
- Sets automatically handle duplicate elements and maintain a sorted or hashed order.
- Suitable for scenarios where uniqueness is a requirement.
- Examples: Managing a list of unique usernames, storing a dictionary of unique words.

## Tic Tac Toe

You can find the complete Tic Tac Toe code on my GitHub repository:

- [Tic Tac Toe Repository](https://github.com/harry251/firstcompsci/blob/main/project1/tic.cpp)

## Nested For Loop

Nested for loops can be used to iterate over elements in a 2D array or a matrix.

```cpp
int matrix[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        std::cout << matrix[i][j] << ' ';
    }
    std::cout << std::endl;
}
```

Output: 

```
1 2 3 
4 5 6 
7 8 9 
```

Nested for loops are useful for accessing individual elements in a 2D array and performing operations on them.

## Break Statement
The `break` statement is used to exit a loop prematurely. When encountered within a loop, the `break` statement terminates the loop and transfers control to the next statement after the loop.

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;
    }
    std::cout << i << ' ';
}
```

Output:

```
0 1 2 3 4
```

In the above example, the loop will stop when `i` becomes `5` because of the `break` statement. The remaining iterations of the loop are skipped, and the program continues execution after the loop.

## Continue Statement

The `continue` statement is used to skip the current iteration of a loop and move on to the next iteration. When encountered within a loop, the `continue` statement immediately jumps to the next iteration without executing the remaining statements within the loop body.

```cpp
for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue;
    }
    std::cout << i << ' ';
}
```

Output:

```
1 3 5 7 9
```

In the above example, the `continue` statement is used to skip even numbers. When `i` is divisible by 2 (i.e., an even number), the `continue` statement is encountered, and the loop moves on to the next iteration without executing the `std::cout` statement. As a result, only odd numbers are printed.