/*
A
AB
ABC
ABCD
ABCDE
*/
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        // int x = 65;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<(char)(j+64);
            }
            cout<<endl;
        }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
