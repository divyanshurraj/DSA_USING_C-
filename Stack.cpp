#include<iostream>
#include<stack>
using namespace std;
int main(){
   stack<int> st;
   stack<char> ch;
   st.push(1);
   st.push(2);
   st.push(3);
   st.push(4);
   st.push(5);

   ch.push('a');
   ch.push('b');
   ch.push('c');
   ch.push('d');
   ch.push('e');

   while(!st.empty()){
   cout<<st.top()<<st.size();
   st.pop();
   cout<<" ";
   }
   cout<<endl;
   while(!ch.empty()){
      cout<<ch.top()<<ch.size();
      ch.pop();
      cout<<" ";
   }


}
