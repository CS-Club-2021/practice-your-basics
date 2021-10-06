#include<bits/stdc++.h>  // Header file which includes every standard library
using namespace std;

// Execution of program begins from the main function
int main(){
	string s;
	getline(cin,s);               // Using the standard library function getline() to obtain the sequence of strings
	int n = (int)s.size();
	for(int i=0;i<n;++i){
		s[i] = toupper(s[i]);     // Converting all characters of the string to uppercase.
	}
	cout<<s<<endl;
}