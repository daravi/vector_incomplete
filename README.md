First try compiling with a.h:
 `clang++ test.cpp --std=c++17`

 Success. Now try compiling with b.h included instead:
 `clang++ test.cpp b.cpp --std=c++17`

 Getting a compile error. Now try compiling with c.h:
 `clang++ test.cpp c.cpp --std=c++17`

 Success.