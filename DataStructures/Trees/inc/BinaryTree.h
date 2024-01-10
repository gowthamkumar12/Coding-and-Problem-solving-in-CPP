/**
 * @brief BinaryTree implementation
 * @ref https://leetcode.com/discuss/study-guide/1820334/Become-Master-in-Tree
*/

#include <iostream>

/** Node to store the data, left node address and right node address
 *  -----------------------------------
 *  |          |          |           |
 *  | LeftNode |   data   | RightNode |
 *  |          |          |           |
 *  -----------------------------------
*/
struct Node
{
  int value;
  Node* leftNode;
  Node* rightNode;

  Node(int value)
  : value(value),
    leftNode(nullptr),
    rightNode(nullptr)
  {}
};

class BinaryTree
{
  public:
    // Function to insert a node according to the given value.
    Node* insertNode(Node* root, int value);

    // Prints the nodes in inorder way
    void inorderTraversal(Node* root);
};