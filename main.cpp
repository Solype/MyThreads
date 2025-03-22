#include "ThreadPool.hpp"

int main(void)
{
    thread::ThreadPool<std::function<int(int)>, int> pool;
    pool.run();
    pool.waitUntilComplete();
    return 0;
}