#include <maple/node.hpp>

#include <iostream>
#include <string>

template<class T>
Node<T>::Node() {
}

template<class T>
Node<T>::Node(int key, T value) {
    key = key;
    value = value;
}

template<class T>
void Node<T>::print() {
	std::cout << key << " - " << value << std::endl;
}

template<class T>
void Node<T>::setKey(int key) {
    key = key;
}

template<class T>
void Node<T>::setValue(T value) {
    value = value;
}

template<class T>
int Node<T>::getKey() {
    return key;
}

template<class T>
T Node<T>::getValue() {
    return value;
}

template Node<std::string>;
