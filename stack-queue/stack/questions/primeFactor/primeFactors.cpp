#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    std::stack<int>s ;
    int n;
    cin>>n;
    int i=2;
    while(n!=1){
    while(n%i==0){
        s.push(i);
        n=n/i;
        while(n%i==0){
            n=n/i;
        }
    }
    i++;
}
while(!s.empty()){
cout<<s.top()<<endl;
s.pop();
}
}