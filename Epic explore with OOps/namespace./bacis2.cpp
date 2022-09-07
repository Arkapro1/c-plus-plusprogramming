#include<bits/stdc++.h>
using namespace std;
namespace ns{
    int n=10;
}
int n=20;
int main(){
    int n=30;
cout<<"in main local n: "<<n<<endl;
cout<<"in main global n: "<<::n<<endl;
cout<<"in main custom namespace-> n: "<<ns::n<<endl;
}