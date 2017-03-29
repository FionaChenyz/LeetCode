class Solution {
public:
	int addDigits(int num) {
		int sum=0;
		int result;
		while (num)
		{
			sum += num % 10;
			num /= 10;
		}
		if (sum > 9)
		{
			result = addDigits(sum);
		}
		else
			result = sum;
			return result;
	}
};
