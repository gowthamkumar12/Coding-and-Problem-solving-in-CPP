/**
 * @brief BinaryTree implementation
 * @ref https://leetcode.com/discuss/study-guide/1820334/Become-Master-in-Tree
*/

#include "../inc/BinaryTree.h"

Node* BinaryTree::insertNode(Node* root, int value)
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

void BinaryTree::inorderTraversal(Node* root)
{
  if (root != nullptr)
  {
    inorderTraversal(root->leftNode);
    std::cout << root->value << " ";
    inorderTraversal(root->rightNode);
  }
}