#include <memory>
#include <iostream>

using std::string;

int main() {
    #define MEMORY_SIZE 10
    std::allocator<string> alloc;
    auto const mHead = alloc.allocate(MEMORY_SIZE);
    string s;
    auto mTail = mHead;
    while (std::cin >> s && mTail != mHead + MEMORY_SIZE)
        alloc.construct(mTail++, s);
    for (auto p = mHead; p != mTail; ++p)
        std::cout << *p << ' ';
    while (mTail != mHead)
        alloc.destroy(--mTail);

    std::cout << '\n' << "after destroy: ";
    for (auto p = mHead; p != mTail; ++p)
        std::cout << *p << ' ';
    alloc.deallocate(mHead, MEMORY_SIZE);
    return 0;
}
