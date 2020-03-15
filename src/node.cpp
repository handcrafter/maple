#include <maple/node.h>

#include <iostream>

Node::Node() {
}

Node::Node(int key, std::string value):
    key{key},
    value{value}  {
}

void Node::print() {
    std::cout << "key" << " - " << key;
    std::cout << ", value" << " - " << value << std::endl;
}

void Node::setKey(int key) {
    key = key;
}

void Node::setValue(std::string value) {
    value = value;
}

int Node::getKey() {
    return key;
}

std::string Node::getValue() {
    return value;
}
