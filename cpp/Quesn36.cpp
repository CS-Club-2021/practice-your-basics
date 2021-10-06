#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

bool check_isomorphic(string one , string two){
    unordered_map<char,int> m1;
    unordered_map<char,int> m2;
    if(one.length()!=two.length()){
        return false;
    }
    for (int i=0;i<one.length();i++){
        if(m1.count(one[i])>0){
            m1[one[i]]+=1;
        }
        if(m1.count(one[i])==0){
            m1[one[i]]=1;
        }
        if(m2.count(two[i])>0){
            m2[two[i]]+=1;
        }
        if(m2.count(two[i])==0){
            m2[two[i]]=1;
        }

        //like if we have one string as 'aab' and other as 'xxy' then when  i =1 then the count of both a and x in their respective maps should be
        //same as x is mapped to a  if that's not the case then we will say that it is not isomorphic.
        if(m1[one[i]]!=m2[two[i]]){
            return false;
        }
    }
    return true;
}
int main()
{
    string first_word;
    cout<<"enter first word"<<endl;
    getline(cin,first_word);
    string second_word;
    cout<<"enter Second word"<<endl;
    getline(cin,second_word);

    if(check_isomorphic(first_word,second_word)){
        cout<<"the two string inputed are isomorphic"<<endl;
    }
    else{
        cout<<"the two strings inputed are not isomorphic"<<endl;
    }
    return 0;
}
