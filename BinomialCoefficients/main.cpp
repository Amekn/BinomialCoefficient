//
//  main.cpp
//  BinomialCoefficients
//
//  Created by Aemon Zhou on 16/07/23.
//

#include <iostream>
using namespace std;

#include "BinomialCoefficients.hpp"

int main(int argc, const char * argv[])
{
    try
    {
        cout << BFDriver(3, 3);
    }
    catch(invalid_argument &e){
        cerr << e.what() << endl;
        return -1;
    }
    
    return 0;
}
