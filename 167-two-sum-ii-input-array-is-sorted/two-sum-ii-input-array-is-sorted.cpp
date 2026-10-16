
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0;
        int end = numbers.size() - 1;

        while (st < end) {
            int currSum = numbers[st] + numbers[end];

            if (currSum == target) {
                return {st + 1, end + 1};
            }
            else if (currSum > target) {
                end--;
            }
            else {
                st++;
            }
        }

        return {};
    }
};
