#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t; cin >> t;
    string s1, s2;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) cin >> arr[i];
 
        list <int> ans_list; ans_list.push_back(arr[0]);
    
        for (int i = 1; i<n; i++)
            if (arr[i] < *ans_list.begin()) ans_list.push_front(arr[i]);
            else ans_list.push_back(arr[i]);
 
        for (auto num : ans_list) cout << num << ' ';
        cout << '\n';
    }
    return 0;
}