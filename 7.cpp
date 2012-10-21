//Answer: 104743

#include <iostream>
#include <cmath>
#include "Helper.h"
using namespace std;

int main() {
    int num = 0;
    int count = 0;
    for(int i = 2; count < 10001; i++) {
        if(Helper::isPrime(i)) {
            count++;
            num = i;
        }
    }
    cout << num << endl;
    return 0;
}

