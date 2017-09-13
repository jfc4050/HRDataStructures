//
// Created by Justin Chiu on 9/12/17.
//

/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as */

//struct Node {
//     int data;
//     struct Node *next;
//  }

Node* InsertNth(Node *head, int data, int position) {
    // Complete this method only
    // Do not write main function.

    // generate new node
    Node* newNode = new Node;
    newNode->data = data;

    if (position == 0) {
        newNode->next = head;
        return newNode;
    }
    Node* p = head;
    int curPos = 0;
    while (++curPos < position) {
        p = p->next;
    }
    newNode->next = p->next;
    p->next = newNode;

    return head;
}

