//Mike Carrigan

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convert_to_hex (char* hex_string1){
    int len = strlen(hex_string1);
    int value=0, placeValue = 1;

    for(int i = (len-1); i>=0; i--){
        char temp = hex_string1[i];
       
        if(temp >= '0' && temp <= '9'){
          
            value += (temp - 48) * placeValue;        //use 48 as ASCII 0 = 48
        }
        else if(temp >= 'A'  && temp <= 'F'){
           
            value += (temp - 55) * placeValue;       //use 55 because ASCII A = 65
        }
        else if(temp >= 'a' && temp <= 'f'){
            value += (temp - 87) * placeValue;       //Use 87 because ASCII a = 97
        }
        placeValue = placeValue * 16;                   //Adapt for place value
    }

    return value;
}

char* remove_substring (char* s1){

    char* s2 = strstr(s1, "&&|");       //Locates the first time &&| is used and saves the memory address
   
    int diff = s2-s1;                   //used to find the array location of first char in delimeter
    char* s3 = malloc(strlen(s1)+1);
    char* s4 = malloc(strlen(s1)+1);

    memmove(s3,s1,diff);                //copys all of string leading up to delimeter to new string
    strcpy(s4,&s1[diff+3]);             //copys all of string after delimeter to new string
    strcat(s3,s4);                      //concatenates the before delimeter and after delimeter strings

    return(s3);
}