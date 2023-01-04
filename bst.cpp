#include <iostream>
using namespace std;
 class Node{
  public: 
  int data;
  Node* left;
  Node* right;

  Node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
  }
 };
  Node* insertintoBST(Node* root, int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d>root -> data){
        root->right= insertintoBST(root->right, d);

    }
    else{
        root->left= insertintoBST(root->left, d);

    }
    return root;

  }
    void takeInput(Node* &root){
        int data;
        cin>>data;

        while(data!=-1){
            insertintoBST(root, data);
            cin>>data;
        }
    }

 

 int main(){

    Node* root=NULL;
    cout<<"Enter data to create BST "<<endl;
    takeInput(root);
    
    
    return 0;
 }