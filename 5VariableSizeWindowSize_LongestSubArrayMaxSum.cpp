#include<iostream>
#include <algorithm>
#define INT_MIN (-2147483647 - 1)
#include<deque>
#include<vector>
using namespace std;
//ONLY FOR Positive values in an array
int main(){
    int n;
    cin>>n;
    int sum,temp=0,ans=0;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int i=0,j=0;
    while(j<n){
        temp+=arr[j];
        if(temp==sum){
            ans=max(ans,j-i+1);
            temp-=arr[i];
            i++;
            j++;
        }else if(temp<sum){
            j++;
        }else{
            i++;
        }
    }
    if(temp==sum){
        j--;
        ans=max(ans,j-i+1);
    }
    cout<<ans;
}