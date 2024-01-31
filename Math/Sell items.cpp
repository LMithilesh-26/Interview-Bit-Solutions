// Problem Link: https://www.interviewbit.com/problems/sell-items/

int Solution::solve(int A, int B) 
{
    int days = ceil(double(B) / A);
    // cout << days << " ";
    
    return ceil(double(days) / 5);
}
