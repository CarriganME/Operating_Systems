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


int main(int argc, char const *argv[])
{
    int n1, n2, n3, n4, n5, min, max, yes = 0;
    float average;

    printf("Enter 5 numbers:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);

    min = findMin(n1,n2,n3,n4,n5);
    max = findMax(n1,n2,n3,n4,n5);
    yes = search(n1,n2,n3,n4,n5);
    average = findAverage(n1,n2,n3,n4,n5);

    printf("The min is %d\n",min);
    printf("The max is %d\n",max);
    printf("The average is %.2f\n",average);
    if(yes == 0){
        printf("You did not enter the number 5\n");
    }
    else{
        printf("You entered the number 5\n");
    
    }

    return 0;
}
