#include<bits/stdc++.h>
using namespace std;
class cl{
    public:
    int x;
    void fn(int x){
        this->x=x;// === cl::x=x
    }
};
int main(){
    cl obj;
    obj.fn(9);
    cout<<"obj.x: "<<obj.x<<endl;
}