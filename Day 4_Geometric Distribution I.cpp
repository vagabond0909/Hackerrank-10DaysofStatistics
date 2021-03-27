#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double n1,n2,n;
    cin>>n1>>n2;
    cin>>n;
    
    double ans = pow((1-(n1/n2)),(n-1))*(n1/n2);
    
    cout<<setprecision(3)<< fixed<<ans<<endl;
    return 0;
}

