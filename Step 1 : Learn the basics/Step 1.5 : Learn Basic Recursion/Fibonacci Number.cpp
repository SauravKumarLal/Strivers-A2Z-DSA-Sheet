//leetcode

class Solution {
public:
    int fib(int n) {
        int a=0, b=1, c;
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        else if(n>=1)
            return fib(n-1) + fib(n-2);
        return 0;
    }
};
