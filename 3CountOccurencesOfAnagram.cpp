#include<iostream>
using namespace std;
int main(){
    string s,p;
    int arr[26]={0};
    int count=0;
    cin>>s>>p;
    int n=p.size();
    int m=s.size();
    int check[26]={0};
    
    for(int i=0;i<n;i++){
        arr[p[i]-'a']++;
    }
    int i=0,j=0;
    while(j<m){
        if(j-i+1<n){
            check[s[j]-'a']++;
            j++;
        }else{
            check[s[j]-'a']++;
            int k;
            for(k=0;k<26;k++){
                if(arr[k]!=check[k]){
                    break;
                }
            }
            //cout<<k<<" "<<arr[k]<<" "<<check[k]<<"\n";
            if(k==26){
                count++;
            }
            check[s[i]-'a']--;
            j++;
            i++;
        }
    }
    cout<<count;
}
