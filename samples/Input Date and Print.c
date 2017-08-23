// a Sample  Dat Input programe for c 
// Sun C Editor
// 21.8.2017
// Date input format is  XX-XX/XXXX
#include <stdio.h>
void main() {
    int date , month , year ;
    char separator [2] ;
    printf("Input the date : ") ;
    scanf("%d%[/-]%d%[/-]%d",&date,separator,&month,separator,&year) ;
    printf(" Date = %d \n ",date) ;
    printf(" Month = %d \n ",month) ;
    printf(" Year = %d \n ",year) ;
    getch() ;
}