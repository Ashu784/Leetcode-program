#include <bits/stdc++.h> 
string reverseString(string str)
{
	int n = str.size();
	for (int i=0; i < n/2; ++i)
	{
		swap(str[i], str[n-i-1]);
	}	
	return str;
}
