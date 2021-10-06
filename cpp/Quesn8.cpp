#include<bits/stdc++.h>  // Header file which includes every standard library
using namespace std;

// Execution of program begins from the main function
int main(){
	string s;
	getline(cin,s);               // Using the standard library function getline() to obtain the sequence of strings
	int n = (int)s.size();
	string binval = "";
	vector<string> vals;
	int lim = 4;
	int cntr = lim;
	for(int i=0;i<n;++i){        // Iterating through the given sequence, and storing every 4 characters of it and omitting the commas. 
		if(!cntr){
			int decval = stoi(binval,nullptr,2);  // Using the stoi() function which converts a binary string to a decimal
			if(decval%5==0) vals.push_back(binval);
			binval = "";
			cntr = lim;
			continue;
		}
		binval+=s[i];
		cntr--;
	}
	int decval = stoi(binval,nullptr,2);  // The last binary string is not added in the above for loop, thus it is being done here
	if(decval%5==0) vals.push_back(binval);
	int sze = (int)vals.size();
	for(int i=0;i<sze;++i){
		cout<<vals[i];
		(i==sze-1)? cout<<endl : cout<<",";   // Displaying the comma separated binary strings which are divisible by 5
	}
}