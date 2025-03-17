#include <iostream>
#include <thread>
#include <string>

using namespace std::literals;
using namespace std;

// void func(string && str){
//     cout << "Ownership of " << str;
// }


// void hello(std::string& str) {
//     str = "xyz";
// }

// class greter {
// public:
//     void hello() {
//         std:cout << "Hello, Member Function Thread";
//     }
// };

void hello() {
    std:cout << "Hello from thread with ID " << std::this_thread::get_id() << endl;
    std::this_thread::sleep_for(2s);
    cout << "wake up";
}



int main(){
    //display the main thread's ID
    cout << "Main thread has ID " << std::this_thread::get_id() << endl;

    //create thread object
    std::thread thr(hello);

    //display the child thread's ID
    cout << "Hello thread has ID " << thr.get_id() << endl;

    //wait for the thread to complete
    thr.join();

    cout << "Hello thread now has ID " << thr.get_id() << endl;



/*
    string str = "moveable ";
    cout << "Start thread" << endl;

    thread thr(func, move(str));
    thr.join();

    cout << "Do I still have any data " << " ";
    cout << (str.empty() ? "no" : "yes") << ".\n";
*/    
/*
    std::string str = "abc";
    std::thread thr(hello, std::ref(str));
    thr.join();

    cout << "str is now" << str << endl;
*/

    // greter greet;

    // std:thread thr(&greter::hello, &greet);
    // thr.join();

    // int i = 3;
    // std:thread thr(
    //     [&i] {
    //         i *= 2;
    //     }
    // );
    // thr.join();
    // cout << "value of i is now " << i ;

    // std::thread  thr(
    //     [] (int i1, int i2){
    //         std::cout << "The sum of " << i1 << " and " << i2 << " is " << i1 + i2;
    //         },
    //         2,3
    //         );
    // thr.join();
}
