/*
11. Write a program that accepts a sentence and 
calculate the number of upper case letters 
and lower case letters.
*/

#include <bits/stdc++.h>

using namespace std;

//basic input and data type
#define ll long long  
#define loop(a,b) for(ll int i=a;i<b;i++)
#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define ss(s) scanf("%s",s)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define ps(s) printf("%s\n",s)

//debugging 
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

//vector functions
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef pair<int, int>pii;
typedef pair<ll, ll>pl;
typedef vector<int>vi;
typedef vector<ll>vl;
typedef vector<pii>vpii;
typedef vector<pl>vpl;
typedef vector<vi>vvi;
typedef vector<vl>vvl;
// solution

void solve()
{
    string s;
    getline(cin,s);
    ll int lcase=0,ucase=0;
    ll int i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>=97&&s[i]<=122)
        lcase++;
        else if(s[i]>=65&&s[i]<=90)
        ucase++;
    }
    cout<<"Lowercase count: "<<lcase<<endl;
    cout<<"Uppercase count: "<<ucase<<endl;
}

//main function
int main()
{
    ll int t=1;
    //sl(t);
    while(t--)
    {
        solve();
    }
 
   return(0);
}