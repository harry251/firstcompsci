# Lesson 8: Graphs & Maps & Big-O Notation 

## Table of Contents
- [Do-While Loop](#do-while-loop)
- [Switch Cases](#switch-cases)
- [Trees](#trees)
- [Graphs](#graphs)
- [Comparing Trees and Graphs](#comparing-trees-and-graphs)
- [Understanding Big-O Notation](#understanding-big-o-notation)
- [Maps and Pairs](#maps-and-pairs)
- [Hash Tables](#hash-tables)
- [Priority Queues](#priority-queues)

## Do-While Loop

In this lesson, we introduced the do-while loop, which is similar to the while loop but with one key difference: the do-while loop always executes the loop body at least once before evaluating the loop condition. This guarantees that the loop body is executed before the condition is checked.

``` cpp
do {
    // Code to be executed
} while (condition);
```

The do-while loop is useful when you want to ensure that a block of code executes at least once, regardless of the initial condition.

## Switch Cases

Switch cases provide a structured way to handle multiple possible values or conditions for a given variable or expression. The switch statement evaluates an expression and executes the corresponding case based on its value.

``` cpp
switch (expression) {
    case value1:
        // Code to be executed if expression equals value1
        break;
    case value2:
        // Code to be executed if expression equals value2
        break;
    // More cases...
    default:
        // Code to be executed if expression doesn't match any case
        break;
}
```

Switch cases offer an alternative to using multiple if-else statements when dealing with discrete value-based conditions.

## Trees

In this lesson, we discussed trees, a type of hierarchical data structure. Trees consist of nodes connected by edges, where each node can have zero or more child nodes. The topmost node in a tree is called the root node, and each child node has a parent node.

Binary trees are a specific type of tree structure where each node has at most two child nodes, commonly referred to as the left child and the right child.

Trees are commonly used to represent hierarchical relationships, such as file systems, organization structures, and decision trees. They provide efficient searching, insertion, and deletion operations.

## Graphs

Graphs, on the other hand, are a more general data structure that represents relationships between objects. A graph consists of a set of vertices (nodes) and a set of edges that connect pairs of vertices. Edges can be directed (one-way) or undirected (two-way).

Graphs are used to model a wide range of scenarios, such as social networks, computer networks, transportation systems, and more. They provide a flexible representation for complex relationships and offer various algorithms for graph traversal, connectivity analysis, and path finding.

## Comparing Trees and Graphs

Here are some key differences between trees and graphs:

1. Structure: Trees have a hierarchical structure with a specific relationship between nodes (parent-child), while graphs have a more general structure without any strict hierarchy.

2. Connections: In a tree, there is exactly one path between any two nodes. In a graph, there can be multiple paths between nodes, allowing for more complex relationships and connectivity.

3. Degree: In a tree, each node can have at most two child nodes (in the case of a binary tree). In a graph, nodes can have any number of connections (edges), including zero or more.

4. Cyclic vs. Acyclic: Trees are acyclic structures, meaning they do not contain cycles (loops). Graphs can be cyclic (contain cycles) or acyclic, depending on the presence of loops in the connections.

5. Applications: Trees are commonly used for hierarchical relationships and organizing data. Graphs are used for modeling complex relationships and analyzing connectivity, such as in social networks, routing algorithms, and recommendation systems.

While trees are a specific type of graph, the general graph structure allows for more flexibility and complexity in representing relationships and connections between nodes. The choice between using a tree or a graph depends on the specific requirements and characteristics of the problem at hand.

## Understanding Big-O Notation

Big-O notation is a way to describe the complexity or scalability of an algorithm. It represents the upper bound or worst-case scenario of the time or space required by an algorithm as the input size grows.

- O(1): Constant time complexity. The algorithm's performance remains constant regardless of the input size.
- O(log n): Logarithmic time complexity. The algorithm's performance grows logarithmically with the input size.
- O(n): Linear time complexity. The algorithm's performance scales linearly with the input size.
- O(n^2): Quadratic time complexity. The algorithm's performance grows quadratically with the input size.
- O(2^n): Exponential time complexity. The algorithm's performance grows exponentially with the input size.

Understanding big-O notation helps in analyzing and comparing the efficiency of algorithms, making it easier to choose the most appropriate algorithm for a given problem size.

By considering the time and space complexities of algorithms, you can make informed decisions about algorithm design and selection to optimize your programs.

## Maps and Pairs

Maps are associative containers that store key-value pairs. Each key in the map is unique, and the corresponding value can be accessed using the key. Pairs are a utility class that combines two values (a key and a value) into a single entity.

``` cpp

#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> studentGrades;
    studentGrades["Alice"] = 90;
    studentGrades["Bob"] = 80;

    std::cout << "Alice's grade: " << studentGrades["Alice"] << std::endl;
    std::cout << "Bob's grade: " << studentGrades["Bob"] << std::endl;

    return 0;
}
```

In the example above, a map `studentGrades` is created, associating student names (keys) with their respective grades (values). Pairs of student names and grades are stored in the map, and you can access the grades by providing the corresponding student names.

Maps offer efficient key-value lookups, with an average time complexity of O(log n) for searching, insertion, and deletion operations. The underlying data structure of a map typically implements a balanced binary search tree, which ensures logarithmic complexity for these operations.

## Hash Tables

Hash tables, also known as hash maps, are data structures that store key-value pairs using a hash function. They allow efficient insertion, deletion, and retrieval of elements based on their keys. Hash tables use arrays and a hash function to map keys to specific indices in the array.

Hash tables provide fast average-case time complexity for search, insertion, and deletion operations, typically O(1) or constant time complexity. However, in the worst-case scenario, they may have a time complexity of O(n) due to potential collisions in the hash function.

## Priority Queues

Priority queues are abstract data types that store elements with associated priorities. The elements in a priority queue are organized in a way that allows efficient access to the element with the highest (or lowest) priority. Common implementations of priority queues include binary heaps and balanced binary search trees.

Priority queues are useful in scenarios where elements need to be processed in order of their priority.