// Complete the function solveMeFirst to compute the sum of two integers.

#include <iostream>

using namespace std;

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<add(a,b)<<endl;
    
    return 0;
}