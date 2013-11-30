#include <iostream>
#include <cmath>

using namespace std;

//bool Prime[1000000]={0};

bool isPrime(long i)
{
    int j;
    if(i < 0)
        i *= -1;
    if((i % 2 == 0 && i != 2) || i == 1)
        return false;
    for(j = 3; j <= sqrt(i); j += 2)
        if(i % j == 0)
            return false;
    return true;
}

int main ()
{
    int max = 0, ans;
    int n;
    int a, b;
    for (a = -999; a < 1000; a++)
        for (b = -999; b < 1000; b += 2)
        {
            if(!isPrime(b))
                continue;
            n = 0;
            while(isPrime(n*n + n*a + b))
                n++;
            if (max < n)
            {
                max = n;
                ans = a*b;
            }
        }
    cout << ans << endl;
}
