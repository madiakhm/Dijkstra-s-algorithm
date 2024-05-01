## Dijkstra's Shortest Path Algorithm

## Introduction 
This C++ program implements Dijkstra's algorithm to find the shortest paths from a given source node to all other nodes in a weighted graph. Dijkstra's algorithm is a popular graph algorithm used in various applications such as routing protocols, network optimization, and pathfinding in video games.

## Files 
- `dijkstra.cpp`: This file contains the implementation of Dijkstra's algorithm.
- `README.md`: This file provides information about the program.

## Implementation Details 
The program defines a `dijkstra` function that takes a graph represented as an adjacency list and a starting node as input. It calculates the shortest distances from the starting node to all other nodes using Dijkstra's algorithm. The algorithm maintains a priority queue of nodes to explore, prioritizing nodes with the smallest tentative distance.

## Usage 
To compile and run the program, follow these steps:
1. Ensure you have a C++ compiler installed on your system.
2. Open a terminal or command prompt.
3. Navigate to the directory containing the `dijkstra.cpp` file.
4. Compile the program using the following command:g++ -o dijkstra dijkstra.cpp
5.  Run the compiled executable:./dijkstra


## Example Output 
Shortest distances from node 0 to all other nodes:

Node 0: 0

Node 1: 2

Node 2: 3

Node 3: 9

Node 4: 6

Node 5: 10

## Notes 
- The program efficiently finds the shortest paths in weighted graphs using Dijkstra's algorithm.
- It can be extended to handle larger graphs and different types of weighted edges.


