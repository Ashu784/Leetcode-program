class Solution {
public:
    string removeDuplicateLetters(string s) {
        map<char, int> freq;
        stack<char> st;
        map<char, bool> visit;

        for(auto i : s) {
            freq[i]++;
        }

        for(auto i : s) {
            freq[i]--;
            if(visit[i]) {
                continue;
            }
            while(!st.empty() && st.top() > i && freq[st.top()] > 0) {
                visit[st.top()] = false;
                st.pop();
            }
            st.push(i);
            visit[i] = true;
        }

        string result = "";
        while(!st.empty()) {
            result = st.top() + result;  
            st.pop();
        }
        return result;
    }
};

