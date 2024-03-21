#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    unordered_map<string,string> urlMap;
    int id = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string encode_str = longUrl + '/' + to_string(id);
        urlMap[encode_str] = longUrl;
        return encode_str;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return urlMap[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
//leetcode submit region end(Prohibit modification and deletion)
