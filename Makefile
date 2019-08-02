LIB_DIR=lib
LIB_SRC=lib/test.c
LIB_NAME=test

all:shared_lib
	gcc -o main main.c utils.c -L lib -ltest -Wl,-rpath "lib"

shared_lib:
	gcc -c -fPIC -o ${LIB_DIR}/test.o ${LIB_SRC}
	gcc -fPIC -shared -o ${LIB_DIR}/libtest.so ${LIB_DIR}/test.o

clean:
	rm ${LIB_DIR}/*.o ${LIB_DIR}/*.so
