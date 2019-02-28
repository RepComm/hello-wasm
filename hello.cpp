#include <stdio.h>
int main(int argc, char ** argv) {
    printf("Hello, world!\n");
}

extern "C"
{
    int test();
    void test2();
}

int test()
{
    return 31;
}

void test2()
{
    return;
}