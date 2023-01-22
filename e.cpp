#include<bits/stdc++.h>
using namespace std;
string  foo(string s1,string s2){
    set<char>st;
    string s="";
    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s2.size();j++){
            if(s1[i]==s2[i]){
            st.insert(s1[i]);
            }

        }
    }
    set<char> :: iterator it=st.begin();
    for(it;it !=st.end();it++){
        s+=*it;
    }
    return s;

}
int main (){
    int n;
    cin>>n; 
    
    vector<string > vt;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vt.push_back(s);
    }
    string ans=vt[0];
    for(int i=0;i<vt.size();i++){
        ans=foo(ans,vt[i]);
        
}
if(ans !=""){
    cout<<"NO COMMON CHARACTERS";
    return 0;
}
else {
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
    }
    
   
    