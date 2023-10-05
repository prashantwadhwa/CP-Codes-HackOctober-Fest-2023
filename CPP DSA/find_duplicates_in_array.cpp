
#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {

        
        // using unordered map
        
        vector<int> ans;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            if (mp[arr[i]] == 0) {
                mp[arr[i]]++;
            } else {
                ans.push_back(arr[i]);
            }
        }

        if (ans.empty()) {
            ans.push_back(-1);
        }
        sort(ans.begin(), ans.end());

        return ans;
    
    }
};




int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

