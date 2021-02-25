#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int X[n];
    int W[n];
    for(int i=0; i<n; i++)
    {
        cin>>X[i];
    }
  
    for(int i=0; i<n; i++)
    {
        cin>>W[i];
    }
    
    double sum = 0;
    double numrator = 0;
    for(int i = 0; i<n; i++)
    {
        numrator += (X[i] * W[i]);
        sum += W[i];
    }
    
    double ans = (numrator/ sum);
    
    cout << fixed << setprecision(1) << ans;
    return 0;
}

