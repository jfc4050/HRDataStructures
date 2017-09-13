//
// Created by Justin Chiu on 9/12/17.
//

/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as: */

//  struct Node
//  {
//     int data;
//     struct Node *next;
//  }

/*
return back the pointer to the head of the linked list in the below method.
*/


Node* Insert(Node *head, int data) {
    // Complete this method
    Node* first = new Node;
    first->data = data;

    if (head == NULL) {
        first->next = NULL;
        return first;
    }
    else {
        first->next = head;
        Node* newHead = first;
        return newHead;
    }
}

