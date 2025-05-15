// firstly learn how to set and unset a bit 
// for setting a bit x=x | (1<<bit)
// for unsetting a bit x = x & ~(1<<bit)
class Solution { // approach two us also there in codestory with mik 
public:
bool isSet(int &x , int bit){ // to check if a given bit is set or not we use this function if the bit is set it will return 1 thst is true and if it not set it will return false i:e 0
    return x & (1<<bit); // we can check it furthar for unset as well by using a negation sign in front of it..
}
int setBit(int &x , int bit){ // used to set a particular bit 
    return x=x | (1<<bit);
}
int unsetBit(int &x , int bit){ // used to unset a particular bit  remember this for future it may we useful manytimes 
    return x=x & ~(1<<bit);
}
    int minimizeXor(int num1, int num2) {
        int x=num1;
        int reqbit=__builtin_popcount(num2); // this is a built in function for counting the number of setbits int the functions remember this for future it is useful 
        int currbit=__builtin_popcount(x);
        int bit=0;
        if(currbit<reqbit){
            while(currbit<reqbit){
                if(!isSet(x,bit)){
                   setBit(x,bit);
                   currbit++;
                }
                bit++;
            }
        }
        else{
            while(currbit>reqbit){
                if(isSet(x,bit)){
                 unsetBit(x,bit);
                 currbit--;
                }
                bit++;
            }
        }
        return x;

    }
};