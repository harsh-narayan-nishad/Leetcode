class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        int n = s.size();

        for(int i=0; i<n; i++){
            if(s[i] == '{' ||s[i] == '(' ||s[i] == '[' ){
                stack.push(s[i]);
            }

            else{
                if(stack.empty()) return false;
                char c=stack.top();
                if((s[i]==']' && c =='[') ||(s[i]=='}' && c =='{') ||(s[i]==')' && c =='(')){
                    stack.pop();
                }
                else{
                    return false;
                }
            }
        }

        if(stack.empty()){
            return true;
        }

        return false;
        
    }
};