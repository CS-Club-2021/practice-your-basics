#include <iostream>
#include <unordered_map>
using namespace std;

int number_of_pair(int* arr,int num,int sum){
    unordered_map<int,int> m;
    for(int i=0;i<num;i++){
        if(m.count(arr[i])>0){
            m[arr[i]]+=1;
        }
        else{
            m[arr[i]]=1;
        }
    }
    int twice_count=0;
    for(int i=0;i<num;i++){
        if(m.count(sum-arr[i])>0){

           twice_count+=twice_count+m[sum-arr[i]];
           //taking this if statement because we dont want two elements at same place in array to form a pair.
           if((sum-arr[i])==arr[i]){
            twice_count=twice_count-1;
           }
        }
    }
    return twice_count/2;
}
int main()
{
    int num;
    int sum;
    cout<<"enter the sum for which you want to check"<<endl;
    cin>>sum;
    cout<<"enter the size of the array you want"<<endl;
    cin>>num;
    int* arr= new int[num];
    for (int i=0;i<num;i++){
        int data;
        cout<<"enter number you want to put in array"<<endl;
        cin>>data;
        arr[i]=data;
    }
    int ans;
    ans=number_of_pair(arr,num,sum);
    cout<<"the number of distinct number (x,y) pairs whose sum is equal to required sum-: "<<ans<<endl;
    return 0;
}
