#include <stdio.h>
int main()
{
    int x,y;
    int a = 5, b = 5, c = 10, result;
    result = (a == b) && (c > b);  //  1   &&   1  =  1
    printf("(a == b) && (c > b) equals to %d \n", result); // 1 True
    result = (a == b) && (c < b); // 1  &&  0   =  0
    printf("(a == b) && (c < b) equals to %d \n", result); // 0  false
    result = (a == b) || (c < b); //1   ||  0   = 1
    printf("(a == b) || (c < b) equals to %d \n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) equals to %d \n", result);
    result = !(a != b); // 1
    printf("!(a == b) equals to %d \n", result);
    result = !(a == b);
    printf("!(a == b) equals to %d \n", result);

    return 0;
}
