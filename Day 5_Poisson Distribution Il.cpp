#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double a,b;
    cin>>a>>b;
    
    double Ca = 160 + (40 * (a+(pow(a,2))));
    cout<<Ca<<endl;
    double Cb = 128 + (40 * (b+(pow(b,2))));
    cout<<Cb<<endl;   
    return 0;
}

