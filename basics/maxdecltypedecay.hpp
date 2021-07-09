#include <type_traits>

template<typename T1, typename T2>
auto max(T1 a, T2 b) -> typename std::decay_t<decltype(true ? a : b)>
{
    return b < a ? a : b;
}