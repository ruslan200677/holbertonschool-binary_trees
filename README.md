# Binary Trees Project

## Overview

This project involves the implementation and manipulation of binary trees. A binary tree is a data structure where each node has at most two children, commonly referred to as the left and right child. This project includes various functionalities to work with binary trees, such as creating nodes, inserting nodes, traversing the tree, and more advanced operations.

## Files

- **binary_tree_node.c**: Implements the function to create a new binary tree node.
- **binary_tree_insert_left.c**: Implements the function to insert a node as the left child of another node.
- **binary_tree_insert_right.c**: Implements the function to insert a node as the right child of another node.
- **binary_tree_delete.c**: Implements the function to delete an entire binary tree.
- **binary_tree_is_leaf.c**: Implements the function to check if a node is a leaf.
- **binary_tree_is_root.c**: Implements the function to check if a node is the root.
- **binary_tree_preorder.c**: Implements the function for pre-order traversal of the tree.
- **binary_tree_inorder.c**: Implements the function for in-order traversal of the tree.
- **binary_tree_postorder.c**: Implements the function for post-order traversal of the tree.
- **binary_tree_height.c**: Implements the function to measure the height of a binary tree.
- **binary_tree_depth.c**: Implements the function to measure the depth of a node in the binary tree.
- **binary_tree_size.c**: Implements the function to measure the size of a binary tree.
- **binary_tree_leaves.c**: Implements the function to count the leaves in a binary tree.
- **binary_tree_nodes.c**: Implements the function to count the nodes with at least one child in a binary tree.
- **binary_tree_print.c**: Provides a utility function to print the binary tree (for debugging purposes).
- **14-binary_tree_balance.c**: Implements the function to measure the balance factor of a binary tree.
- **15-binary_tree_is_full.c**: Implements the function to check if a binary tree is full.
- **16-binary_tree_is_perfect.c**: Implements the function to check if a binary tree is perfect.
- **17-binary_tree_sibling.c**: Implements the function to find the sibling of a given node.
- **18-binary_tree_uncle.c**: Implements the function to find the uncle of a given node.

## Function Prototypes

### `binary_tree_node`

