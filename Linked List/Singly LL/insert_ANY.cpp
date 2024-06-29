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

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;

}



void insertAtPosition(Node* &head,Node* &tail, int position, int d){              // insert at any position

    if(position == 1){
        inserAtHead(head,d);                                           //to insert at position 1
        return;
    }

    Node *temp = head;
    int cnt =1;
    while(cnt<position -1){
        temp = temp->next;
        cnt++;
    }
    
    if(temp->next==NULL){               //to update the tail if the insertion is on last position
        insertAtTail(tail,d);
        return ;
    }


    //creating a node for d
    Node * nodeToInsert = new Node(d);
    nodeToInsert->next = temp ->next;
    temp->next = nodeToInsert;

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
    //cout<<node1->data<<endl;            //will be called and data and next value will be assigned
    //cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;
    // printLL(head);

     inserAtHead(head,5);
     inserAtHead(head,0);
    // printLL(head);
    insertAtPosition(head,tail,3,10);
    printLL(head);

    cout<<"head->"<<head->data<<endl;
    cout<<"tail->"<<tail->data<<endl;


    cout<<endl<<"-----Position update-------"<<endl<<endl;
    insertAtPosition(head,tail,5,20);
    printLL(head);

    cout<<"head->"<<head->data<<endl;
    cout<<"tail->"<<tail->data<<endl;

 return 0;
}