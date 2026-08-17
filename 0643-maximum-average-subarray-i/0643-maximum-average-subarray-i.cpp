class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0;
        int r = k - 1;

        int sum = 0;

        // First window
        for (int i = l; i <= r; i++) {
            sum += nums[i];
        }

        double avg = (double)sum / k;

        // Slide the window
        while (r < n - 1) {
            r++;
            sum = sum - nums[l] + nums[r];
            l++;

            double maxavg = (double)sum / k;
            avg = max(avg, maxavg);
        }

        return avg;
    }
};