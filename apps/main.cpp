#include <maple/node.hpp>

#include <string>

int main()  {
   Node<std::string> node(3, "abc");
   node.print();
   return 0;
}
