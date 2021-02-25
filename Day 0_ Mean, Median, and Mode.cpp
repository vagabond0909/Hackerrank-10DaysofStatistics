#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    float arr[n];
    float sum = 0;
    for(int i=0; i<n; i++) 
    {
        cin>>arr[i];
        sum = sum + arr[i];
    }
    
    sort(arr, arr + n);
    
    float mean = sum/n;
    cout<<mean<<endl;
    
   
    
    float median;
    int mid;
    mid = (n/2)-1;
    median = ((arr[mid] + arr[mid+1])/2);
    cout<<median<<endl;
    
    int number = arr[0];
    int mode = number;
    int count = 1;
    int countMode = 1;

for (int i=1; i<n; i++)
{
      if (arr[i] == number) 
      { // count occurrences of the current number
         ++count;
      }
      else
      { // now this is a different number
            if (count > countMode) 
            {
                  countMode = count; // mode is the biggest ocurrences
                  mode = number;
            }
           count = 1; // reset count for the new number
           number = arr[i];
  }
}
cout <<mode<< endl;
    return 0;
}

