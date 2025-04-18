class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        if(n==0) return 0;
        vector<bool> prime(n,true);  //all are prime marked alraedy
        prime[0]=false,prime[1]=false;
        for(int i=2;i<n;i++){
            if(prime[i]==true){
                count++;
                int j=2*i;
                while(j<n){
                    prime[j]=false;
                    j+=i;
                }
            }
        }
        return count;
    }
};