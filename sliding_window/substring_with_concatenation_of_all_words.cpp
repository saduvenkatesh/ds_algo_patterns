#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<int> findSubstring_brute_force(string s, vector<string>& words) {
    vector<int> res;
    if (words.empty() || s.empty()) return res;
    int wordLen = words[0].size();
    int totalLen = wordLen * words.size();
    unordered_map<string, int> wordCount;
    for (const auto& w : words) wordCount[w]++;
    for (int i = 0; i <= (int)s.size() - totalLen; ++i) {
        unordered_map<string, int> seen;
        int j = 0;
        for (; j < words.size(); ++j) {
            string sub = s.substr(i + j * wordLen, wordLen);
            if (wordCount.find(sub) == wordCount.end()) break;
            seen[sub]++;
            if (seen[sub] > wordCount[sub]) break;
        }
        if (j == words.size()) res.push_back(i);
    }
    return res;
}
