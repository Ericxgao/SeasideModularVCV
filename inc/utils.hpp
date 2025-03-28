#pragma once
#include <random>
#include <assert.h>

int weightedRandom(int weights[],int num_choices) {
    int sum_of_weight = 0;

    for(int i=0; i<num_choices; i++) {
        sum_of_weight += weights[i];
    }
    int rnd = std::rand() % sum_of_weight;

    for(int i=0; i<num_choices; i++) {
        if(rnd < weights[i]) {
            return i;
        }
        rnd -= weights[i];
    }
    #ifdef METAMODULE
    return 0;
    #else
    assert(!"we should not ever get to this place");
    #endif
}