```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

- **Description**: Creates a new binary tree node with the given value and parent.
- **Parameters**:
  - `parent`: Pointer to the parent node.
  - `value`: Value to store in the new node.
- **Returns**: Pointer to the new node, or `NULL` on failure.

### `binary_tree_insert_left`

```c
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```

- **Description**: Inserts a new node as the left child of the given parent node.
- **Parameters**:
  - `parent`: Pointer to the parent node.
  - `value`: Value to store in the new node.
- **Returns**: Pointer to the newly created node, or `NULL` on failure.

### `binary_tree_insert_right`

```c
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```

- **Description**: Inserts a new node as the right child of the given parent node.
- **Parameters**:
  - `parent`: Pointer to the parent node.
  - `value`: Value to store in the new node.
- **Returns**: Pointer to the newly created node, or `NULL` on failure.

### `binary_tree_delete`

```c
void binary_tree_delete(binary_tree_t *tree);
```

- **Description**: Deletes an entire binary tree.
- **Parameters**:
  - `tree`: Pointer to the root node of the tree to delete.

### `binary_tree_is_leaf`

```c
int binary_tree_is_leaf(const binary_tree_t *node);
```

- **Description**: Checks if the given node is a leaf (i.e., has no children).
- **Parameters**:
  - `node`: Pointer to the node to check.
- **Returns**: `1` if the node is a leaf, `0` otherwise.

### `binary_tree_is_root`

```c
int binary_tree_is_root(const binary_tree_t *node);
```

- **Description**: Checks if the given node is the root of the tree.
- **Parameters**:
  - `node`: Pointer to the node to check.
- **Returns**: `1` if the node is a root, `0` otherwise.

### `binary_tree_preorder`

```c
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```

- **Description**: Performs a pre-order traversal of the tree and applies the given function to each node's value.
- **Parameters**:
  - `tree`: Pointer to the root node of the tree to traverse.
  - `func`: Function to call for each node.

### `binary_tree_inorder`

```c
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```

- **Description**: Performs an in-order traversal of the tree and applies the given function to each node's value.
- **Parameters**:
  - `tree`: Pointer to the root node of the tree to traverse.
  - `func`: Function to call for each node.

### `binary_tree_postorder`

```c
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```

- **Description**: Performs a post-order traversal of the tree and applies the given function to each node's value.
- **Parameters**:
  - `tree`: Pointer to the root node of the tree to traverse.
  - `func`: Function to call for each node.

### `binary_tree_height`

```c
size_t binary_tree_height(const binary_tree_t *tree);
```

- **Description**: Measures the height of the binary tree.
- **Parameters**:
  - `tree`: Pointer to the root node of the tree.
- **Returns**: The height of the tree.

### `binary_tree_depth`

```c
size_t binary_tree_depth(const binary_tree_t *tree);
```

- **Description**: Measures the depth of a node in the binary tree.
- **Parameters**:
  - `tree`: Pointer to the node to measure the depth of.
- **Returns**: The depth of the node.

### `binary_tree_size`

```c
size_t binary_tree_size(const binary_tree_t *tree);
```

- **Description**: Measures the size (total number of nodes) of the binary tree.
- **Parameters**:
  - `tree`: Pointer to the root node of the tree.
- **Returns**: The size of the tree.

### `binary_tree_leaves`

```c
size_t binary_tree_leaves(const binary_tree_t *tree);
```

- **Description**: Counts the number of leaves in the binary tree.
- **Parameters**:
  - `tree`: Pointer to the root node of the tree.
- **Returns**: The number of leaves.

### `binary_tree_nodes`

```c
size_t binary_tree_nodes(const binary_tree_t *tree);
```

- **Description**: Counts the number of nodes with at least one child in the binary tree.
- **Parameters**:
  - `tree`: Pointer to the root node of the tree.
- **Returns**: The number of nodes with at least one child.

### `binary_tree_balance`

```c
int binary_tree_balance(const binary_tree_t *tree);
```

- **Description**: Measures the balance factor of the binary tree (difference in heights of left and right subtrees).
- **Parameters**:
  - `tree`: Pointer to the root node of the tree.
- **Returns**: The balance factor of the tree.

### `binary_tree_is_full`

```c
int binary_tree_is_full(const binary_tree_t *tree);
```

- **Description**: Checks if a binary tree is full (every node has either 0 or 2 children).
- **Parameters**:
  - `tree`: Pointer to the root node of the tree.
- **Returns**: `1` if the tree is full, `0` otherwise.

### `binary_tree_is_perfect`

```c
int binary_tree_is_perfect(const binary_tree_t *tree);
```

- **Description**: Checks if a binary tree is perfect (all internal nodes have two children and all leaf nodes are at the same level).
- **Parameters**:
  - `tree`: Pointer to the root node of the tree.
- **Returns**: `1` if the tree is perfect, `0` otherwise.

### `binary_tree_sibling`

```c
binary_tree_t *binary_tree_sibling(const binary_tree_t *node);
```

- **Description**: Finds the sibling of the given node.
- **Parameters**:
  - `node`: Pointer to the node whose sibling to find.
- **Returns**: Pointer to the sibling node, or `NULL` if the node has no sibling.

### `binary_tree_uncle`

```c
binary_tree_t *binary_tree_uncle(const binary_tree_t *node);
```

- **Description**: Finds the uncle of the given node (i.e., the sibling of the node's parent

).
- **Parameters**:
  - `node`: Pointer to the node whose uncle to find.
- **Returns**: Pointer to the uncle node, or `NULL` if the node has no uncle.

## Compilation

To compile the project, use the following command:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c <source_files> -o <output_executable>
```

Replace `<source_files>` with the source files you want to compile and `<output_executable>` with the desired name for the compiled program.

## Usage

Run the compiled executable to test the functionalities. The `binary_tree_print.c` file is used for printing the tree and is included for debugging purposes.

## Example

After compiling, you can run the examples provided in each `*_main.c` file to see the functions in action.
