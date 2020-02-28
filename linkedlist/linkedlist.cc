#include "linkedlist.h"

#include  <vector>

namespace linkedlist {
  
LinkedList::LinkedList(const std::vector<int>& data) {
  this->head = nullptr;
  this->tail = nullptr;
  this->size = 0;
  
  for (const int element : data) {
    append(element);
  }
}

bool LinkedList::is_empty() const {
  return size == 0;
}

void LinkedList::append(const int item) {
  Node* new_node = new Node(item);

  if (is_empty()) {
    head = new_node;
    tail = new_node;
  }

  tail->next = new_node;
  size++;
}

void LinkedList::prepend(const int item) {
  Node* new_node = new Node(item);

  if (is_empty()) {
    head = new_node;
    tail = new_node;
  }

  new_node->next = head;
  size++;
}

void LinkedList::insert(const int item, const int index) {
  Node* new_node = new Node(item);
  Node* index_node = get_node(index);
  Node* previous_node = get_node(index-1); 

}

void LinkedList::delete_(const int item) {
  bool found = false;
  Node* node = head;
  Node* previous = nullptr;

  for (int i = 0; i <= size; i++) {
    if (node->data == item) {
      found = true;
    }
    previous = node;
    node->next = node;
  }
  
  if (found) {
    previous = node->next;
    node->next = nullptr;
    size--;
  }
}

} // namespace linkedlist
