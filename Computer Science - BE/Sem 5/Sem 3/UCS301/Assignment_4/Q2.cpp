#include <iostream>
#include <climits>
#include <stack>
using namespace std;

void reverseString(string s) {

    stack <string> str;
    for(int i=0; i<s.length(); i++) {
        
        string word = "";
        string reverseWord = "";
        while(s[i]!=' ' && i<=s.length()) {
            word += s[i];
            i++;
        }
        for(int j=word.length(); j>=0; j--) {
            reverseWord += word[j];
        }
        str.push(reverseWord);
    }
    while(!str.empty()) {
        cout<<str.top();
        str.pop();
    } 
}

int main() {
   cout<<"Enter any string "<<endl;
   string s;
   getline(cin, s);
   cout<<"The reversed string is: "<<endl;
   reverseString(s);
   return 0;
}