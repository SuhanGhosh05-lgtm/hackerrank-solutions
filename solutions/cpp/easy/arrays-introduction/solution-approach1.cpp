// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true
// Problem     Arrays Introduction
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-11-25, 08:14 p.m.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,i;
    cin >> N;
    int A[N];  
    for(i=0;i<N;i++){
        cin >> A[i];
    }
    /*printing array in reverse order*/
    for(i=N-1;i>=0;i--){
        cout << A[i]<<" ";
    }
    return 0;
}
