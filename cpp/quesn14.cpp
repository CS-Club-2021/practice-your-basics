// Manas, COE19B003
// Question number: 14
// Language: C++

/* Brief Description of your solution
Program to Convert integer into string
*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    char arr[10];
    int length = 0;
    while(n)
    {
        arr[length] = (n % 10) + 48;
        length++;
        n /= 10;
    }
    string s;
    for(int i = length - 1; i >=0 ; i--)
    {
        s.push_back(arr[i]);
    }
    cout<<"Number in string format: "<<s;
}
