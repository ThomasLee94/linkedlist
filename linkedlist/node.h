#ifndef NODE_H_
#define NODE_H_

namespace linkedlist {

struct Node {
  int data;
  Node* next;

  Node(const int data) {
    this->data = data;
   }
};
    
}  // namespace linkedlist

#endif // NODE_H
