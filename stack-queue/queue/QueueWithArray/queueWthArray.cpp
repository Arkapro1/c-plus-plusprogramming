#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int moovon;
    int arr[];
    Queue(int size){
        this->size=size;
        front=-1;
        moovon=-1;
        arr[size];
        cout<<"the queue is ready🌀"<<endl;
    }
    bool isEmpty(){
        return (front==-1||front==size);
    }
    bool isFull(){
        return (front==size);
    }
    void push(int data){
        if(isFull()) {
            cout<<"the queue is full"<<endl;
            return;
        }
        if(isEmpty()) {front=0;moovon=0;}
        else {
            moovon++;
        }
        arr[moovon]=data;
    }
    void pop(){
        if(isEmpty()){cout<<"the queue is empty"<<endl;return;}
        front++;
    }
    int frontPick(){
        if(isEmpty()){cout<<"the queue is empty"<<endl;return 0;}
        return arr[front];
    }

};
int main (){
Queue q(5);
q.push(3);
cout<<q.arr[0]<<endl;
if (q.isEmpty())cout<<"done"<<endl;

}