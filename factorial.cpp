#include<iostream>
using namespace std;

int main()
{
    //n! = 1*2*3*4*...n
    int n;
    cin>>n;
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<<"The factorial is "<<fact<<endl;
}

/*
n=5
fact = 1
i=1
fact = 1*1
fact = 1
i=2
fact = 1*2=2
i=3
fact = 2*3=6
i = 5
fact = 24*5
*/