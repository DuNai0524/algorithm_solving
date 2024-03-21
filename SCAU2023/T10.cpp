#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool flag;

struct TreeNode {
    char val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(char x):val(x),left(nullptr),right(nullptr){}
};

TreeNode* verifyTree(string preorder,int preorderBegin,int preorderEnd,string inorder,int inorderBegin,int inorderEnd){
    if(preorderBegin == preorderEnd) return NULL;

    // 前序第一个就是根节点
    char rootValue = preorder[preorderBegin];
    TreeNode* root = new TreeNode(rootValue);

    // 如果只有根节点了
    if( preorderEnd - preorderBegin == 1) return root;

    // 开始分割
    int deleteIndex;
    bool findFlag = false;
    for(deleteIndex = inorderBegin;deleteIndex < inorderEnd;deleteIndex++){
        if(inorder[deleteIndex] == rootValue){
            findFlag = true;
            break;
        }
    }

    if(!findFlag){
        flag = false;
        return NULL;
    }

    //
    preorderBegin++;// 去掉根节点
    // 先分中序
    int leftInorderBegin = inorderBegin;
    int leftInorderEnd = deleteIndex;
    int rightInorderBegin = deleteIndex + 1;
    int rightInorderEnd = inorderEnd;

    int leftPreorderBegin = preorderBegin;
    int leftPreorderEnd = preorderBegin + deleteIndex - inorderBegin;
    int rightPreorderBegin = preorderBegin + deleteIndex - inorderBegin;
    int rightPreorderEnd =  preorderEnd;

    root->left = verifyTree(preorder,leftPreorderBegin,leftPreorderEnd,inorder,leftInorderBegin,leftInorderEnd);
    root->right = verifyTree(preorder,rightPreorderBegin,rightPreorderEnd,inorder,rightInorderBegin,rightInorderEnd);

    return root;
}

int main() {
    int n;
    cin>>n;
    while(n--){
        string preorder;
        string inorder;
        flag = true;
        cin>>preorder>>inorder;
        TreeNode* root = verifyTree(preorder,0,preorder.size(),inorder,0,inorder.size());
        if(flag)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}