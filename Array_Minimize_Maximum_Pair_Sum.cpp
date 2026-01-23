#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;
        int ans = 0;

        while (i < j) {
            ans = max(ans, nums[i] + nums[j]);
            i++;
            j--;
        }
        return ans;
    }
};


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution s;
    cout << "Minimum Pair Sum = " << s.minPairSum(nums);

    return 0;
}
