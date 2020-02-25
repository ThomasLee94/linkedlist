#include "linkedlist.h"

#include  <vector>

namespace linkedlist {
  
  LinkedList::LinkedList(std::vector<int> &data) {
    this->head = nullptr;
    this->tail = nullptr;
    

    for (int element: data) {
      append(element);
    }
  }

  bool LinkedList::is_empty() const {
    if (size==0){
      return true;
    }

    return false;
  }

  void LinkedList::append(int item) {
   
    if (true!=is_empty()){
      Node* node = tail;
      Node* new_node = new Node(item);
      
      node->next = new_node;
    }

    Node* new_node = new Node(item);
    this->head  = new_node;

  }

} // namespace linkedlist
