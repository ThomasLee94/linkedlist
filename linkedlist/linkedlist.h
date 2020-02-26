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
  void append(int const item);
  void prepend(int const item);
  void insert(int const item, int const index);

};

}; // namespace linkedlist
