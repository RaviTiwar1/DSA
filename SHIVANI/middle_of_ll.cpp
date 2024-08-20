//1st approach
int getLength(Node* head){ //this will find the length of the entire linked list
    Node* temp=head; //creating a temp node and pointing towards header
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len; //returning length of the linked list
}

Node *findMiddle(Node *head) {
    // Write your code here
    Node* temp=head;
    int len=getLength(head); //finding the length of the linked list
    int ans=(len/2);  //finding the middle of the linked list
    int cnt=0;        //count ko increment karo jab tak middle tak na pahunche jab miljaaye temp ko return kardo
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}


//2nd approach
Node* getmiddlenode(Node* head){   //head pass karo
    //if there is no node or one node
    if(head==NULL || head->next=NULL ){  //jab header khaali ho, ya heaer mein ek node ho, tab jo header h ussiko return kardo
        return head;
    }
    //if there is two node
    if(head->next->next=NULL){   //jab linked list mein 2 node h tab 2nd node ko as middle output dega 
        return head->next;
    }
    Node* slow=head;         //do pointer bnaya jo slow pointer h wo ek ek increment karega
    Node* fast=head->next;   //aur ek fast pointer jo do do increment karega
    while(fast!=NULL){       //jab tak fastt null tak na pahunche
        //pehle ek fast iterate hua check kiya ki NULL nahi
        fast=fast->next;     //ek aage badhao
        if(fast!=NULL){      //agar null nahi h tho usse phirse 
            //tho dusre point mein fast badh gya 
            fast=fast->next;
        }
        slow=slow->next;//jab tak fast null nahi hua, tab tak slow ko ek ek increment karte rahozzzzz
    }
    return slow;
}