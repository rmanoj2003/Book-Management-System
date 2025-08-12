#include<iostream>
using namespace std;

int main()
{
    int a[5];
    for(int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    //search in the array
    //5 1 2 4 8
    //0 1 2 3 4
    cout<<"Enter the search element: ";
    int n, idx = -1;
    cin >> n;
    for(int i = 0; i < 5; i++)
    {
        if(a[i] == n)
        {
            idx = i;
            break;
        }
    }

    if(idx == -1)
        cout<<"Element not found"<<endl;
    else
        cout<<"Found at index: "<<idx<<endl;
    return 0;
}