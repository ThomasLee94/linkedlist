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

  void LinkedList::append(int const item) {
   
    Node* new_node = new Node(item);

    if (true!=is_empty()){
      Node* node = tail;
      node->next = new_node;
    }

    this->tail = new_node;

  }

  void LinkedList::prepend(int const item) {
      
    Node* new_node = new Node(item);

    if (true!=is_empty()){
      Node* node = head;
      new_node->next = node;
    }

    this->head = new_node;
  }

  void LinkedList::insert(int const item, int const index) {
    
    Node* new_node = new Node(item);

    Node* current_node = head;

    Node* next_node = nullptr;

    for (int i=0; i<=index; i++){
      current_node->next = current_node; 
    }

    new_node->next = next_node;
    current_node->next = new_node;

  }

} // namespace linkedlist
