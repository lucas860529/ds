#include "tree.cpp"
#include <iostream>

using namespace std;
Tree init();

int main(int argc, char const *argv[])
{
    Tree t = init();
    t.inorder();
    t.preorder();
    t.postorder();
    return 0;
}

Tree init() {
    Tree t;
    TreeNode *n1 = new TreeNode(1);
    TreeNode *n2 = new TreeNode(2);
    TreeNode *n3 = new TreeNode(3);
    TreeNode *n4 = new TreeNode(4);
    TreeNode *n5 = new TreeNode(5);
    TreeNode *n6 = new TreeNode(6);
    TreeNode *n7 = new TreeNode(7);

    t.root = n1;
    n1->left = n2;
    n1->right =n3;
    n2->left = n4;
    n2->right =n5;    
    n3->left = n6;
    n3->right =n7;
    return t;

}


