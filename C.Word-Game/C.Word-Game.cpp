// Source: https://usaco.guide/general/io
// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve(){
   int n ;
   cin>>n;
   map<string ,int>mp;
   string s [3][n];
   for (int i = 0 ; i<3;i++){
    for (int j = 0 ;j<n;j++){
        cin>>s[i][j];
        mp[s[i][j]]++;
    }
   }
   for (int i =0; i<3;i++){
    int total =0;
    for (int j=0;j<n;j++){
        if (mp[s[i][j]]==1)total+=3;
        else if (mp[s[i][j]] ==2)total++; 
    }
    cout<<total<<" ";
   }
   cout <<'\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    for(int i= 1 ; i<=tc;i++){
        solve();
    } 
}       
