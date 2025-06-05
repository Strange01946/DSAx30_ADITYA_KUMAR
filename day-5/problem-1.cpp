class Solution {
public:
    int myAtoi(string s) {
        //"    183"--->183
        //"   -429"--->429
        //"   +924"--->924
        // if num> maximum int return max int value
        //if num less than min int return min int
        int num=0;
        int i=0;
        int n=s.length();
        //remove spaces
        while(i<n && s[i]==' '){
            i++;
        }
        //get sign
        int sign=1;
        if(s[i]=='+'){
            sign=1;
            i++;
        }
        else if(s[i]=='-'){
            sign=-1;
            i++;
        }
        //obtain integer
        while(i<n && isdigit(s[i])){
            int digit=s[i]-'0'; //converting into int by ascii values
            //rounding case
        if(num>(INT_MAX-digit)/10) {
                     if(sign==1){
                        return INT_MAX;
                     }
                     else if(sign==-1){
                        return INT_MIN;
                     }
        }
            num=num*10+digit;
            i++;
        }
        
        return num*sign;
    }
};