//
//  main.cpp
//  BinomialCoefficients
//
//  Created by Aemon Zhou on 16/07/23.
//

#include <iostream>
#include <stdexcept>
#include <ctime>
using namespace std;

#include "BinomialCoefficients.hpp"
#include "BinomialDynamic.hpp"

int main(int argc, const char * argv[])
{
    try
    {
        clock_t start = clock();
        cout << BFDynamicDriver(2000, 1000) << endl;
        clock_t end = clock();
        
        long double time_elapsed_ms = 1000.0 * (end - start) / CLOCKS_PER_SEC;
        cout << "CPU Running Time: " << time_elapsed_ms << " ms." << endl;
    }
    catch(invalid_argument &e){
        cerr << e.what() << endl;
        return -1;
    }
    
    return 0;
}
