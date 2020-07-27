#include "tree.h"
#include <iostream>

using namespace std;
void _inorder(TreeNode* n);
void _preorder(TreeNode* n);
void _postorder(TreeNode* n);

void Tree::inorder() {
    TreeNode *n = root;
    if (root == 0) {
        cout << "tree is empty";
        return;
    }
    _inorder(n);
    cout << endl;
}

void _inorder(TreeNode* n) {
    if (n->left != 0) _inorder(n->left);
    cout << n->data << "->";
    if (n->right != 0) _inorder(n->right);
}

void Tree::preorder() {
    TreeNode *n = root;
    if (root == 0) {
        cout << "tree is empty";
        return;
    }
    _preorder(n);
    cout << endl;
}

void _preorder(TreeNode* n) {
    cout << n->data << "->";
    if (n->left != 0) _preorder(n->left);
    if (n->right != 0) _preorder(n->right);
}

void Tree::postorder() {
    TreeNode *n = root;
    if (root == 0) {
        cout << "tree is empty";
        return;
    }
    _postorder(n);
    cout << endl;
}

void _postorder(TreeNode* n) {
    if (n->left != 0) _postorder(n->left);
    if (n->right != 0) _postorder(n->right);
    cout << n->data << "->";
}