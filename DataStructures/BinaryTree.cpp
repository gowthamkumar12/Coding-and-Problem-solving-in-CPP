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
    Node* insertNode(Node* root, int value)
    {
      Node* currentNode  = root;

      if(root == nullptr) // If the root node is empty
      {
        root = new Node(value);
      }
      else
      {
        if(value >= root->value) // If the given value is greater than the value in the root node, then insert
        {                        // at left.
          root->leftNode = insertNode(root->leftNode, value);
        }
        else // If the given value is lesser than the value in the root node, then insert node at right.
        {
          root->rightNode = insertNode(root->rightNode, value);
        }
      }
      return root;
    }

    // Prints the nodes in inorder way
    void inorderTraversal(Node* root)
    {
      if (root != nullptr)
      {
        inorderTraversal(root->leftNode);
        std::cout << root->value << " ";
        inorderTraversal(root->rightNode);
      }
    }
};


int main()
{
  Node* root = nullptr;

  BinaryTree bt;

  // Sample data to be inserted.
  root = bt.insertNode(root, 3);
  root = bt.insertNode(root, 5);
  root = bt.insertNode(root, 1);
  root = bt.insertNode(root, 6);
  root = bt.insertNode(root, 2);
  root = bt.insertNode(root, 9);
  root = bt.insertNode(root, 8);

  bt.inorderTraversal(root);

  /**
   * The output of the above data will be like
   *
   *              3
   *             / \
   *            5   1
   *           /   /
   *          6   2
   *         /
   *        9
   *        \
   *         8
  */

  return 0;
}