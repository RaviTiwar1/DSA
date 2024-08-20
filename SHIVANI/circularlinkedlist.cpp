#include<iostream>
#include<map>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    //constrcutor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void insertNode(Node* &tail, int element, int d) {   //head nahi chahye tail se hojayega, element to check kis jagah pe data daalna h
    

    //empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;  //newnode create karke uske link ko ussise point karadiya to represent circular linked list
    }
    else{
        
        //non-empty list
        //assuming that the element is present in the list

        Node* curr = tail; //current node pehle wala tail node ko signify karrha

        while(curr->data != element) {  //jab tak current data equal to element naa ho tab tak current node k traverse karo
            curr = curr -> next;       
        }
        
        //element found -> curr is representing element wala node
        Node* temp = new Node(d);      //ek node bnaooo
        temp -> next = curr -> next;   //uss node ke address mein uske baad wala node dedo
        curr -> next = temp;           //aur current ke next mein ki new node daaldo

    }

}    

void print(Node* tail) {

    Node* temp = tail;

    //empty list
    if(tail == NULL) {
        cout << "List is Empty "<< endl;
        return ;
    }
    do {
        cout << tail -> data << " ";
        tail = tail -> next;
    } while(tail != temp);

    cout << endl;
} 

void deleteNode(Nod e* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;

    }

}

bool isCircularList(Node* head) {
    //time complexity:o(n) and space complexity o(1)
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}

bool detectLoop(Node* head) {

    if(head == NULL)    //agar koi node h hi nahi tho false return karega
        return false;

    map<Node*, bool> visited;  //map(node, bool btane ke lye true ya false return krne ke lye) bolega ki ye node visited hai ki nahi here time complexity and space complexity is O(n)

    Node* temp = head;//ek pointer jo ki head ko point karrha

    while(temp !=NULL) { //jab tak temp!=pahunch nahi jaata tab tak

        //cycle is present
        if(visited[temp] == true) {  //agar temp ko visit karchuke h tho true likho
            return true;
        }

        visited[temp] = true; //wrna usko visited bnado
        temp = temp -> next; //aur traverse krte raho

    }
    return false; //nahi tho nahi  visited h

}
Node* floydDetectLoop(Node* head){
    
    //1st condition
    if(head==NULL){
        return false;
    }
    Node* fast=head;
    Node* slow=head;
    while(slow!=NUll && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){//2nd conddition
            return 1;
        }
    }
    return false;
}   
//Time complexity: o(n) and space complexiity: o(1)
int main() {

    Node* tail = NULL;

   // insertNode(tail, 5, 3);
    //print(tail);

  //  insertNode(tail, 3, 5);
   // print(tail);

/*
    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    
    insertNode(tail, 9, 10);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);
   

    deleteNode(tail, 5);
    print(tail);
     */

    if(isCircularList(tail)) {
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    return 0;
}