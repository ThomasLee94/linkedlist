#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "node.h"

#include <vector>

namespace linkedlist {

class LinkedList {

public:
  LinkedList(const std::vector<int> &data);
  Node* head;
  Node* tail;
  int size;
  bool is_empty() const;
  Node get_node(const int item);
  void append(const int ntem);
  void prepend(const int item);
  void insert(const int item, const int index);
  void delete_(const int item);

};

}; // namespace linkedlist

#endif // LINKEDLIST_H_ 
