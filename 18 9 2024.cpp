#include <iostream>
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> st;
        unordered_map<char, char> hash;
        hash['{'] = '}';
        hash['['] = ']';
        hash['('] = ')';

        for (char c : x) {
            if (c == '{' or c == '(' or c == '[') st.push(c);
            else {
                if (st.empty()) return false;
                char v = st.top();
                st.pop();
                if (hash[v] != c) return false;
            }
        }

        return st.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends