//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        deque<int> D;
        int n = arr.size();
        int maxi = 0;
        for (int i = 1; i < k; i++) {
            while (!D.empty() and D.back() <= arr[i]) D.pop_front();
            if (arr[i] > arr[maxi]) maxi = i;
            D.push_front(i);
        }
        D.push_front(maxi);
        vector<int> ans = {arr[maxi]};

        for (int i = k; i < n; i++) {
            if (i >= k + D.back()) D.pop_front();
            while (!D.empty() and arr[D.back()] <= arr[i]) D.pop_front();
            D.push_front(i);
            ans.push_back(arr[D.back()]);
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

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> res = obj.max_of_subarrays(k, arr);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends