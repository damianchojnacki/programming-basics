//
// Created by Damian on 07.12.2020.
//

#ifndef ZADANIE3_SILNIA_H
#define ZADANIE3_SILNIA_H

long long powerIteration(int number){
    long long power = 1;

    for(int i = number; i > 1; i--){
        power *= i;
    }

    return power;
}

long long powerRecursive(int number){
    if (number != 0)
        return (number * powerRecursive(number - 1));
    else
        return 1;
}

#endif //ZADANIE3_SILNIA_H
