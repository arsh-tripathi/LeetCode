#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
   public:
	vector<int> twoSum(vector<int> &nums, int target) {
		unordered_map<int, int> seen;
		for (int i = 0; i < nums.size(); ++i) {
			if (seen.find(target - nums[i]) != seen.end())
				return {seen[target - nums[i]], i};
			else
				seen[nums[i]] = i;
		}
		return {0, 1};
	}
};
