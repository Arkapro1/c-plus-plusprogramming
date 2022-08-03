#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int score =3;
void a(){
cout<<score<<" in a->fn"<<endl;
}
int main() {
    int score=4;
cout<<::score<<" in main bt global: "<<endl;
cout<<score<<" in main"<<endl;
a();
}