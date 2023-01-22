#include<bits/stdc++.h>
using namespace std;
int main (){
int n;
cin>>n;
string s;
cin>>s;
string s1="";
for(int i=0;i<s.size();i++){
    if((s[i] + n) > 'z' || (s[i]+n)>'Z'){
        s[i] =s[i] - 26 +n;
    }else if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
        s[i]=s[i]+n;
    }
    else {
        s[i]=s[i];
    }
    s1+=s[i];
}

cout<<s1;

}