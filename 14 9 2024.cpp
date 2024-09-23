//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        int n = arr.size();
        vector<int> a(n);
        int pos = 0, neg = 0, ptr = 0;

        while (pos < n and neg < n) {
            if (ptr % 2 == 0) {
                a[ptr] = arr[pos];
                while (pos < n and arr[pos] < 0) pos++;
            }
            else {
                a[ptr] = arr[neg];
                while (neg < n and arr[neg] >= 0) neg++;
            }
            ptr++;
        }

        while (pos < n) a[ptr++] = arr[pos++];
        while (neg < n) a[ptr++] = arr[neg++];

        arr = a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends