#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_length(Node* head){

    if(node==NULL){
        return NULL;
    }
    Node* temp=head->link;
    int len=1;
    while(temp!=NULL && temp!=head){
        len=len+1;
        temp=temp->link;
    }
    return len;
}

void dividing_into(Node* head){

    //base condition
    if(head==NULL){
        return NULL;
    }
    if(head->link==NULL){
        return NULL;
    }

    int len=get_length(head);
    int ans=len/2;
    int count=0;
    Node* temp=head;
    while(count!=ans){
        temp=temp->link;
    }
    Node* forward=temp->link;
    temp->link=head;
    dividing_into(forward);

}
