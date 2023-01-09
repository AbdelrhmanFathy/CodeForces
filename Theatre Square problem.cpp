#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
  
    long long  m,n,a,rem1,rem2,res;
 
    cin>> m >> n >> a;
    
    rem1=ceil(m/(a*1.0));
    rem2=ceil(n/(a*1.0));
    
    
    res=rem1*rem2;
   
    
    cout<< res;
    
 
    return 0;
}
