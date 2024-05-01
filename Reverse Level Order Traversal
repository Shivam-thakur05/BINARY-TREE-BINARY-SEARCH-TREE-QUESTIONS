#include<iostream>
#include<bits/stdc++.h>
using namespace std;\

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void reverseLevelOrdertraversal(Node* root){
    queue<Node*>q;
    //reverse the traversal using stack
    stack<Node*>s;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        s.push(q.front());
        q.pop();
    //first push the right side data then left side
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
    }
    
    //reverse print
    while(!s.empty()){
        cout<<s.top()->data<<" ";
        s.pop();
    }
}

int main()
{
    Node* root = new Node(12);
    root->left = new Node(19);
    root->right = new Node(43);
    root->left->left = new Node(10);
    root->left->right = new Node(33);
    root->right->left = new Node(23);
    root->right->right = new Node(15);
    root->left->left->left = new Node(14);
    root->left->right->right = new Node(34);
    reverseLevelOrdertraversal(root);
    return 0;
} 
