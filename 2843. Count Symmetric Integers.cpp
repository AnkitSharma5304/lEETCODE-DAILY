class Solution {
    public: // done by me brute force 
        int countSymmetricIntegers(int low, int high) {
            int cnt=0;
            for(int i=low ; i<=high ; i++){
                if((i>=10 && i<100) || (i>=1000 && i<10000)){
                    int num=i;
                    vector<int> temp;
                    while(num>0){
                       int x=num%10;
                       temp.push_back(x);
                       num=num/10;
                    }
                    int left=0;
                    int right=0;
                    int n=temp.size();
                    for(int j=0 ; j<n/2 ; j++){
                       left=left+temp[j];
                    }
                    for(int j=n/2 ; j<n ; j++){
                        right=right+temp[j];
                    }
                    if(right==left){
                        cnt++;
                    }
                }
    
            }
            return cnt;
        }
    };