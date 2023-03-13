//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void bitManipulation(int num, int i) {
        i--;
        int mask = 1<<i;
        cout << num << endl;
        if ((num & mask) > 0) {
            cout << "1 " << num << ' ' << (~(1 << i) & num);
        } else {
            cout << "0 " << (num | mask) << ' ' << (~(1 << i) & num);
        }
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n >> i;
        Solution ob;
        ob.bitManipulation(n, i);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends