#include<bits/stdc++.h>
using namespace std;
class test{
   static int x;
    public:
    void print(int x){
        cout<<"the local ->argumental x is: "<<x<<endl;
        cout<<"the static x is: "<<test::x;
    }
};
int test::x=10;
int main(){
    test obj;
    obj.print(3);
}