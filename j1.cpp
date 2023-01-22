#include<bits/stdc++.h>
using namespace std;
int dis(pair<int,int>pr1,pair<int,int>pr2){
   return sqrt(pow((pr1.first-pr2.first),2)+pow((pr1.second-pr2.second),2));
}
int main (){
    int x,y;
    cin>>x>>y;
    int m;
    cin>>m;
    pair<int,int> pr;
    for(int i=0;i<m;i++){
       int x1;
       int y1;
       cin>>x1>>y1;
       pr.first=x1;
       pr.second=y1;
       pr=make_pair(x1,y1);
    }
   


}