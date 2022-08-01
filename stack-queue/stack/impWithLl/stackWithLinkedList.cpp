#include<bits/stdc++.h>
using namespace std;

//Making the node 👲
typedef struct Node{
int data;
Node* next;
}Node;

//making the stack::
class Stack{
    public:
Node* head=new Node;
int size;
Stack(){
    size=0;
    head=NULL;
}
void push(int data){
Node* temp=new Node;
temp->data=data;
temp->next=head;
head=temp;
size++;
}
bool isEmpty(){
    return(head==NULL);
}
void pop(){
    if (isEmpty())cout<<"stack under-flow🙌"<<endl;
    else head=head->next;
    size--;
}
int peek(){
return head->data;
}
};
int main (){
Stack s;
cout<<s.size<<endl;
if (s.isEmpty()) cout<<"stack under flow"<<endl;
s.push(9);
cout<<s.peek()<<endl;
cout<<s.size<<endl;
if (s.isEmpty()) cout<<"stack under flow"<<endl;
else {cout<<"NO the stack is not empty"<<endl;}
}