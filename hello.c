#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int  a;
    char str2[32];

}hello_test;

int hello(hello_test *str)
{
    printf("hello %s\n%d\n", str->str2, str->a);
    return 0;
}

#if 0
void main()
{
    hello_test aaa;
    memset(&aaa, 0x0, sizeof(hello_test));
    strcpy(aaa.str1,"zr");
    strcpy(aaa.str2,"zs");

    hello(&aaa);
}
#endif
