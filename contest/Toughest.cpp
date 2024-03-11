#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
string s;


  for(int i=0;i<n;i++){
    char a;
    cin>>a;
    s=s+a;
  }

    vector<int> changes(s.size(), 0);

    for (int j = 1; j <= k; j++) {
        for (int i = j - 1; i < s.size(); i += j) {
            changes[i]++;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        if (changes[i] % 2 == 1) {
            s[i] = (s[i] == '0') ? '1' : '0';
        }
    }

    for (auto x : s) {
        cout << x;
    }

    return 0;
    }

}
