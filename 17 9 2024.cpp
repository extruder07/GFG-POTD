//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size(), ans;
        // a[i] > k
        if (arr[n - 1] > k) ans = arr[n - 1] - arr[0] - 2 * k;
        else if (arr[0] < k) ans = arr[n - 1] - arr[0];
        else {
            int ind = 0;
            while (ind < n - 1 and arr[ind] < k) ind++;
            int i;
            for (i = 0; i <= ind; i++) arr[i] += k;
            for (; i < n; i++) arr[i] -= k;
            int maxi = *max_element(arr.begin(), arr.end()), mini = *min_element(arr.begin(), arr.end());
            ans = maxi - mini;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends