#define LINKEDLIST_H_

#include "node.h"

#include <vector>

namespace linkedlist {

class LinkedList {

public:
  LinkedList(std::vector<int> &data);
  Node* head;
  Node* tail;
  int size;
  bool is_empty() const;
  void append(int item);
  void prepend(int item);

};

}; // namespace linkedlist
