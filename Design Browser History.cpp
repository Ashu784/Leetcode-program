class Browser
{
    vector<string> history;
	    int pos;
    	int end;
    public:
    Browser(string &homepage)
    {
        pos = 0;
        end = 0;
        history.push_back(homepage);
    }
    void visit(string &url)
    {
        pos += 1;
        if(pos == history.size())
        {
            history.push_back(url);
        }
        else
        {
            history[pos] = url;
        }
        end = pos;
    }
    string back(int steps)
    {
        pos = max(0, pos - steps);
        return history[pos];
    }
    string forward(int steps)
    {
        pos = min(end, pos + steps);
        return history[pos];
    }
};
