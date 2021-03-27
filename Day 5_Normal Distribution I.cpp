#include <cmath>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

double poisson(double x, double mean, double sd)
{
    return 0.5 * (1 + erf((x-mean)/(sd * pow(2,0.5))));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    double mean, sd, n1, n2,n3;
    cin>> mean>>sd>>n1>>n2>>n3;
    
     cout<<setprecision(3)<<fixed<<poisson(n1,mean,sd)<<endl;
     cout<<setprecision(3)<<fixed<<poisson(n3,mean,sd) - poisson(n2,mean,sd)<<endl;
    return 0;
}

