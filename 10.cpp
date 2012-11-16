/*Array prime contains 1 will index is not prime and 0 if index is prime
  */

#include<stdio.h>
#include <iostream>
using namespace std;

long long int  n=100000000;
bool prime[100000000];

int main()
{
    prime[1]=1;
    for(int i=4;i<n;i=i+2)
        prime[i]=1;
    for(int i=3;i*i<n;i=i+2)
    {
        for(int j=i*i;j<n;j=j+2*i)//Instead of j=j+i use j=j+2*i
        {
            prime[j]=1;
        }
    }
    long long sum=0;
    for(int i=2;i<2000000;++i)
    {
        if(prime[i]==0)
            sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}
