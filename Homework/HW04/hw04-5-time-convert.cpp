/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/


#include<stdio.h>

int main(){

    int Day;

    printf("Input Days : \n");
    scanf("%d", &Day);

    //int DtoS;
    //Dtos = Day * 24 * 60 * 60 ;
    // printf("%d days = %d seconds", DtoS);

    printf("%d days = %d seconds", Day, Day *86400);


    return 0 ;
}