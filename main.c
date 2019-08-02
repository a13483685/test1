#include <stdio.h>
#include "utils.h"
int main()
{
    function1();
    int isSuccessOpen = open();
    int data = init_uart(9600,1);
    int readData = read();
    int writeData = write();
    int isSuccessClose = close();
}
