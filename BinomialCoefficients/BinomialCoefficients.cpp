//
//  BinomialCoefficients.cpp
//  BinomialCoefficients
//
//  Created by Aemon Zhou on 16/07/23.
//

#include "BinomialCoefficients.hpp"

using namespace std;

int BFRecursion(int N, int k){
    if(k == 0) return 1;
    if(N == k) return 1;
    //if N is not equal to k, then N must be larger than k.
    //and if k is not 0, then k must be larger than 0.
    //thus 0 < k < N is definitely true.
    //Recursive case:
    return BFRecursion(N - 1, k) + BFRecursion(N - 1, k - 1);
}

int BFDriver(int N, int k){
    if(k <= 0 || k >= N){
        throw invalid_argument("Please ensure 0 < k < N is ture, first argument is N, and second argument is k.");
    }
    return BFRecursion(N, k);
}
