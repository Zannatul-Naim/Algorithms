class Solution{
    public:

    long long power(int N,int R)
    {
       if(R == 0) return 1;
       
       long long temp = power(N, R/2);
       temp = (temp*temp) % 1000000007;
       
       if(R%2) return (temp*N)% 1000000007;
       else return temp%1000000007;
        
    }

};
