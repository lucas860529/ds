
class Tree;

class TreeNode{
    public:
        TreeNode *left;
        int data;
        TreeNode *right;
        TreeNode(int d){
            this->left = 0;
            this->right  = 0;
            this->data = d;
        };
    friend class Tree;
};

class Tree {
    public:
        TreeNode *root;
        Tree():root(0){};
        void postorder();
        void inorder();
        void preorder();
};