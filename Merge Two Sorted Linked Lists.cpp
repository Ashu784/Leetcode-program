#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    Node<int> *head=NULL;
    if (first->data < second->data) {
      head = new Node<int>(first->data);
      first = first->next;
    } else {
      head = new Node<int>(second->data);
      second = second->next;
    }
    Node<int> *temp = head;
    while(first != NULL || second != NULL){
        if(first == NULL){
            temp->next = new Node<int>(second->data);
            second = second->next;
        } 
        else if(second == NULL) {
            temp->next = new Node<int>(first->data);
            first = first->next;
        } else if (first->data < second->data) {
            temp->next = new Node<int>(first->data);
            first = first->next;
        }
        else {
            temp->next = new Node<int>(second->data);
            second = second->next;
        }
        temp = temp->next;
    }
    return head;

}
