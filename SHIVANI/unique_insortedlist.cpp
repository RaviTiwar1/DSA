Node * removeDuplicates(Node *head)//Approach no-1
{
    // Write your code here
    if(head==NULL){
        return NULL;
    }
    Node *curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL)&&(curr->data==curr->next->data)){
            Node* tobedelete=curr->next;
            Node* next_next=curr->next->next;
            delete(tobedelete);
            curr->next=next_next;
        }else{
            curr=curr->next;
        }
    }
    return head;
}

Node *removeDuplicates(Node *head) //Approach no-1
{
    // Write your code here
    Node* temp=head; 
    Node* comparing_pointer;
    /* Pick elements one by one */
    while (temp != NULL && temp->next != NULL) {
        comparing_pointer = temp;

        /* Compare the picked element with rest
           of the elements */
        while (comparing_pointer->next != NULL) {
            /* If duplicate then delete it */
            if (temp->data == comparing_pointer->next->data) {
                /* sequence of steps is important here */
                Node* nodetodelete = comparing_pointer->next;
                comparing_pointer->next = comparing_pointer->next->next;
                delete (nodetodelete);
            } else {
                comparing_pointer = comparing_pointer->next;
            }
        }
        temp = temp->next;
    }
    return head;
}


Node *removeDuplicates(Node *head)//Approach no-2
{
    unordered_set<int> seen;

    /* Pick elements one by one */
    Node* curr = head;
    Node* prev = NULL;
    while (curr != NULL) {
        // If current value is seen before
        if (seen.find(curr->data) != seen.end()) {
            prev->next = curr->next;
            delete (curr);
        }
        else {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
    return head;
}