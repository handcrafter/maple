#include <iostream>
#include <maple/node.h>

template<typename T>
Node<T>::Node(int key, T value)
{
    key = key;
    value = value;
}

template<typename T>
void Node<T>::print()
{
	cout << key << " - " << value << endl;
}

template<typename T>
void Node<T>::setKey(int key)
{
    key = key;
}

template<typename T>
void Node<T>::setValue(T value)
{
    value = value;
}

template<typename T>
int Node<T>::getKey()
{
    return key;
}

template<typename T>
T Node<T>::getValue()
{
    return value;
}
