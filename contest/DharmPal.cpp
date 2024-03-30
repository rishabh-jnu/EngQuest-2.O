#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximizeFullness(int A, int B, int T) {
    vector<int> fullness;
    fullness.push_back(A); 
    fullness.push_back(B); 
    sort(fullness.rbegin(), fullness.rend());

    int totalFullness = 0;
    int remainingCapacity = T;
    for (int i = 0; i < fullness.size() && remainingCapacity > 0; ++i) {
        int consumed = min(remainingCapacity, fullness[i]);
        totalFullness += consumed;
        remainingCapacity -= consumed;
    }

    return totalFullness;
}

int main() {
    int A,B,T;
    cin>>T>>A>>B;
    int MaxFulli = maximizeFullness(A,B,T);
    cout<<MaxFulli;
  
}
