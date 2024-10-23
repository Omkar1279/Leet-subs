int countNumbersWithUniqueDigits(int n) {
    int dp=1;
    int tmp=9;
    for(int i=1;i<=n&&i<10;i++){
        dp+=tmp;
        tmp*=(10-i);
    }
    return dp;
}