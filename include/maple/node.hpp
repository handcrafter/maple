template <class T>
class Node
{
private:
    int key;
    T value;

public:
    Node();
    Node(int key, T value);
    void print();
    void setKey(int key);
    void setValue(T value);
    int getKey();
    T getValue();
};
