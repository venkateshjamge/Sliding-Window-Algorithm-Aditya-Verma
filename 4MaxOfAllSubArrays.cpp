#include<iostream>
#include <algorithm>
#include<deque>
#include<vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    deque<int>q;

    int i=0,j=0;
    vector<int>ans;
    if(k>n)
    {
        sort(arr,arr+n);
        ans.push_back(arr[n-1]);
        j=n;
    }
    while(j<n){
        if(j-i+1<k){
            while((q.empty()==false)&&(q.back()<arr[j])){
                q.pop_back();
            }
            q.push_back(arr[j]);
            j++;
        }else{
            while((q.empty()==false)&&(q.back()<arr[j])){
                q.pop_back();
            }
            q.push_back(arr[j]);
            ans.push_back(q.front());
            if((q.empty()==false)&&(q.front()==arr[i])){
                q.pop_front();
            }
            i++;
            j++;
        }
    }
    for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<" ";
    }
}