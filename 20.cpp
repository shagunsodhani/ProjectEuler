//Answer: 648 

//100! calculated in java 

#include <iostream>
#include <cstdlib>
using namespace std;

string s =       "93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";

int sum(string s) {
    int answer = 0;
    for(unsigned int i = 0; i < s.length(); i++)
        answer += atoi(s.substr(i,1).c_str());
    return answer;
}

int main() {
    cout << sum(s) << endl;
    return 0;
}
