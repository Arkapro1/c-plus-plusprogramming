#include<bits/stdc++.h>
using namespace std;
class stacks{
public:
int capacity;
int top=-1;
stacks (int size){
    int arr[size];
    capacity=size;
    cout<<"done"<<endl;
}
void push(int data){
    if(isFull){ cout<<"stack is full 🙇‍♀️"<<endl; return;}
    top++;
    arr[top]=data;
}
void pop(){
    if(isEmpty){ cout<<"stack is empty 🙇‍♀️"<<endl; return;}
    arr[top]=NULL;
    top--;
}
int top(){
     if(isEmpty){ cout<<"stack is empty 🙇‍♀️"<<endl; return;}
     return arr[top];
}
bool isFull(){
if(top==capacity-1) return 1;
return 0;
}
bool isEmpty(){
if(top==-1) return 1;
return 0;
}
};


int main(){
stacks s(5);
if(s.isEmpty)cout<<"fine"<<endl;
}
