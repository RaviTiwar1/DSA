#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev; 
    Node* next;

    //constructor
    Node(int d) {
        this-> data = d;  
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this -> data;
        if(next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data "<< val << endl;
    }
};

//traversing a linked list
void print(Node* head) { //passing the linked list in the parameter
    Node* temp  = head ;  //temp pointing to the head all the changes will be made in temp

    while(temp != NULL) {  //jab tak temp null nahi hojaata
        cout << temp -> data << " ";
        temp  = temp -> next;
    }
    cout << endl;
}

//gives length of Linked List
int getLength(Node* head) {
    int len = 0;
    Node* temp  = head ;

    while(temp != NULL) {
        len++;
        temp  = temp -> next;
    }

    return len;
}

//inserting at beginning
void insertAtHead(Node* &tail, Node* &head, int d) {

    //empty list
    if(head == NULL) {   //agar linked list mein kuch bhi node nahi h tho pehle node create karo, usko head banao aur wo tail bhi hooga
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);  //agar pehle se node h tho uske aage wale mein daalo mtlb jo naya node bana h uske link mein header node daalo 
        temp -> next = head;       //aur temp ko head kardo 
        head -> prev = temp;
        head = temp;
    }

}


void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);    //similar as aage wala
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;          //naya node jo bnega wo aage wale node ke baad rahega phir temp ko tail kardo
        temp -> prev = tail;
        tail = temp;
    }

}

void insertAtPosition(Node* & tail, Node* &head, int position, int d) {
    
    //insert at Start
    if(position == 1) {
        insertAtHead(tail,head, d);
        return;
    }

    Node* temp  = head;  //temp  jo head ko represent karega
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert ->next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;           //head ko temp se represnt karrha
        temp -> next -> prev = NULL; 
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head; //pehla node as current represent karrha
        Node* prev = NULL;  //prev koi nahi h

        int cnt = 1;//pehla node count karrha
        while(cnt < position) {  //count jab tak position se equal nahi hojaata
            prev = curr;  //current ko previous karke
            curr = curr -> next;  //cuurent ko next pe move kardo
            cnt++;
        }

        curr -> prev = NULL; //current node k previous node k saath connection todo
        prev -> next = curr -> next;   
        curr -> next = NULL;

        delete curr;

    }
}



int main() {


    Node* head = NULL;
    Node* tail = NULL;

    print(head);
    //cout << getLength(head) << endl;

    insertAtHead(tail,head, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtHead(tail,head, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtTail(tail,head, 25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode(7, head);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;





    return 0;
}

