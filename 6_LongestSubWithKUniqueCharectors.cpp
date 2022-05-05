#include<iostream>
#include<algorithm>
#include<map>
#define INT_MIN (-2147483647 - 1)
using namespace std;
int main(){
    string s;
    cin>>s;
    int k,j=0,i=0;
    cin>>k;
    map<char,int>m;
    int ans=0;
    while(j<s.size()){
        m[s[j]]++;
        if(m.size()<k){
            j++;
        }else if(m.size()==k){
            ans=max(ans,j-i+1);
            j++;
        }else{
            while(m.size()>k){
                m[s[i]]--;
                if(m[s[i]]==0){
                    m.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout<<ans;
}