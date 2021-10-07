#include<bits/stdc++.h>  // Header file which includes every standard library
using namespace std;

bool pass_check(string pword)
{
    const regex lowercase("[a-z]+");
    bool lcase = regex_search(pword,lowercase);
    const regex uppercase("[A-Z]+");
    bool ucase = regex_search(pword,uppercase);  
    const regex number("[0-9]+");
    bool num = regex_search(pword,number);
    const regex special("[@#$]+");
    bool spchar = regex_search(pword,special);
   	int sze = (int)pword.size();
   	bool len = ((sze >= 6)&(sze<=12));
    return (lcase & ucase & num & spchar & len);  // Checking individually whether all conditions are satisfied, AND of all these results will give you the required answer 
}

// Execution of program begins from the main function
int main(){
	string pass,user;  
	cin>>user;  // No constraints on username 
	cout<<"Hi "<<user<<"! Please enter your password :\n";
	cin>>pass;
	(pass_check(pass))? cout<<"Valid Password, Congrats! : )" : cout<<"Invalid Password : (";
}