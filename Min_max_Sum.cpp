/* Given five positive integers, find the minimum and maximum values that can be calculated 
by summing exactly four of the five integers. Then print the respective minimum and maximum 
values as a single line of two space-separated long integers. */
#include<iostream>

using namespace std;

void min_max(long int* arr)
{
    long int max= 0,min = 0;
    for(int i = 0; i < 4; i ++)
    {
        min += *(arr + i);  
    }
    
    for(int i = 4; i > 0 ; i --)
    {
        max += *(arr + i);
    }
    
    cout<<min<<" "<<max;
}

void insertion_sort(long int* arr)
{
    long int temp,j;
    for(int i = 1 ; i < 5 ; i ++)
    {
        temp = *(arr + i);
        j = i -1;
        
        while((j >= 0) && ((*(arr + j)) > temp))
        {
            *(arr + j + 1) = *(arr + j);
            j = j - 1;
        }
        *(arr + j + 1) = temp;
    }
}

int main()
{
    long int arr[5];
    
    for(int i = 0; i < 5 ; i ++)
    {
        cin>>*(arr + i);
    }
    
    insertion_sort(arr);
    min_max(arr);
    
    return 0;
}
