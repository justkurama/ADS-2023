#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v;
    vector<int> ans;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    ans.push_back(-1);
    for (int i = 1; i < n; i++){
        for (int j = 0; j < i; j++){
            if(v[i] > v[j]) ans.push_back(j);
        }
    }
    for (int i = 0; i < n; i++) cout << ans[i] << " ";
}