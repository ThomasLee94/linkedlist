#include "linkedlist.h"

#include  <vector>

namespace linkedlist {
  
  LinkedList::LinkedList(vector<int> &data) {
    this->head;
    this->tail;
    this->next;

    for (int element: data) {
      append(element)
    }
  }

  bool LinkedList::is_empty() const {
    return size == 0;
  }

  void LinkedList::append(int item) {
   
    if !is_empty(){
      Node* node = tail;
      new_node = new Node(item);
      
      node->next = new_node;
    }

    new_node = new Node(item);
    head->new_node;

  }

} // namespace linkedlist
