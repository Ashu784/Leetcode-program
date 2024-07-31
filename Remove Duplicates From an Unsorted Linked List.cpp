#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    unordered_map<int, bool> seen;
    while (curr != NULL)
    {
        int val = curr->data;

        if (seen[val])
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            seen[val] = true;
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}
