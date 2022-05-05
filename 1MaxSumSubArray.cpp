#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;//size of subArray
    cin>>k;
    int i=0,j=0,sum=0,ans=INT16_MIN;
    while(j<n){
        if(j-i+1<k){
            sum+=arr[j];
            j++;
        }else if(j-i+1==k){
            sum+=arr[j];
            ans=max(ans,sum);
            sum-=arr[i];
            i++;
            j++;
        }
    }
    cout<<ans;
}