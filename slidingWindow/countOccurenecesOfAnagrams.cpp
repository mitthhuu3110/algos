//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int ans=0;
	    int n=pat.length();
	    unordered_map<char,int>m;
	    for(int i=0;i<n;i++){
	        m[pat[i]]++;
	    }
	    int cnt=m.size();
	    int i=0;
	    int j=0;
	    while(j<txt.length()){
	        if(m.find(txt[j])!=m.end()){
	            m[txt[j]]--;
	            if(m[txt[j]]==0) cnt--;
	        }
	        if(j-i+1<n) j++;
	        else if(j-i+1==n) {
	            if(cnt==0) ans++;
	            if(m.find(txt[i])!=m.end()){
	                m[txt[i]]++;
	                if(m[txt[i]]==1) cnt++;
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
