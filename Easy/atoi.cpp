class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;

        //step 1: Ignore leading whitespaces
        while(i < n && s[i] == ' '){
            i++;
        }

        //step 2: Check for sign + -
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        //step 3: Read digits and construct the number
        long long result = 0; // use long long to handle overflow during  computation
        while(i < n && isdigit(s[i])){
            result = result * 10 + (s[i] - '0');

            //step 4: Clamp result if it goes out of bounds
            if (sign * result > INT_MAX){
                return INT_MAX;
            }

            if(sign * result < INT_MIN){
                return INT_MIN;
            }
            i++;
        }

        //step 5: return the final result
        return static_cast<int> (sign * result);
    }        
};