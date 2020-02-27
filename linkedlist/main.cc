#include "linkedlist.h"

#include <iostream>
#include <vector>

namespace linkedlist {
    
int main(int argc, char** argv) {
  std::vector<int> nums({1, 2, 3, 4, 5});

  LinkedList linked_list_obj(nums);

  std::cout << "----- before deletion -----" << std::endl;

  Node* node = linked_list_obj.head;
  for (int i=0; i < linked_list_obj.size; i++) {
    std::cout << node->data << std::endl;
    node = node->next;
  }

  linked_list_obj.delete_(4);

  std::cout << "***** after deletion *****" << std::endl;

  node = linked_list_obj.head;
  for (int i=0; i < linked_list_obj.size; i++) {
    std::cout << node->data << std::endl;
    node = node->next;
  }

  return 0;
}

} // namespace linkedlist
