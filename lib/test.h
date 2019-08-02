#ifndef __TEST_H
#define __TEST_H
#define VERSION "1.0"
int init_uart(int btl,int stop);
int read(void);
int write(int data);
int close();
int open();
#endif
