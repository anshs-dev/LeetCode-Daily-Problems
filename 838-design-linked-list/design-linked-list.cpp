class MyLinkedList {
public:
  MyLinkedList() {}

  /*void printList() {*/
  /*  Node *t = this->head;*/
  /**/
  /*  while (t) {*/
  /*    std::cout << t->val << " -> ";*/
  /*    t = t->next;*/
  /*  }*/
  /**/
  /*  std::cout << std::endl << this->size << std::endl;*/
  /*}*/
  int get(int index) {
    Node *t = this->head;
    while (t) {
      if (!index) {
        return t->val;
      }
      index--;
      t = t->next;
    }
    return -1;
  }

  void addAtHead(int val) {
    Node *node = new Node(val, this->head);
    this->head = node;

    this->size++;
  }

  void addAtTail(int val) {
    if (this->head == nullptr) {
      this->head = new Node(val);
      this->size++;
      return;
    }

    Node *t = this->head;
    while (t->next) {
      t = t->next;
    }
    t->next = new Node(val);
    this->size++;
  }

  void addAtIndex(int index, int val) {

    if (index == 0) {
      this->addAtHead(val);
      return;
    }

    if (index > this->size) {
      return;
    }

    Node *t = this->head;
    while (t->next && index > 1) {
      index--;
      t = t->next;
    }

    Node *next = t->next;
    t->next = new Node(val, next);

    this->size++;
  }

  void deleteAtIndex(int index) {
    if (!this->head || index < 0 || index >= this->size) {
      return;
    }

    if (index == 0) {
      Node *n = head;
      head = head->next;
      delete n;
      return;
    }

    Node *t = this->head;
    while (index > 1 && t->next) {
      t = t->next;
      index--;
    }

    Node *d = t->next;

    t->next = d ? d->next : nullptr;
    delete d;
    this->size--;
  }

private:
  struct Node {
    int val;
    Node *next;

    Node(int v) : val(v), next(nullptr) {}
    Node() : val(0), next(nullptr) {}
    Node(int v, Node *next) : val(v), next(next) {}
  };

  Node *head = nullptr;
  int size = 0;
};
