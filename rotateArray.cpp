    // void reverse(vector<int>& nums,int l, int h)
    // {
    //     while(l<h)
    //     {
    //         swap(nums[l],nums[h]);
    //         l++;
    //         h--;
    //     }
    // }
     void rotate(vector<int>& nums, int k) {
         
        int n = nums.size();
        k = k%n;
        // reverse(nums,0,n-1);
        // reverse(nums,k,n-1);
        // reverse(nums,0,k-1);      
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin() + k,nums.end());
        }   
