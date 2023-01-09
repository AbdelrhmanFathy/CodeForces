#include <iostream>
 
using namespace std;
 
int main() {
  
    int numberOfProblems;
    int d1,d2,d3;
    int count=0;
   
    
    cin>>numberOfProblems;
    
    for(int i=0;i<numberOfProblems;i++)
    {
        cin>>d1>>d2>>d3;
        if(d1+d2+d3>=2)
        {
            count++;
        }
    }
    
    cout<<count;
     
 
    return 0;
}
