// Problem Link: https://www.interviewbit.com/problems/last-digit-k-count/

int Solution::solve(int A, int B, int C) 
{
    int i = 0, j = 0;
    for(i=A; i<=B; i++) if(i % 10 == C) break; 
    if(i > B) return 0;
    
    for(j=B; j>=A; j--) if(j % 10 == C) break;
    
    int count = ((j - i) / 10) + 1;
    return count;
}
