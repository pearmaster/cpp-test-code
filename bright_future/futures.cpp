
#include <iostream>

#define BOOST_THREAD_PROVIDES_FUTURE
#include <boost/thread/future.hpp>

using namespace std;

int main(int argc, char** argv)
{
    auto prom = boost::promise<bool>();
    auto fut = prom.get_future();

    if (fut.is_ready()) {
        cout << "Future is incorrectly ready\n";
    }

    prom.set_value(true);

        if (fut.is_ready()) {
        cout << "Future is correctly ready\n";
    }

    return 0;
}