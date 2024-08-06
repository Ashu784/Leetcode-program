#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int sum = 0, num = 0, flag = 1;
        for(int i = 0; i < s.length(); i++) {
            char c = s[i];
            if(isdigit(c)) {
                num = num * 10 + (c - '0');
            } else if(c == '+') {
                sum += flag * num;
                num = 0;
                flag = 1;
            } else if(c == '-') {
                sum += flag * num;
                num = 0;
                flag = -1;
            } else if(c == '(') {
                st.push(sum);
                st.push(flag);
                sum = 0;
                flag = 1;
            } else if(c == ')') {
                sum += flag * num;
                num = 0;
                sum *= st.top(); 
                st.pop(); 
                sum += st.top(); 
                st.pop();
            }
        }
        sum += flag * num;
        return sum;
    }
};
