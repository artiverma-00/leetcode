class Solution {
public:
    int gcdOfOddEvenSums(int n) {
//for odd
        int sumOdd=n*n;
        //for even
        int sumEven= n*(n+1);

        return gcd(sumOdd,sumEven);
    }
};