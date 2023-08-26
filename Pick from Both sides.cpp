int Solution::solve(vector<int> &a, int b) {
    int n=a.size()-1;
    int i;
    int curSum=0;
    for(i=0; i<b; i++) {

        curSum+=a[i];

    }

    int maxSum=curSum;
    for(i=b-1; i>=0; i--) {
        curSum-=a[i];
       // curSum+=a[i+(n-b)];
        curSum+=a[n--];
        maxSum=max(curSum,maxSum);
    }
    return maxSum;
}
