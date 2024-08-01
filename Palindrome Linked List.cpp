bool isPalindrome(LinkedListNode<int> *head) {
     if(head == NULL || head->next == NULL){
        return true;
    }
    vector<int>ob;
    LinkedListNode<int>* temp = head;
    while (temp != NULL) {
        ob.push_back(temp->data);
        temp = temp->next;
    }
    int n = ob.size();
    for (int i = 0; i < n / 2; ++i) {
        if (ob[i] != ob[n-1-i]) {
            return false;
        }
    }
    
    return true;
}
