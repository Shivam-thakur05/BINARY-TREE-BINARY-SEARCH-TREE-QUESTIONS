struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root == NULL){
           return NULL;
       }
       if(root->data == n1 || root->data == n2){
           return root;
       }
       //recursive call for left and right part
       Node* leftPart = lca(root->left,n1,n2);
       Node* rightPart = lca(root->right,n1,n2);
       
       if(leftPart != NULL && rightPart != NULL){
            //yhi ans hai
            return root;
       }   
       if(leftPart == NULL && rightPart != NULL){
           return rightPart;
       }
       if(leftPart != NULL && rightPart == NULL){
           return leftPart;
       }
       else{
           return NULL;
       }
    }
};
