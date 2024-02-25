bool check(int mid, vector<int> &A, int B)
{
    if(A[mid] <= B) return true;
    
    return false;
}
int Solution::solve(vector<int> &A, int B) 
{
    int N = A.size();
    int low = 0, high = N-1;
    int ans = 0;
    
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(check(mid, A, B))
        {
            ans = mid + 1;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return ans;
}
