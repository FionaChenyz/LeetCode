class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> out;
        vector<int>::iterator it;
        int flag=1;
        
        for(auto &elem:findNums)
        {
            
            for(it=find(nums.begin(),nums.end(),elem);it<nums.end();++it)
            {
                
                if((flag==1)&&(*(it+1)>elem))
                {
                   
                        out.push_back(*(it+1));
                        flag=0;
                    
                }
                
            }
            out.push_back(-1);
        }
        return out;
    }
};
