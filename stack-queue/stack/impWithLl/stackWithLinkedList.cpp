#include<bits/stdc++.h>
using namespace std;
class stackk{
public:
int size;
stackk* top;
stackk* temp;
stackk* next=NULL;
stack(){
this.top=NULL;
this.size=-1;
}
bool isEmpty(){
    return (top==NULL);
}
void push(int data){
temp=new stackk(data);
temp->next=top;
top=temp;
size++;
}
void pop(){
if(isEmpty()){
cout<<"the stack is empty::"<<endl;
return;
}
//continue🙇‍♀️🙇‍♀️🙇‍♀️🙇‍♀️🙇‍♀️🙇‍♀️
}
int toppick(){

}

};
int main(){
    stackk s;
}