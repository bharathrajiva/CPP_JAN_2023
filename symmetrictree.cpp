#include<iostream>
#include<fstream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution{
    public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return isSymmetric(root->left, root->right);
    }
    bool isSymmetric(TreeNode* left, TreeNode* right){
        if(left == NULL && right == NULL) return true;
        if(left == NULL || right == NULL) return false;
        if(left->val != right->val) return false;
        return isSymmetric(left->left, right->right) && isSymmetric(left->right, right->left);
    }
};
int main(){
    ifstream in("input.txt");
    string line;
    while(getline(in,line)){
        cout<<line<<endl;
    }
    return 0;
    
}