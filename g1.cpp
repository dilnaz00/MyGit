#include<bits/stdc++.h>
using namespace std;
int main (){
int n;
cin>>n;
map<string,set<int> >mp;
int l;
for(int i=0;i<n;i++){
    string st;
    cin>>st;
    int k;
    cin>>k;
    mp[st]=k;


    l+=mp[st];
    
}
map <string,set<int> > :: iterator it=mp.begin();
for(it;it !=mp.end();it++){
       if(it->first ==it->first && it->second==it->second){
           
       }
}













    return 0;

}