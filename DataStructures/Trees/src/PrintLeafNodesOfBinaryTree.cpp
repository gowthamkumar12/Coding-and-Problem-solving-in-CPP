#include "../inc/PrintLeafNodesOfBinaryTree.h"

void PrintLeafNodesOFBinaryTree::findLeafNode(Node* root)
{
  if(root != nullptr)
  {
    if(root->leftNode == nullptr && root->rightNode == nullptr)
    {
      result.push_back(root->value);
    }
    else
    {
      findLeafNode(root->leftNode);
      findLeafNode(root->rightNode);
    }
  }
}