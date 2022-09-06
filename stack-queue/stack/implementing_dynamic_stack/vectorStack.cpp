#include<bits/stdc++.h>
using namespace std;
class stacks{
    public:
    vector<int>arr;
    int top;
    stack(){
        top=-1;
    }
    void pop(){
        if(isEm)
    }
    void push(int data){
        top++;
        arr.pop_back(data);
    }
    bool isEmpty(){
        if(top==-1){
            return 1;
        }
    }
    int toppeek(){
        return arr[top];
    }

}
int main(){
    stacks s;
    s.push(4);
    cout<<s.top()<<endl;
}