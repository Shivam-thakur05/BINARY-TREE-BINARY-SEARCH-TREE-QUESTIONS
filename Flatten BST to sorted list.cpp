class Solution
{
public:
    void inorder(Node* root,vector<int>&inorderVal){
        if(root == NULL) return;
          
        if(root->left) inorder(root->left,inorderVal);
        inorderVal.push_back(root->data);
        if(root->right) inorder(root->right,inorderVal);
    }
    
    Node *flattenBST(Node *root) {
        vector<int>inorderVal;
        inorder(root,inorderVal);
        int n = inorderVal.size();
        
        Node* newnode = new Node(inorderVal[0]);
        Node* curr = newnode;
        
        int i = 1;
        while(i < n){
            Node* temp = new Node(inorderVal[i]);
            curr->left = NULL;
            curr->right = temp;
            //update the current node
            curr = temp;
            i++;
        }
        curr->left = NULL;
        curr->right = NULL;
        
        return newnode;
    }
};
