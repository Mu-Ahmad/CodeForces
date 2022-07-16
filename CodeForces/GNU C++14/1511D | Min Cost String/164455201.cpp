// to check for the direted graph
stdc++.h>

 std;




 ADJ_LIST>
ADJ_LIST& adj_list, int curr, vector<int>& out)

curr]) DFS(adj_list, adj_list[curr][--out[curr]], out);

push_front(curr);


 ADJ_LIST>
ADJ_LIST& adj_list, int k)

 out(adj_list.size(), k);

, 0, out);






 k;
 arr(k);
begin(), arr.begin()+k, 0);
vector<int> > adj_list(k, arr);


adj_list, k);
pop_front();
 "";

: path) ans += (char)('a' + x);
    
    while (ans.size() < n) ans += ans;
 
    cout << ans.substr(0, n); 
    return 0;
}