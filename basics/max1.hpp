template<typename T>
T max(T a, T b) {
    return b < a ? a : b;
}

// Alternative semantic-identical variant:

template<class T>
T alt_max(T a, T b) {
    return b < a ? a : b;
}