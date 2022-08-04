#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int front;
    int rear;
    int size;
    int* arr;
    Queue(int size){
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
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
            cout<< "empty ";
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
        if(rear==0)return 1;
        if(rear==-1)return 0;
        return 1+rear-front;
    }
};
int main(){
    Queue q(5);
    q.push(6);
    cout<<"total size: "<<q.space()<<" "<<"the front: "<<q.frontView()<<endl;
    q.pop();
    // cout<<q.rear<<" "<<q.front<<endl;
    cout<<"total size: "<<q.space()<<" "<<"the front: "<<q.frontView()<<endl;
    q.push(10);
    cout<<"total size: "<<q.space()<<" "<<"the front: "<<q.frontView()<<endl;
}