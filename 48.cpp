#include<bits/stdc++.h>
using namespace std;
int main (){
int n;
cin>>n;
vector<int>vt(n);
for(int i=0;i<n;i++){
    cin>>vt[i];
}
reverse(vt.begin(),vt.end());
deque<int>d;
for(int i=0;i<n;i++){
    if(vt[i]%2==0){
       d.push_front(vt[i]);
    }
    if(vt[i]%2!=0){
        d.push_back(vt[i]);
    }

}
deque<int> :: iterator it=d.begin();
for(it;it!=d.end();it++){
    cout<<*it<<" ";
}
}