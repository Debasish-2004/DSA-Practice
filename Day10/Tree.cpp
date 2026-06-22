#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root , int val){

    if(root == NULL){
        return new Node(val);
    }

    if(val < root->data){
        root->left = insert(root->left,val);
    }
    else{
        root->right = insert(root->right,val);
    }

    return root;
}

void preorder(Node* root){

    if(root == NULL)return;

    cout << root->data << " ";

    preorder(root->left);
    preorder(root->right);
}

int main(){

    Node* root = NULL;

    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){

        int x;
        cin >> x;

        root = insert(root,x);
    }

    preorder(root);

    return 0;
}