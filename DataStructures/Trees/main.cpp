#include <iostream>
#include "./inc/PrintLeafNodesOfBinaryTree.h"

using namespace std;

int main()
{
  Node* root = nullptr;

  // BinaryTree bt;
  PrintLeafNodesOFBinaryTree bt;

  // Sample data to be inserted.
  root = bt.insertNode(root, 3);
  root = bt.insertNode(root, 5);
  root = bt.insertNode(root, 1);
  root = bt.insertNode(root, 6);
  root = bt.insertNode(root, 2);
  root = bt.insertNode(root, 9);
  root = bt.insertNode(root, 8);

  bt.findLeafNode(root);
  vector<int> result = bt.getLeafNodes();

  for(const auto& ele : result)
  {
    std::cout << ele << " ";
  }

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