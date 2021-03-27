#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

double normalDist(double x, double mean, double stdDev) {
    return 0.5*(1 + erf((x - mean) / (stdDev * pow(2.0,0.5))));
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double maxWeight, numBoxes, mean, stdDev;
    cin >> maxWeight >> numBoxes >> mean >> stdDev;
    
    double newMean = numBoxes * mean;
    
    double newSd = sqrt(numBoxes) * stdDev;
    
    cout<< fixed<< setprecision(4)<< normalDist(maxWeight, newMean, newSd)<<endl; 
    return 0;
}

