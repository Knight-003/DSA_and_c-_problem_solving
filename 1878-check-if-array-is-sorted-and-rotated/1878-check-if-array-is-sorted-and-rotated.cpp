class Solution {
public:
    bool check(vector<int>& nums) {
        int ckk=0;
        int nofequal=0;
        for(int i =0;i<nums.size();i++){
             
             if(nums[i]<=nums[(i+1)%nums.size()]){
               
                cout<<nums[0];

                 if(nums[i]==nums[(i+1)%nums.size()]){
                     nofequal++;
                 }

                
             }else {
                 ckk = ckk+1;
             }


        }
        if(ckk==1||nofequal==nums.size()){
            return true;
        }
        else{
            return false;
        }
    }
};