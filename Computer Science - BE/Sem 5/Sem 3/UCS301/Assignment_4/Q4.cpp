#include <iostream>
#include <math.h>
#include <string>
#include <stack>
using namespace std;

int prec(char c) {

    if(c == '^') {
        return 3;
    }
    else if(c == '*' || c=='/') {
        return 2;
    }
    else if(c == '+' || c == '-') {
        return 1;
    }
    else {
        return -1;
    }
}

string infixtoPostfix(string s) {
    stack <char> st;
    string res;

    for(int i=0; i<s.length(); i++) {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) {
            res = res + s[i];
        }
        else if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            while(!st.empty() && st.top() != '(') {
                    res = res + st.top();
                    st.pop();
            }
            if(!st.empty()) {
                st.pop();
            }
        }
        else {
            while(!st.empty() && prec(st.top())>prec(s[i])) {
                res = res + st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()) {
        res = res + st.top();
        st.pop();
    }
    return res;
}

int main() {
    string s;
    cout<<"Enter the string in infix "<<endl;
    cin>>s;
    cout<<"The postfix string is "<<endl;
    cout<<infixtoPostfix(s)<<endl;
    return 0;
}

