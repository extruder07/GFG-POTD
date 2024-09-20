//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        string ans = "";
        int i = str.size() - 1;
        while (i >= 0) {
            int64_t len = 0;
            while (i >= 0 && str[i] != '.') {
                len++;
                i--;
            }
            ans += str.substr(i + 1, len);
            i--;
            if (i >= 0) ans += '.';
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends