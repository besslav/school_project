#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
T &min(T &elem1, T &elem2) {
    return ((elem1 < elem2) ? elem1 : elem2);
}

template<typename T>
T &max( T &elem1, T &elem2) {
    return ((elem1 > elem2) ? elem1 : elem2);
}

template<typename T>
void swap(T &elem1, T &elem2) {
    T buff = elem1;
    elem1 = elem2;
    elem2 = buff;
}

#endif
