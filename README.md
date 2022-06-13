# Project_BinaryTrees




Write a program which will process several sets of numbers.

For each set of numbers, you must...
  1) Create a binary tree
  2) Print the tree using "inorder", "preorder", and "postorder"
  3) Call a subroutine "count", which returns the number of nodes in the tree
  4) Call a subroutine "children" which prints the number of children
  each node has
  5) Insert and delete several nodes according to the instructions given
  6) Print the tree again using "inorder", "preorder", and "postorder"
  7) Call subroutine "count" again, which returns the number of nodes in the tree
  8) Call subroutine "children" again, which prints the number of children
  each node has
  9) Free the tree

To be done using dynamic storage and pointers
To be don using static storage and arrays.

Data to be used: (-999 terminates the original data)

Set #1    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 -999
          Insert 21   Delete 1   Insert 0   Delete 10
          Delete 11   Delete 5   Delete 2   Insert 10

Set #2    3 1 5
          Delete 3    Delete 1

Set #3    -999
          Delete 15   Insert 30  Insert 5   Insert 10   Insert 20
          Delete 20   Delete 10  Delete 5   Delete 15   Delete 30

Set #4    2 -999
          Delete 2

Set #5    11 25 75 12 37 60 90 8 15 32 45 50 67 97 95 -999
          Delete 37   Delete 15  Insert 40  Insert 99

Set #6    50 40 60 30 70 20 80 10 90 -999


Set #7    30 40 20 10 50 -999

Note: Your insert/delete routines must be able to handle duplicate values
and deleting non-existant values
