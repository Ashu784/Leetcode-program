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

Node *deleteNode(Node *head, int pos)
{
    if(head == NULL) {
		return head;
	}
	if(pos == 0) {
		Node *tmp = head;
		head = head->next;
		delete tmp;
	}
	else {
		Node *tmp = deleteNode(head->next, pos - 1);
		head->next = tmp;
	}
	return head;
}
