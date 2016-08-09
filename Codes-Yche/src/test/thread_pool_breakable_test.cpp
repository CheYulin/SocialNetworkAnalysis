//
// Created by cheyulin on 8/9/16.
//

#include <iostream>
#include "../thread_pool_breakable.h"

using namespace yche;
using namespace std;

int main() {
    ThreadPoolBreakable threadPoolBreakable(10);
    auto integer = 0;
    bool is_break = false;

    for (auto i = 0; i < 500; i++) {
        integer++;
        std::function<BreakWithCallBackRetType(void)> task_function = [integer]() -> BreakWithCallBackRetType {
            cout << "Integer:" << integer << endl;
            if (integer == 10) {
                cout << "Go Break" << endl;
                return BreakWithCallBackRetType(true, []() { cout << "Break" << endl; });
            }
            else
                return BreakWithCallBackRetType();
        };
        threadPoolBreakable.AddTask(task_function);
    }
//    threadPoolBreakable.WaitForBreakOrTerminate(is_break);
//    cout << is_break << endl;

}