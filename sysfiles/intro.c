// Sun CPP is a minimal C Ide with basic functions .
#include <stdio.h>
void main()
{
 int a , b , divide , rev ;
printf("\n\n Number one = ") ;
scanf("%d",&a) ;
printf("\n Number two = ") ;
scanf("%d",&b) ;
if (b==0){ printf(" You can't divide %d by %d ",a,b) ; } 
divide = a/b   ; rev = a%b ;
printf("\n\n") ;
printf(" You can divide %d by %d  %d times and %d will remain  ",a,b,divide,rev) ;
 getch() ;
}