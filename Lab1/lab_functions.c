/*Mike Carrigan */

#include <stdio.h>

/*Find Minimum*/
int findMin(int n1, int n2, int n3, int n4, int n5){
    int min = n1;
    if (n2<min){
        min = n2;
    }
    if (n3<min){
        min = n3;
    }
    if (n4<min){
        min = n4;
    }
    if (n5<min){
        min = n5;
    }
    return min;

}

/*Find Maximum*/

int findMax(int n1, int n2, int n3, int n4, int n5){
    int max = n1;
    if (n2>max){
        max = n2;
    }
    if (n3>max){
        max = n3;
    }
    if (n4>max){
        max = n4;
    }
    if (n5>max){
        max = n5;
    }
    return max;

}

/*Find 5*/
int search(int n1, int n2, int n3, int n4, int n5){
    int yes = 0;
    if (n1==5 || n2==5 || n3==5 || n4==5 || n5==5){
        yes=1;
    }

    return yes;
}

/*Find Average*/

float findAverage(int n1, int n2, int n3, int n4, int n5){
    float f1 = n1;
    float average = (f1+n2+n3+n4+n5)/5;
    return average;
}