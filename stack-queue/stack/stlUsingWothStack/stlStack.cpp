#include<bits/stdc++.h>
using namespace std;
int main (){
stack<int>s;
cout<<"enter how many elements do u want to push: "<<endl;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    s.push(x);
}
cout<<"size now: "<<s.size()<<endl;
cout<<"printing your stack and poping"<<endl;
while(!s.empty())
{cout<<s.top()<<endl;
s.pop();}
cout<<"stack is empty"<<endl;
cout<<"size now: "<<s.size()<<endl;
}
