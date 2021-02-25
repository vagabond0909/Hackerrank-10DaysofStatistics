#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    double mean = sum/n;
    double stdDev = 0;
    for(int i = 0; i<n; i++)
    {
        stdDev += pow((arr[i] - mean), 2);
    }
    double SD;
    SD = sqrt(stdDev/n);
    
    cout<<fixed<<setprecision(1)<<SD<<endl;
    return 0;
}

