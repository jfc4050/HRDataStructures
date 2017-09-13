//
// Created by Justin Chiu on 9/12/17.
//

/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as: */

//struct Node {
//    int data;
//    struct Node *next;
//}

Node* Insert(Node* head, int data) {

    Node* last = new Node;
    last->data = data;
    last->next = nullptr;

    if (head == NULL) {
        return last;
    }
    Node* i = head;
    while (i->next != NULL) {
        i = i->next;
    }
    i->next = last;

    return head;
}

