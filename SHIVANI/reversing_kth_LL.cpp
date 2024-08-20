/****************************************************************
    Following is the Linked List node structure

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


Node* kReverse(Node* head, int k) {
    //base call
    if(head == NULL) {  //agar head mein kuch na hooga tho return NULL krna
        return NULL;
    }
    
    //step1: reverse first k nodes, 3 pointer bnayenge
    Node* next = NULL;// current ko iterate krane ke lye ye chahye kyunki real current mein changes nahi karskte
    Node* curr = head;
    Node* prev = NULL;
    int count= 0;
    
    while( curr != NULL && count < k ) { //jab tak curr null nahi hua, aur count< k h tabtak
        next = curr -> next;//curent ko iterate krate raho 
        curr -> next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2: Recursion dekhlega aage ka 
    if(next != NULL) {  //next wala element agar NULL naa ho tho
        head -> next = kReverse(next,k);
    }
    
    //step3: return head of reversed list
    return prev;
}

//Time complexity= O(n/k)-->where n is the total element k kitne time horha
//Space complexity=O(n)