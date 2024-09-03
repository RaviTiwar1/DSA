#include <iostream>
#include <stack>
using namespace std;

//stack can be implemented through arrays and linkedlist 

int main(){
    stack <int> s; //creating a stack

    s.push(2);  //inserting a element
    s.push(3);
    s.push(4);

    s.pop();    //deleting the element from stack--sabse jyada 

    cout<<"Printing top element"<<s.top()<<endl; //top element of the stack

    if(s.empty()){
        cout<<"Stack is empty"<<endl;  //whether stack is empty or not
    }else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of the stack:"<<s.size()<<endl; //gives out the size of the stock
    return 0;
}