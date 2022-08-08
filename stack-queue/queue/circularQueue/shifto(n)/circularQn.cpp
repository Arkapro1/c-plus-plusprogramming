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
        return (abs(front-rear)+1==size);//⚡ modified
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
    //⚡ pop modified
    void pop(){
        if(isEmpty()){
            cout<<"the queue is empty"<<endl;
            return;
        }
        if(front==size-1||front==rear){
            front=-1;
            rear=-1;
            return;
        }
        // ⚡⚡main modification
        for(int i=0;i<rear;i++){
            arr[i]=arr[i+1];
            rear--;
            // front--;
        }
        
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
    Queue q(2);
    q.push(9);
    q.push(19);
    q.pop();
    q.push(20);
    q.pop();
    // q.pop();
    cout<<q.frontView()<<endl;
   
}