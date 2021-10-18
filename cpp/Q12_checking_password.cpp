#include<iostream>
using namespace std;
bool password_check(string s){
	int string_l=size(s);
	bool sl=false,cl=false,it=false,spl=false;
	for(int i=0;i<string_l;i++){
		if(int(s[i])>=97 && int(s[i])<=122){
			 sl=true;
			}
		if(int(s[i])>=65 && int(s[i])<=90){
			 cl=true;
			}
		if(s[i]-'0'>=0 && s[i]-'0'<=9){
			 it=true;
			}
		if(s[i]=='$'||s[i]=='#'||s[i]=='@'){
			 spl=true;
			}
		}
	if(sl&&cl&&it&&spl)return true;
	return false;
	}
int main(){
	cout<<"Please input your password\n";
	string s;
	cin>>s;
	if(size(s)<6){cout<<"Password length is too small\n";}
	else if(size(s)>12){cout<<"Password length is too Big\n";}
	else if(password_check(s)){
		cout<<"Successfully registered\n";
		}
	else{
		cout<<"Please use small alpbhabets[a-z],capital letters[A-Z], special characters[#,$,@], integer[0-9]\n";
		}
	
	}
