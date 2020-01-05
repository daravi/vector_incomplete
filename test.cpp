// #include "a.h" // << OK
#include "b.h" // << Compile error
// #include "c.h" // << OK

int main(int argc, char const *argv[])
{
    Bar b;
    return 0;
}