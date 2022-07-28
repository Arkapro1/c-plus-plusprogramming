#include<bits/stdc++.h>
using namespace std;
// nodes
class stackNode{
public:
int data;
stackNode* next;
stackNode(int data){
    this->data=data;
    this->next=NULL;
}
};

void insertAtHead(stackNode* &head,int data){
stackNode* temp=new stackNode(data);
temp->next=head;
head=temp;

}
// main stack fegure
class stackk{
public:
int size;
int top;
 stackNode* head;
stackk(int size){
    this->size=size;
    top=-1;
}
//push
void push(int data){
    if (isEmpty()){
         head=new stackNode(data);
         top++;
    }
   else if(isFull()){
        cout<<"ouu the stack is full 🙇‍♀️"<<endl;
    }
    else{
        top++;
        insertAtHead(head,data);
    }
}
// pop



//toppick
bool isEmpty (){
    return(top==-1);
}
bool isFull(){
    return (top==size-1);
}
};
int main(){

}