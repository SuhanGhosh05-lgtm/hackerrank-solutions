// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/attribute-parser/problem?isFullScreen=true
// Problem     Attribute Parser
// Difficulty  Medium
// Subdomain   Strings
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-11-27, 07:43 p.m.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
       int n,q;
       cin >> n >> q;
       cin.ignore();
       map<string,string> mp;
       stack<string>st;
        for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);

        if (line[1] == '/') {
            st.pop();
        }
        else {
            stringstream ss(line);
            string tag, attr, eq, value;

            ss >> tag;

            tag = tag.substr(1);

            if (tag.back() == '>') {
                tag.pop_back();
            }

            string fullTag;

            if (!st.empty()) {
                fullTag = st.top() + "." + tag;
            }
            else {
                fullTag = tag;
            }

            st.push(fullTag);

            while (ss >> attr >> eq >> value) {
                if (value.back() == '>') {
                    value.pop_back();
                }

                value = value.substr(1, value.length() - 2);

                mp[fullTag + "~" + attr] = value;
            }
        }
    }

    while (q--) {
        string query;
        cin >> query;

        if (mp.find(query) != mp.end()) {
            cout << mp[query] << endl;
        }
        else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
