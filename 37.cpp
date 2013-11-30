#include <stdio>
#include <iostream>

using namespace std;

#define sz 1000001
#define mx 1001

bool p[sz];

long primeTable[78500],nPrime = 0;

void sieve()
{
    int i,j;

    p[0] = p[1] = true;
    for( i = 4; i <= sz; i += 2 )
        p[i] = true;

    primeTable[nPrime++] = 2;

    for( i = 3; i <= mx; i += 2 )
    {
        if(!p[i])
        {
            primeTable[nPrime++] = i;
            for( j = i * i; j <= sz; j += i )
                p[j] = true;
        }
    }

    for( i = mx + 2; i <= sz; i += 2 )
    {
        if(!p[i])
        {
            primeTable[nPrime++] = i;
        }
    }
}

bool isTruncatable(long n)
{
    long pow = 10;

    while( pow < n)
    {
        if(p[n%pow] || p[n/pow])
            return false;
        pow *= 10;
    }

    return true;
}


int main()
{
    long i,ans = 0;

    sieve();

    printf("Number of primes bellow 1 million is %ld\n",nPrime);

    for( i = 4; i < nPrime; i++)
    {
        if( isTruncatable(primeTable[i]) )
        {
            ans += primeTable[i];
            printf("%ld\n",primeTable[i]);
        }
    }

    printf("Sum of 11 truncatable primes is %ld\n",ans);


    return 0;
}

