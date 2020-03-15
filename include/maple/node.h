#ifndef _NODE_H_
#define _NODE_H_

#include <string>

class Node
{
private:
    int key;
    std::string value;

public:
    Node();
    Node(int key, std::string value);
    void print();
    void setKey(int key);
    void setValue(std::string value);
    int getKey();
    std::string getValue();
};

#endif
