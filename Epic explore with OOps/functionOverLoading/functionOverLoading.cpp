#include<bits/stdc++.h>
using namespace std;
void print(int i,int j){
    cout<<" print(int i,int j) -> called"<<endl;
}
void print(char a,int j){
    cout<<" print(char a,int j) -> called"<<endl;
}
void print(){
    cout<<" print() -> called"<<endl;
}
int main(){
print();
print(2,3);
print('w',6);
}