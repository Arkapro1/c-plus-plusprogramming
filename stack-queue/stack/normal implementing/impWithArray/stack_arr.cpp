#include<bits/stdc++.h>
using namespace std;
class stacks{
public:
int size;
int top;
int* arr;
stacks (int size){
    arr=new int[size];
    this->size=size;
    top=-1;
    cout<<"done"<<endl;
}
void push(int data){
    if(isFull()){ cout<<"stack is full 🙇‍♀️"<<endl; return;}
    top++;
    arr[top]=data;
}
void pop(){
    if(isEmpty()){ cout<<"stack is empty 🙇‍♀️"<<endl; return;}
    // arr[top]=NULL;
    top--;
}
int topPeek(){
     if(isEmpty()){ cout<<"stack is empty 🙇‍♀️"<<endl; return -1;}
     return arr[top];
}
bool isFull(){
if(top==size-1) return true;
return false;
}
bool isEmpty(){
if(top==-1) return true;
return false;
}
};


int main(){
stacks s(5);
if(s.isEmpty())cout<<"fine the stack is empty at the inertial stage 🐱‍🏍"<<endl;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);
cout<<"so u r not able to oush any more "<<endl;
while(!s.isEmpty()){
cout<<"the s.topPeek is: "<<s.topPeek()<<endl;
s.pop();
}
cout<<"after popping all"<<endl;
if(s.isEmpty())cout<<"stack is 🀄 empty"<<endl;
}
