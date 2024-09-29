#include<string>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<char> v;
    
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            v.push_back(s[i]);
        }
        if (s[i] == ')') {
            if (v.empty()) {
                return false;
            } else {
                v.pop_back();
            }
        }
    }
    
    if (!v.empty())
        answer = false;

    return answer;
}