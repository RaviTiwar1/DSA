#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void inserAtHead(Node * &head, int d){             // insert at Head
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}


void insertAtTail(Node* &tail, int d){              // insert at tail
    Node* temp = new Node(d);
    tail -> next = temp;
    temp->prev = tail;
    tail = tail->next;

}


void printDL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



int main()
{

    Node n1 = new Node(10);
    Node* head =n1;
    Node* tail=n1;



 return 0;
}