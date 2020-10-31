public:
    vector<int> res = {-1,-1};
    void firstOccurence(vector<int>& nums, int target){
        int l=0,h=nums.size()-1;
        
        while(l<=h){
            int mid = l+ (h-l)/2;
            
            if(nums[mid]==target) {
                res[0] = mid;
                h = mid-1;
            }
            
            else if(nums[mid] < target) l=mid+1;
            else h= mid-1;
        }
    }
    
    void lastOccurence(vector<int>& nums, int target){
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid = l+ (h-l)/2;
            
            if(nums[mid]==target) {
                res[1] = mid;
                l=mid+1;
            }
            else if(nums[mid] < target) l=mid+1;
            else h= mid-1;
        }
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        firstOccurence(nums,target);
        lastOccurence(nums,target);
 
        return res;
    }
