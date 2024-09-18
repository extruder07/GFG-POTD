//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(const string& str) {
        int maxLen = 0;
        int left = 0, right = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(')
                left++;
            else
                right++;
            if (left < right) left = right = 0;
            else maxLen = max(maxLen, 2 * right);
        }

        return maxLen;
        // stack<int> st;
        // st.push(-1);
        // int maxLength = 0;
        // for (int i = 0; i < str.length(); i++) {
        //     if (str[i] == '(')
        //         st.push(i);
        //     else {
        //         st.pop();
        //         if (st.size() == 0) st.push(i);
        //         else maxLength = max(maxLength, i - st.top());
        //     }
        // }

        // return maxLength;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends