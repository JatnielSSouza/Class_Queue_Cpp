// Declaração:
// Constante, classe, métodos, atributos, variáveis e ponteiro:
#include "item_type.h"

const int MAX_ITEMS = 100;

class Queue
{
public:
    Queue();  // Constructor
    ~Queue(); // Destructor
    bool isEmpty() const;
    bool isFull() const;
    void print() const;

    void enqueue(ItemType);
    ItemType dequeue();

private:
    int front;
    int back;
    ItemType *structure;
};
