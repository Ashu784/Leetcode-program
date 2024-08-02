#include <bits/stdc++.h> 
class Browser
{
    public:
    vector<string>history;
    int pos;
    Browser(string &homepage)
    {
        history.push_back(homepage);
        pos = 0;
    }

    void visit(string &url)
    {
        history.erase(history.begin()+pos+1, history.end());
        history.push_back(url);
        pos++;

    }

    string back(int steps)
    {
        pos = max(0, pos - steps);
        return history[pos];
    }

    string forward(int steps)
    {
        pos = min((int)history.size() - 1, pos + steps);
        return history[pos];
    }
};
