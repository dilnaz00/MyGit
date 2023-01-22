#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin>>n;
    set<int>st;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        st.insert(k);
    }
    if(st.size()==n) cout<<"YES";
    else cout<<"NO";
}