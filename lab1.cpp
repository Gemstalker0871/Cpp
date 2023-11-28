//WRITE A PROGRAM TO FIND WHETHER NUMBER IS PRIME OR NOT
#include<iostream>
using namespace std;
int main()
{
    int n, i, flag=0;

    cout<<"Enter number";
    cin>>n;

    for(i=1; i<=n/2 ; i++)
    {
        
        if(n%i==0)
        {
            flag++;
            
        }
    }

    if (flag == 1)
    {
        cout<<"Prime";
    }

    else
    {
        cout<<"Nope";
    }
}