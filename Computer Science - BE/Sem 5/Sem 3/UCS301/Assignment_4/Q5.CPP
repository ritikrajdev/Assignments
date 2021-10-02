#include <bits/stdc++.h>
using namespace std;

int postfixEvaluation(string s) {
  stack <int> st;
  for(int i=0; i<s.size(); i++) {
    if(s[i]>='0' && s[i]<='9') {
        st.push(s[i] - '0');
    }
    else {
        int op2 = st.top();
        st.pop();
        int op1 = st.top();
        st.pop();

        switch (s[i])
        {
        case '+':
            st.push(op1+op2);
            break;
        case '-':
            st.push(op1-op2);
            break;
        case '*':
            st.push(op1*op2);
            break;
        case '/':
            st.push(op1/op2);
            break;
        case '^':
            st.push(pow(op1,op2));
            break;    
        }
     }
   }
   return st.top();
}
int main() {
  string s;
  cout<<"Enter the string "<<endl;
  getline(cin, s);
  cout<<"The postfix evaluation comes out to be "<<postfixEvaluation(s)<<endl;
  return 0;
}