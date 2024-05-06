class Solution{
  public:
  void inorder(Node* root,vector<int>&inorderVal){
      if(root == NULL) return;
      
      if(root->left) inorder(root->left,inorderVal);
      inorderVal.push_back(root->data);
      if(root->right) inorder(root->right,inorderVal);
      
  }
    // root : the root Node of the given BST
    // target : the target sum
    int isPairPresent(struct Node *root, int target) {
        vector<int>inorderVal;
        inorder(root,inorderVal);
        //two pointer approach
        int i = 0;
        int j = inorderVal.size()-1;
        
        while(i<j){
            if(inorderVal[i]+inorderVal[j] == target){
                return 1;
            }
            else if(inorderVal[i]+inorderVal[j] > target){
                j--;
            }
            else{
                i++;
            }
        }
        return 0;
    }
};
