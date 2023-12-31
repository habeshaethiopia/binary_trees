 ```
# Binary Tree Implementation in C

This is a C implementation of a binary tree data structure. The binary tree is implemented using a linked list, where each node in the tree is represented by a `binary_tree_t` structure. The `binary_tree_t` structure contains the following fields:

* `n`: The integer value stored in the node.
* `parent`: A pointer to the parent node.
* `left`: A pointer to the left child node.
* `right`: A pointer to the right child node.

The following files are included in this project:

* `0-binary_tree_node.c`: This file contains the implementation of the `binary_tree_node()` function, which creates a new binary tree node.
* `1-binary_tree_insert_left.c`: This file contains the implementation of the `binary_tree_insert_left()` function, which inserts a new node as the left child of an existing node.
* `2-binary_tree_insert_right.c`: This file contains the implementation of the `binary_tree_insert_right()` function, which inserts a new node as the right child of an existing node.
* `3-binary_tree_delete.c`: This file contains the implementation of the `binary_tree_delete()` function, which deletes a node from a binary tree.
* `4-binary_tree_is_leaf.c`: This file contains the implementation of the `binary_tree_is_leaf()` function, which checks if a node is a leaf node.
* `5-binary_tree_is_root.c`: This file contains the implementation of the `binary_tree_is_root()` function, which checks if a node is the root node of a binary tree.
* `6-binary_tree_preorder.c`: This file contains the implementation of the `binary_tree_preorder()` function, which traverses a binary tree in preorder.
* `7-binary_tree_inorder.c`: This file contains the implementation of the `binary_tree_inorder()` function, which traverses a binary tree in inorder.
* `8-binary_tree_postorder.c`: This file contains the implementation of the `binary_tree_postorder()` function, which traverses a binary tree in postorder.
* `9-binary_tree_height.c`: