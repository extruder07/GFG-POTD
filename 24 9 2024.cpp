//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.

    bool can_go(const vector<int> &shash, const vector<int> &phash) {
        for (int i = 0; i < 26; i++) {
            if (phash[i] > shash[i]) return false;
        }

        return true;
    }

    string smallestWindow (string s, string p)
    {
        vector<int> shash(26, 0), phash(26, 0);
        for (char c : p) phash[c - 'a']++;

        int ptr = 0, ans = INT_MAX;

        for (int i = 0; i < s.size(); i++) {
            shash[s[i] - 'a']++;
            while (can_go(shash, phash)) {
                ans = min(ans, i - ptr + 1);
                shash[s[ptr] - 'a']--;
                ptr++;
            }
        }

        return ans == INT_MAX ? "-1" : s.substr(ptr - 1, ans);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends