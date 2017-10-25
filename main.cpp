#include <iostream>
#include <cstring>

int foo(int x)
{
    if(x < 10)
    {
        return 100;
    }
    return 1000;
}

int main() {
    char *x = new char[10];
    x[10] = 'a';

    bool y;
    foo(y);

    char buff[] = "Hello, world!";
    memcpy(buff + 1, buff, 4);
    return 0;
}