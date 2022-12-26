#include<stdio.h>
void main(){
    // int ch=4;
    // switch (ch)
    // {
    // case 1:
    //    printf("fan is on!");
    //     break;
    // case 2:
    // printf("light is on! ");
    // break;

    // case 3:
    // printf("AC is on!");
    // break;
    // default: 
    // printf("invalid input!!");
    //     break;
    // }

    char ch='y';
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':                      
    case 'u':

        printf("vowel!!");
        break;
    
    default:
    printf("consonant!!!");
        break;
    }
}