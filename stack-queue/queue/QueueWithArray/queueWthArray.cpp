#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int size;
    int arr[];
    Queue(int size){
        this->size=size;
        front=-1;
        rear=-1;
         arr[size];
    }
    bool isFull(){
        return (rear==size-1);
    }
    bool isEmpty(){
        return (rear==-1);
    }
    void push(int data){
        if(isFull()){
            cout<<"the queue is full"<<endl;
            return;
        }
        if(front==-1)front=0;
        rear++;
        arr[rear]=data;
    }
    void pop(){
        if(isEmpty()){
            cout<<"the queue is empty"<<endl;
            return;
        }
        if(front==size-1||front==rear){
            front=-1;
            rear=-1;
        }
        else 
        front++;
    }
    int frontView(){
        if(front==-1){
            return -1;
        }
        return arr[front];
    }
    void print(){
        if(isEmpty()){
            cout<<"the queue is empty"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<endl;
        }
        return;
    }
    int space(){
        if(rear==-1)return 1;
        return 1+rear-front;
    }
};
int main(){
    Queue q(5);
    q.push(1);
    q.push(12);
    q.push(12);
    q.push(12);
    q.push(12);
    q.push(12);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(3);
    (q.frontView()==-1)?cout<<"empty"<<endl:cout<<q.frontView()<<endl;


}