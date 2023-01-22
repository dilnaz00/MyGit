#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    string s;
    string a="inc";
    string b="dic";
    cin>>s;
    vector<int>vt1;

    for(int i=0;i<n;i++){ 
        vector<int>vt(3);
        int sum=0;
        for(int i=0;i,3;i++){
            cin>>vt[i];
            sum+=vt[i];
        }
        vt1.push_back(sum);
    }

    if(s==a){
        sort(vt1.begin(),vt1.end());
            for(int i=0;i<vt1.size();i++){
                int h=vt1[i]/3600;
                int m=vt1[i]/60;
                int s=vt1[i]%60;
                cout<<h<<" "<<m<<" "<<s;
            }
    }
    if(s==b){
         sort(vt1.begin(),vt1.end());
         reverse(vt1.begin(),vt1.end());
            for(int i=0;i<vt1.size();i++){
                int h=vt1[i]/3600;
                int m=vt1[i]/60;
                int s=vt1[i]%60;
                cout<<h<<" "<<m<<" "<<s;
            }
    }
}