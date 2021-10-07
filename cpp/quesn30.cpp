//Priyanshu Agarwal
//Question :30
//Language:c++

//to solve this i've used a map which will keep a track of all the elements in array and let us know if they are present in the array or not 
//for example if we to keep the value of N = 7 and we two elements like 2,5 then both 2 , (7-2) ie 5 are present and then we'll decrease their values from map such that the count does not repeat

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in an array:";
    cin>>n;
    int arr[n];
    cout<<"enter all the elements of array:";
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int N;
    cout<<"enter the sum value:";
    cin>>N;
    map<int,int> mp;
    for(int i = 0; i <n ; i++){
        mp[arr[i]]++;
    }
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        if(mp[arr[i]]>0 && mp[N-arr[i]]>0){
            count++;
            mp[arr[i]]--;
            mp[N-arr[i]]--;
        }
    }
    cout<<count;
}
