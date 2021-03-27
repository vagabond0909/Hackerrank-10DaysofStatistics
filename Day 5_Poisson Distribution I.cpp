#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int factorial(int n)
{
    if(n == 1 || n == 0)
    return 1;
    else
    return n * factorial(n-1);
}

double poisson(double k, double lamda)
{
    double ans = pow(lamda,k)/(pow(2.71828, lamda) * factorial(k));
    return ans;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double lamda,k;
    cin>>lamda>>k;
    
    cout<<fixed<<setprecision(3)<<poisson(k, lamda)<<endl;
    return 0;
}

