#include <vector>

struct Foo;
struct Bar
{
    Bar() = default;
    ~Bar() = default;
    std::vector<Foo> foos;
};
