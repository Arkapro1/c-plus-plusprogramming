#include<bits/stdc++.h>
using namespace std;
  void Reverse(stack<int>& st){
    // using 2 stacks
    stack<int> t1;
    stack<int> t2;
    //st --> to t1::::
    while(!st.empty()){
     t1.push(st.top());
     st.pop();
    }
    //t1 --> to t2::::
    while(!t1.empty()){
     t2.push(t1.top());
     t1.pop();
    }
    //t2 --> to st::::
    while(!t2.empty()){
     st.push(t2.top());
     t2.pop();
    }
    }
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}