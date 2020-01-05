#include <vector>

struct Foo;

struct Bar
{
    Bar() = default;
    virtual ~Bar() = default;
    std::vector<Foo> foos;
};

struct Foo
{
};

