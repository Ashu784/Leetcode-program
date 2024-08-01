#include<bits/stdc++.h>
bool detectCycle(Node *head)
{
	unordered_set<Node*>ob;
    Node *temp = head;
    while(temp!=NULL) {
        if(ob.find(temp) != ob.end())
            return true;
        else{
            ob.insert(temp);
        }
        temp = temp->next;
    }
    return false;

}
