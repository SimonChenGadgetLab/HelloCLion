#include <iostream>
#include "gcd.hpp"

int main() {
    using namespace std;

    cout<<gcd(12,24)<<endl;

    return 0;
}

// Greatest Common Denominator
// PRE : a is a positive integer
// PRE : b is a positive integer
// POST : a and b are unchanged
// RETURN : the greatest common denominator of
// a and b.
int gcd ( const int a, const int b){
    if(a == 0 || b == 0){
        return 0;
    }

    if( a > b){
        for(int i = b; i > 1; i--){
            if(b % i == 0 && a % i == 0){
                return i;
            }
        }
    } else if( b >= a){
        for(int i = a; i > 1; i--){
            if(b % i == 0 && a % i == 0){
                return i;
            }
        }
    }

    return 1;
}