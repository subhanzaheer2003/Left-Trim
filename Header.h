#pragma once
#include<iostream>
#include<string>
using namespace std;
string ltrim(string& s, char c)
{
	string::iterator p;
	for (p = s.begin(); p != s.end() && *p++ == c;);
	if (*p != c)p--;
	s.erase(s.begin(), p);
	return s;
}
