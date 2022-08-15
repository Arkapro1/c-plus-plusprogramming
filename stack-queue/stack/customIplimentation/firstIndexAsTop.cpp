#include<bits/stdc++.h>
using namespace std;
class Stackk{
public:
int* arr;
int front;
int size;
Stackk(int size){
    arr=new int[size];
    front=-1;
}
bool isFull(){
    return (front==size-1);
}
bool isempty(){
    return (front==-1);
}
void push_in_0(int data){
    if(isFull()){
        cout<<"the stack is not empty"<<endl;
        return ;
    }
    front++;
    for(int i=front;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=data;

}
void pop(){
    if(isempty()){
        cout<<"the stack is empty"<<endl;
        return;
    }
    for(int i=0;i<front;i++){
        arr[i]=arr[i+1];
    }
    front--;
}
int top(){
if(isempty()){
    cout<<"stack is empty"<<endl;
}
return arr[0];
}
void Fullprint(){
    if(isempty()){
        cout<<"stack is empty"<<endl;
        return;
    }
    for(int i=0;i<=front;i++){
        cout<<arr[i]<<endl;
    }
    
}
};
int main(){
Stackk s(3);
// s.pop();
s.push_in_0(3);
s.push_in_0(4);
s.push_in_0(5);
s.Fullprint();
cout<<"the top element is::: "<<s.top()<<endl;
}