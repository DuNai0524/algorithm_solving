#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
	char val;
	TreeNode *left,*right;
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
};

TreeNode* createTree(string preOrder,int preOrderStart,int preOrderEnd,string inorder,int inorderStart,int inorderEnd){
	if(preOrderStart == preOrderEnd) return nullptr;
	int rootVal = preOrder[preOrderStart];
	TreeNode* root = new TreeNode(rootVal);

	if(preOrderEnd - preOrderStart == 1)return root;


	int inorderSplitIndex;
	for(inorderSplitIndex = inorderStart;inorderStart < inorderEnd;inorderSplitIndex ++){
		if(inorder[inorderSplitIndex] == rootVal)break;
	}
	int leftInorderStart = inorderStart;
	int leftInorderEnd = inorderSplitIndex;
	int rightInorderStart = inorderSplitIndex + 1;
	int rightInorderEnd = inorderEnd;

	preOrderStart++;
	int leftPreorderStart = preOrderStart;
	int leftPreorderEnd = preOrderStart + inorderSplitIndex - inorderStart;
	int rightPreorderStart = preOrderStart + inorderSplitIndex - inorderStart;
	int rightPreorderEnd = preOrderEnd;

	root->left = createTree(preOrder,leftPreorderStart,leftPreorderEnd,inorder,leftInorderStart,leftInorderEnd);
	root->right = createTree(preOrder,rightPreorderStart,rightPreorderEnd,inorder,rightInorderStart,rightInorderEnd);

	return root;
}

void postOrder(TreeNode *root){
	if(root==nullptr)return;
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->val;
}


int main(){
	string str1,str2;
	while(cin>>str1>>str2){
		TreeNode* root = createTree(str1,0,str1.size(),str2,0,str2.size());
		postOrder(root);
		cout<<endl;
	}
	return 0;
}
