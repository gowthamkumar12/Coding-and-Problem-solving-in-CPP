#include <iostream>
#include <vector>
#include "../inc/BinaryTree.h"

using namespace std;

class PrintLeafNodesOFBinaryTree : public BinaryTree
{
  public:
    void findLeafNode(Node* root);
    vector<int> getLeafNodes()
    {
      return result;
    }

  private:
    vector<int> result;
};