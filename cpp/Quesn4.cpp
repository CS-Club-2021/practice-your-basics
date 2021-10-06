#include<bits/stdc++.h>  // Header file which includes every standard library
using namespace std;

bool comp(pair<int,vector<int>> &a,pair<int,vector<int>> &b){
	return a.first < b.first;                                  // Comparator used to sort the matrix in increasing order of number of leading zeroes
}

// Execution of program begins from the main function
int main(){
	int n,m;
	cin>>n>>m;
	vector<pair<int,vector<int>>> vals;
	for(int i=0;i<n;++i){
		vector<int> arb(m);
		int numcont = 0;
		bool iszero = 1;
		for(int j=0;j<m;++j){                   // Taking in the matrix in a row-wise manner, and storing the number of leading zeroes for each row
			cin>>arb[j];
			numcont+=(iszero);
			if(iszero) iszero = (arb[j]==0);
		}
		vals.push_back(make_pair(numcont,arb));
	}
	sort(vals.begin(),vals.end(),comp);
	for(auto x:vals){                          // Matrix displayed after completion of sorting
		for(auto y:x.second){
			cout<<y<<" ";                      
		}
		cout<<endl;
	}
}