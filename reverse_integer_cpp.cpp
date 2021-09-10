#include <iostream>
#include <vector>
#include <math.h>  
using namespace std;
class Solution {
public:
   
    int reverse(long long int x) {
        long long int number = abs(x) ; 
        long long int final_number = 0 ;
        int something = 0;
        int counting = 0 ;

        while (number > 0 ){
            counting = counting +1 ;
            something = number %10;
            final_number = final_number + something*pow(10,int(log10(number) + 1));

            number = number /10;
        }
        final_number = final_number /10;
        if (x < 0){
            final_number = -final_number;
        }
        if (final_number < -pow(2,31) || final_number > pow(2,31)-1 ){
            return 0 ;
            exit(0);
        }
        return final_number ; 
    }
};
