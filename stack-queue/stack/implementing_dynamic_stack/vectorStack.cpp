#include<bits/stdc++.h>
using namespace std;
class stacks{
    public:
    vector<int>arr;
    int top=-1;
    void pop(){
        if(isEmpty()) {cout<<"the stack is empty"<<endl;
        return ;}
        else top--;
    }
    void push(int data){
        top++;
        arr.push_back(data);
    }
    bool isEmpty(){
        if(top==-1){
            return 1;
        }
        else return 0;
    }
    int toppeek(){
        return arr[top];
    }

};
int main(){
    stacks s;
    cout<<"enter how many pushes u want:"<<endl;
    int n;
    cin>>n;
    cout<<"enter the elements"<<endl;
 for(int i=1;i<=n;i++ ){
    int data;
    cin>>data;
    s.push(data);
 }
 cout<<"top peekking and popping:"<<endl;
 for(int i=1;i<=n;i++ ){
    cout<<s.toppeek()<<endl;
    s.pop();
 }
   if(s.isEmpty())cout<<"the stack is empty:)"<<endl;
}