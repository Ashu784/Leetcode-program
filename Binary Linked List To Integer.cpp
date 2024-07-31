/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/
#include<bits/stdc++.h>
int binaryToInteger(int n, Node *head) {
    Node *temp = head;
    int sum = 0;
    for(auto i=n-1; i>=0; i--){
        sum += (temp->data * pow(2,i));
        temp = temp->next;
    }
    return sum;
}
