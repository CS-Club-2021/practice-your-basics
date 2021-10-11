
//17. Define a function that can accept two strings as input and print the string with maximum length in console. If two strings have the same length, then the function should print all strings line by line.


#include <bits/stdc++.h>
using namespace std;

void print(string s1, string s2)
{
    int m = s1.size();
    int n = s2.size();
    
    if(m>n)
    cout<<s1<<endl;
    else if(m<n)
    cout<<s2<<endl;
    else
    cout<<s1<<endl<<s2<<endl;
}

int main() {
    string s1, s2;
    cin>>s1>>s2;
    
    print(s1, s2);
}
