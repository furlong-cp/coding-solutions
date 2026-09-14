class Solution {
public:
    int reverse(int n) {
        //int k = n ; 
        vector <int> v ; 
        while (n!=0){
            int a = n%10 ;
            v.emplace_back(a);
            n/=10 ; 
        }
        long long ans= 0 ; 

        for (int i = 0 ; i < v.size(); i++){
            ans = ans*10 + v[i] ;  
        }
        if (ans>INT_MAX || ans < INT_MIN) return 0 ; 
        return ans ; 
    }

};