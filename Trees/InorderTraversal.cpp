//
// Created by Justin Chiu on 9/12/17.
//

#include <iostream>
using namespace std;

/* you only have to complete the function given below.
Node is defined as

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) {
    if (root != nullptr){
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}

