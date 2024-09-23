//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
vector<int> findTwoElement(vector<int>& arr) {
    int n = arr.size();
    int duplicate = -1, missing = -1;

    // Use the input array to mark visited elements
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) - 1; // Get the index for the current value
        if (arr[index] < 0) {
            // This value has already been seen, so it's the duplicate
            duplicate = abs(arr[i]);
        } else {
            // Mark the value as seen by negating it
            arr[index] = -arr[index];
        }
    }

    // Find the missing number
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            // The index + 1 is the missing number
            missing = i + 1;
            break;
        }
    }

    return {duplicate, missing};
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends