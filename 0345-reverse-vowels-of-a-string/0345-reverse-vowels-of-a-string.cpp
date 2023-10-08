class Solution {
    //Just to check wether charcters of s is vowel or not
    bool vowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
            return true;
        }
        return false;
    }
public:
    string reverseVowels(string s) {
        int low = 0;
        int end = s.size() - 1;

        while(low < end){

            //If low and end positions both are vowel then swap

            if(vowel(s[low]) && vowel(s[end]) ){
                swap(s[low], s[end]);
                low++;
                end--;
            }

            // if low position is not vowel then, low ko age badhao
            if(!vowel(s[low])){
                low++;
            }

            // if end postition is not vowel then, end ko peeche le ao

            if(!vowel(s[end])){
                end--;
            }
            
        }
        return s;    
    }
};