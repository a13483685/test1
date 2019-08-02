#include <stdio.h>
#include "test.h"
int init_uart(int btl,int stop)
{
    printf("init_uart()");
    return btl;
}
int read()
{
    printf("read()");
    return 0;
}
int write(int data)
{
    printf("write()");
    return data;
}
int close()
{
    printf("close()");
    return 0;
}
int open()
{
    printf("open()");
    return 0;
}


