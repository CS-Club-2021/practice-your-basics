#include<bits/stdc++.h>  // Header file which includes every standard library
using namespace std;

// Execution of program begins from the main function
int main(){
	vector<int> ans;
	for(int i=2000;i<3000;++i){      // Considering numbers between [2000,3000) only because any number between 1000 to 1999 does not satisfy the given condition
		string num = to_string(i);   // Using the to_string() function to convert the number into a string, so that each of its digits can be individually looked into.
		bool iseven = 1;	
		for(int i=0;i<4;++i){
			if((num[i]-'0')%2!=0){
				iseven = 0;          // Checking if all digits of the number are even, if we find a single odd digit, we need not check further and can omit this number.
				break;
			}
		}
		if(iseven) ans.push_back(i);
	}
	int sze = (int)ans.size();
	for(int i=0;i<sze;++i){
		cout<<ans[i];
		(i==sze-1)? cout<<endl : cout<<",";
	}
}
