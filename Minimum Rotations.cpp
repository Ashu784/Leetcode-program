#include <bits/stdc++.h> 
int minimumRotations(int n, string s)
{
	string doubled = s+s;
	for(auto i=1; i<n; ++i){
		if(doubled.substr(i,n)==s)
			return i;

	}
	return n;
}
