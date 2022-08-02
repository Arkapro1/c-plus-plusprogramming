#include<bits/stdc++.h>
using namespace std;
int main (){
    queue<int>q;
    int n;
    cout<<"how many time u want to ohhu:"<<endl;
    cin>>n;
    cout<<"Enter thr elements now: "<<endl;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        q.push(a);
    }
    cout<<"the size now is: "<<q.size()<<endl;
    cout<<"now i am doing front - back- pop "<<endl;
    while(!q.empty()){
        cout<<"    front- "<<q.front()<<" "<<"back- "<<q.back()<<endl;
        q.pop();
    }
    cout<<"the size now is: "<<q.size()<<endl;
}