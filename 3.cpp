//Answer: 6857

#include <iostream>
#include <cmath>
#include "Helper.h"//file not inlcuded in the commits
using namespace std;

int main() 
{
    int largest = 0;
    long long num = 600851475143;
    int root = sqrt(num) + 1;
    for(int i = root; i >= 2; i--) 
    {
        if(num % i == 0) {
            int factor = num / i;
            if(Helper::isPrime(factor))//to check if factor is prime 
            {
                if (factor > largest)
                    largest = factor;
            }
            if(Helper::isPrime(i)) 
            {
                if (i > largest)
                    largest = i;
            }
        }
    }
    cout << largest << endl;
    return 0;
}

