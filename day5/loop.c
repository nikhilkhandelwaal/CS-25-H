#include<stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    

    /*
    1. i=1 => 1<=10 => true => Print 1
    2. i++ => 1++ => 2 => 2<=10 => true => Print 2
    3. i++ => 2++ => 3 => 3<=10 =>  true => Print 3
    3. i++ => 2++ => 3 => 3<=10 =>  true => Print 4
    3. i++ => 2++ => 3 => 3<=10 =>  true => Print 5
    3. i++ => 2++ => 3 => 3<=10 =>  true => Print 6
    3. i++ => 2++ => 3 => 3<=10 =>  true => Print 7
    3. i++ => 2++ => 3 => 3<=10 =>  true => Print 8
    3. i++ => 2++ => 3 => 3<=10 =>  true => Print 9
    3. i++ => 9++ => 10 => 10<=10 =>  true => Print 10
    3. i++ => 10++ => 11 => 11<=10 =>  False => Loop End


    */

    return 0;
}

/*
    For Loop
    While Loop
    do while Loop

    1. Starting Point
    2. End Point
    3. Increment or decrement
*/