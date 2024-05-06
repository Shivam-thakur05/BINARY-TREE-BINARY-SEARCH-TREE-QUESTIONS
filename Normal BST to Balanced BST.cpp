class Solution{
    public:
    void inorder(Node* root,vector<int>&inorderVal){
        if(root == NULL) return;
          
        if(root->left) inorder(root->left,inorderVal);
        inorderVal.push_back(root->data);
        if(root->right) inorder(root->right,inorderVal);
    }
    
    Node* inorderToBST(int s,int e,vector<int>&inorderVal){
        if(s>e){
            return nullptr;
        }
        int mid = (s+e)/2;
        Node*root= new Node(inorderVal[mid]);
        root->left = inorderToBST(s,mid-1,inorderVal);
        root->right = inorderToBST(mid+1,e,inorderVal);
        
        return root;
    }
    // Your are required to complete this function
    // function should return root of the modified BST
    Node* buildBalancedTree(Node* root) {
    	vector<int>inorderVal;
    	inorder(root,inorderVal);
    	
    	return inorderToBST(0,inorderVal.size()-1,inorderVal);
    }
};
