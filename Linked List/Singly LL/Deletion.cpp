#include <bits/stdc++.h>
using namespace std;

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

    ~Node(){
        int value = this -> data;
        //memory free

        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with vlaue "<< value <<endl;

    }



};

void deleteNode(Node *&head, int position)
{

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *prv = NULL;
        Node *curr = head;

        int cnt = 1;
        while (cnt < position)
        {
            prv = curr;
            curr = curr->next;
            cnt++;
        }
        prv->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

void inserAtHead(Node *&head, int d)
{ // insert at Head
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = tail->next;
}

void printLL(Node *&head)
{ // print the LL
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{

    Node *node1 = new Node(15); // when object  will be created then automatically Node constructor
    // cout<<node1->data<<endl;            //will be called and data and next value will be assigned
    // cout<<node1->next<<endl;

    Node *head = node1;
    Node *tail = node1;
    // printLL(head);

    inserAtHead(head, 5);
    inserAtHead(head, 0);
    // printLL(head);

    insertAtTail(tail, 20);

    deleteNode(head, 2);
    printLL(head);

    return 0;
}