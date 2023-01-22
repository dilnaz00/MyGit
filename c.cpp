#include<bits/stdc++.h>
using namespace std;
bool comp(pair<string, float>pr,pair<string, float>pr2){
    if(pr2.second==pr.second){
        
    }
    if(pr2.second <=pr.second) return true;
    return false;
}
int main (){
    map<string,int>mp;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        float  k;
        cin>>k;
         sum+=k;
        mp[s]+=k;
    }
   
    map<string,int> :: iterator it=mp.begin(); 
    vector<pair <string,float> > vt;
for(it;it !=mp.end();it++){
    mp[it->first]=(it->second*100)/sum;
    vt.push_back(make_pair(it->first,it->second));
}
sort(vt.begin(),vt.end(),comp);
for(int i=0;i<vt.size();i++){
 cout<<vt[i].first<<" "<<vt[i].second<<"%\n";
}
}