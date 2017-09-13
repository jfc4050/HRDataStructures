//
// Created by Justin Chiu on 9/12/17.
//

#include <iostream>
using namespace std;

/* you only have to complete the function given below.
Node is defined as  */

//struct node
//{
//    int data;
//    node* left;
//    node* right;
//};

void postOrder(node *root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
    }
}

