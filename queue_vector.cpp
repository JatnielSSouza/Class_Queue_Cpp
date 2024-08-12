// Implementação:
// Fila como vetor:
#include "queue.h"
#include <iostream>
using namespace std;

Queue::Queue() // Constructor
{
    front = 0;
    back = 0;
    structure = new ItemType[MAX_ITEMS];
}

Queue::~Queue() // Deconstructor
{
    delete[] structure;
}

// Métodos públicos:

// Verificação:
bool Queue::isEmpty() const
{
    return (front == back);
}

bool Queue::isFull() const
{
    return (back - front == MAX_ITEMS);
}

// Método enqueue (inserção):
void Queue::enqueue(ItemType item)
{
    if (!isFull())
    {
        structure[back % MAX_ITEMS] = item;
        back++;
    }
    else
    {
        throw "Queue is already full!"; // Lançamento de erro para ser tratado posteriormente por uma try_catch por exemplo.
    }
}

// Método dequeue (remoção):
ItemType Queue::dequeue()
{
    if (!isEmpty())
    {
        front++;
        return structure[(front - 1) % MAX_ITEMS];
    }
    else
    {
        throw "Queue is empty!"; // Lançamento de erro para ser tratado posteriormente por uma try_catch por exemplo.
    }
}

// Método print (impressão da fila como vetor):
void Queue::print() const
{
    cout << "Fila = ";
    for (int i = front; i < back; i++)
    {
        cout << structure[i % MAX_ITEMS];
    }
    cout << endl;
}