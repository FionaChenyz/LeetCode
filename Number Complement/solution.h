class Solution {
public:
    int findComplement(int num) {
        int mask=INT_MAX;
        while(mask&num)
        {
            mask<<=1;
        }
    return (~mask)^num;
    }
};
