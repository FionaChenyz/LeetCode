Number Complement
---------------------------

这道题就是给了我们一个数，让我们求补数。
通过分析题目汇总的例子，知道需要做的就是每个位翻转一下就行了，但是翻转的起始位置是从最高位的1开始的，前面的0是不能被翻转的。

想到的部分！！
利用异或运算可以实现反转。

没有想到的部分！！
但是不知道如何处理从最高位的1开始反转的部分！！

总结三种方法：
1.这种方法时间复杂度较高，循环多次
class Solution {
public:
    int findComplement(int num) {
        bool start = false;
        for (int i = 31; i >= 0; --i) {
            if (num & (1 << i)) start = true;
            if (start) num ^= (1 << i);
        }
        return num;
    }
};

2.这种方法感觉很牛逼 但是我没有看懂！！！！
class Solution {
public:
    int findComplement(int num) {
        return (1 - num % 2) + 2 * (num <= 1 ? 0 : findComplement(num / 2));
    }
};
