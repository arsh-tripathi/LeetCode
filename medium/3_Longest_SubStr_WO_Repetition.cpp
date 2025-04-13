#include <string>
#include <unordered_map>
using namespace std;

class Solution {
   public:
	int lengthOfLongestSubstring(string s) {
		unordered_map<char, int> lastSeen;
		int currLen = 0, maxLen = 0;
		for (int i = 0; i < s.length(); ++i) {
			if (lastSeen.find(s[i]) == lastSeen.end() ||
				i - lastSeen[s[i]] > currLen) {
				lastSeen[s[i]] = i;
				currLen++;
				continue;
			}
			if (maxLen < currLen) maxLen = currLen;
			currLen = i - lastSeen[s[i]];
			lastSeen[s[i]] = i;
		}
		return (currLen > maxLen) ? currLen : maxLen;
	}
};
