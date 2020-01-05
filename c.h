#include <vector>

struct Foo;
struct Bar
{
    Bar();
    ~Bar();
    std::vector<Foo> foos;
};
