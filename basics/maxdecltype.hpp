template<typename T1, typename T2> // Valid from C++11
auto max(T1 a, T2 b) -> decltype(b < a ? a : b) // Cons: T can be a reference, so see maxdecltypedecay.hpp 
{
    return b < a ? a : b;
}