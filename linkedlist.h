#define LINKEDLIST_H_

#include <vector>

namespace linkedlist {

class LinkedList {

public:
  LinkedList(std::vector<int> &data);
  Node* head;
  Node* tail;
  int size;
  bool is_empty();
  void append();

}

} // namespace linkedlist
