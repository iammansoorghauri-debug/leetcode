class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Map to store exactly what we've seen: { Number : Index }
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            // Step 1: Calculate the exact missing puzzle piece
            int complement = target - nums[i];

            // Step 2: Check if that piece is sitting in our map looking backward
            if (seen.count(complement) > 0) {
                // BOOM! We found the pair.
                // Return the index from the map, and our current index 'i'
                return {seen[complement], i};
            }

            // Step 3: If not found, add the current number and its index to the map
            // so future numbers can find it.
            seen[nums[i]] = i;
        }
        return {};
    }
};