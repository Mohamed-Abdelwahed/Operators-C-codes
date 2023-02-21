#include <stdio.h>
int main()
{
    int a=1,b=1,c,d; // a = 1  , b=2
    c=a++||b++; //a=1 and inc next line , b =1
    d=--b && a--; // b=0 , a = 2 
    printf("a=%i\nb=%i\nc=%i\nd=%i\n",a,b,c,d);
    return 0;
}
