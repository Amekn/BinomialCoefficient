//
//  BinomialDynamic.cpp
//  BinomialCoefficients
//
//  Created by Aemon Zhou on 16/07/23.
//

#include "BinomialDynamic.hpp"
#include <stdexcept>
using namespace std;
//Dynamic programming technique used to reduce the amount of resources used.
int BFDynamic(int N, int k){
    //table[Rows][Column];
    //To compute C(N, k), we need to first compute C(N - 1, k - 1);
    int table[N+1][k+1];
    for(int i = 0; i <= k; i++){
        for(int j = i; j <= N-k+i; j++){
            if(i == 0)
            {
                table[j][i] = 1;
                continue;
            }
            if(i == j){
                table[j][i] = 1;
                continue;
            }
            table[j][i] = table[j-1][i] + table[j-1][i-1];
        }
    }
    //Return the results
    return table[N][k];
}

//Driver routine for calculating binomial coefficiewnts with dynamic programming technique.
int BFDynamicDriver(int N, int k){
    if(k <= 0 || k >= N){
        throw invalid_argument("Please ensure 0 < k < N is ture, first argument is N, and second argument is k.");
    }
    return BFDynamic(N, k);
}
