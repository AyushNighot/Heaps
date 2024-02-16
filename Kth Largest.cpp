class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       // Initialize a priority queue (min-heap)
        priority_queue<int, vector<int>, greater<int>> pq;
        
        // Iterate through each element in the input array
        for (int i = 0; i < nums.size(); i++) {
            // Push the current element onto the min-heap
            pq.push(nums[i]);
            
            // If the size of the min-heap exceeds k, pop the smallest element
            if (pq.size() > k) {
                pq.pop();
            }
        }
        
        // Return the top element of the min-heap, which will be the kth largest element
        return pq.top();
    }
};
