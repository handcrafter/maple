#include <maple/node.h>
#include <string>

using namespace std;

int main()  {
   Node<string> node(3, "abc");
   node.print();
   return 0;
}
