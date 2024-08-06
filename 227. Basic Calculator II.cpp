#include<bits/stdc++.h>
class Solution {
public:
    stack<char>opr;
    stack<int>op;
    int precedence(char ch) {
        if(ch == '+' || ch == '-')
            return 1;
        else if (ch == '*' || ch == '/')
            return 2;
        else
            return 0;
    }
    int doProcess(){
        int a = op.top();
        op.pop();
        int b = op.top();
        op.pop();
        char ch = opr.top();
        opr.pop();
        if(ch == '+')
            return b+a;
        else if(ch == '-')
            return b-a;
        else if(ch == '*')
            return b*a;
        else
            return b/a;
    }
    int calculate(string s) {
        for(int i=0; i<s.length(); i++){
            if(s[i] == ' ')
                continue;
            else if(isdigit(s[i])){
                int val = 0;
                while(i<s.length() && isdigit(s[i])) {
                    val = val*10+(s[i]-'0');
                    i++;
                }
                i--;
                op.push(val);
            }
            else{ //(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
                while(!opr.empty() && precedence(s[i]) <= precedence(opr.top())) {
                    int res = doProcess();
                    op.push(res);
                }
                opr.push(s[i]);
            }
        }
        while(!opr.empty()) {
            int res = doProcess();
            op.push(res);
            }
        return op.top();   
    }
};
