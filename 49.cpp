#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    queue<string>q;
    vector<string>vt;
    for(int i=0;i<n;i++){
         int n;
         cin>>n;
         
         if(n==1){
            string s;
         cin>>s;
            q.push(s);
         }
         if(n==2){
            vt.push_back(q.front());
             q.pop();
         }
        
    }
    for(int i=0;i<vt.size();i++){
  cout<<vt[i]<<" ";
    }
}