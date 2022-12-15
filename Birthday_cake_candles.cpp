/* You are in charge of the cake for a child's birthday. You have decided the cake 
will have one candle for each year of their total age. They will only be able to blow 
out the tallest of the candles. Count how many candles are tallest. */
#include <iostream>

using namespace std;

int max_height(int *arr,int n)
{
    int temp = *(arr + n - 1);
    int count = 1;
    
    for(int i = n - 2; i >=0 ; i --)
    {
        if(*(arr + i) == temp)
        {
            count++;
        }else
        {
               break;
        }
    }
    
    return count;
}

void insertion_sort(int* arr, int n)
{
    int temp, j;
    
    for(int i = 1; i < n ; i ++)
    {
        temp = *(arr + i);
        j = i - 1;
         
        while((j >= 0) && (*(arr + j) > temp))
        {
            *(arr + j + 1) = *(arr + j);
            j --;                
        }
        *(arr + j + 1) = temp;        
    }
}

int main()
{
        int n;
        
        cin>>n;
        
        int candles[n];
        
        for(int i = 0 ; i < n ; i ++)
        {
            cin>>*(candles + i);
        }
        
        insertion_sort(candles,n);
        cout<<max_height(candles,n);
        
        return 0;
}