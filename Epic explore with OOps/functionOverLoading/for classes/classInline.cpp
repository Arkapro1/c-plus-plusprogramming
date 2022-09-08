#include<bits/stdc++.h>
using namespace std;
class cl{
    public:
 void print(){
    cout<<"its by default inline "<<endl;
 }
 void print2();
 void print3();
}; 
void cl::print2(){
    cout<<"not inline "<<endl;
}
inline void cl::print3(){
    cout<<"manualy making inline"<<endl;
} 
int main(){
    cl ob;
    ob.print();
    ob.print2();
    ob.print3();
}