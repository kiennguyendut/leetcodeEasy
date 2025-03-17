#include <thread>
#include <iostream>

// void hello(){
//     std::cout << "hello thread! \n";
// }

class Hello {
public:
    void operator()() { std::cout << "Hello, Functor Thread! \n"; }
};

int main() {

    Hello hello;

    std::thread thr(hello);
    thr.join();
}