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
    double mean, sd, n1, n2;
    cin>> mean>>sd>>n1>>n2;
    
     cout<<setprecision(2)<<fixed<<(1- poisson(n1,mean,sd))*100<<endl;
     cout<<setprecision(2)<<fixed<<(1- poisson(n2,mean,sd)) * 100<<endl;
     cout<<setprecision(2)<<fixed<<poisson(n2,mean,sd) * 100<<endl;
    return 0;
}

