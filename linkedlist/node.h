#define NODE_H_

namespace linkedlist {

  struct Node {
    Node(int data);
    int data;
    Node* next;
  };
    
}; // namespace linkedlist
