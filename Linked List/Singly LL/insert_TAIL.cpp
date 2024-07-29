#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void inserAtHead(Node * &head, int d){             // insert at Head
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){              // insert at Tail
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;

}





void printLL(Node* &head){                                      // print the LL
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{

    Node *node1 = new Node(15);        //when object  will be created then automatically Node constructor  
    cout<<node1->data<<endl;            //will be called and data and next value will be assigned
    cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
     printLL(head);

     inserAtHead(head,0);
     insertAtTail(tail,5);
     insertAtTail(tail,25);
    printLL(head);
    

 return 0;
}