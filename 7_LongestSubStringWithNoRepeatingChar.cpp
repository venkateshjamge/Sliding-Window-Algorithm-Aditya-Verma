#include<iostream>
#include<set>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0,j=0,ans=-1;
    set<char>se;
    while(j<s.size()){
        if(se.count(s[j])==0){
            //cout<<s[j];
            se.insert(s[j]);
            ans=max(j-i+1,ans);
            j++;
        }else{
            while(se.count(s[j])!=0){
                se.erase(s[i]);
                i++;
            }
            se.insert(s[j]);
            j++;
        }
    }
    cout<<ans;
}