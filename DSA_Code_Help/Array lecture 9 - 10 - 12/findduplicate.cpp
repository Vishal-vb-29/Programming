    int findDuplicate(vector<int>& nums) {
     int ans=nums[0];
     for(int i=0;i<nums.size();i++) 
     {
         if((ans^nums[i])==0) return nums[i];
         else{ ans=nums[i];
            
         }
         

         }

    return 0;
     }    