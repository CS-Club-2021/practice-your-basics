#include<bits/stdc++.h>  // Header file which includes every standard library
using namespace std;

// Execution of program begins from the main function
int main(){
	string s;
	cin>>s;
	int n = (int)s.size();
	string arb = "";
	vector<string> strings;
	for(int i=0;i<n;++i){
		if(s[i]==',' && arb!=""){
			strings.push_back(arb);
			arb = "";
		}
		else{
			arb+=s[i];
		}
	}
	if(!arb.empty()) strings.push_back(arb);
	sort(strings.begin(),strings.end());
	int sze = (int)strings.size();
	for(int i=0;i<sze;++i){
		cout<<strings[i];
		(i==sze-1)? cout<<endl : cout<<",";
	}

}