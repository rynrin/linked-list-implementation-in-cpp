# Linked list
    A simple linked list implementation in C++

## Build and run program:
```
linked_list_implementation$ make
g++   -c -o obj/linked_list.o src/linked_list.cpp
g++   -c -o obj/main.o src/main.cpp
g++   -o bin/main obj/linked_list.o obj/main.o

linked_list_implementation$ ./bin/main 

1. Insert
2. Delete
3. Search
4. Print
0. Exit

Enter you choice : 
```

## Build and run test:
```
linked_list_implementation$ cmake -S . -B build
-- The C compiler identification is GNU 10.2.1
-- The CXX compiler identification is GNU 10.2.1
...
-- Build files have been written to: .../my_project/build

linked_list_implementation$ cmake --build build
Scanning dependencies of target gtest
...
[100%] Built target gmock_main

linked_list_implementation$ cd build && ctest
Test project .../my_project/build
    Start 1: MainTest.IsDigitFunctionTest
1/1 Test #1: MainTest.IsDigitFunctionTest ........   Passed    0.00 sec

100% tests passed, 0 tests failed out of 1

Total Test time (real) =   0.01 sec
```