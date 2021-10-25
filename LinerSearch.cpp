/******************************************************************************
Linear Search :
Linear Search is finding an element in an array by iterating from each element
of the array. Sorting is not required in Linear Search.
Example:
Array given = 8 3 5 7 1
Element to be Searched = 7
Answer = 4 Position
*******************************************************************************/
#include <iostream>
using namespace std;

void LinSearch(int a[ ], int n1, int n)     //Searching Function
{
    int flag=0;                             //You can also use boolean true/false
    for(int i=0; i<n; i++)
        if(a[i]==n1)
        {
            cout<<"The Element is found at "<<(i+1)<<" position";
            flag=1;
        }
    if(flag==0)                             //If element not found, it prints error message
        cout<<"Sorry the number is not found";
}

int main()
{
    int n, n1;
    cout<<"Enter the lenght and then array elements : ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    cout<<"------------ Your Array is ------------\n";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<"\n\nEnter the number you want to search in the Array : ";
    cin>>n1;                       //Element to be searched in the Array
    LinSearch(a, n1, n);                    //Function Calling
    return 0;
}

/*
Output :
Enter the lenght and then array elements : 6
5
6
2
8
1
3
------------ Your Array is ------------
5 6 2 8 1 3
Enter the number you want to search in the Array : 8
The Element is found at 4 position
*/
