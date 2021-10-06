#include<bits/stdc++.h>  // Header file which includes every standard library
using namespace std;

// Execution of program begins from the main function
int main(){
	string s;
	getline(cin,s);               // Using the standard library function getline() to obtain the sequence of strings
	int n = (int)s.size();
	set<string> uniqvals;         // STL set stores unique elements in sorted order, which is the most suitable for this question.
	string arb = "";
	for(int i=0;i<n;++i){
		if(s[i]==' '){
			uniqvals.insert(arb);
			arb = "";
			continue;
		}
		arb+=s[i];
	}
	for(auto x:uniqvals){
		cout<<x<<" ";            // Displays the strings in sorted order, separated by a whitespace
	}
}