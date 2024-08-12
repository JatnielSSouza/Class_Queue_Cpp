// Aplicação:
// Teste da fila como vetor:
#include "queue.h"
#include <iostream>
using namespace std;

int main()
{
    char character;
    Queue queue;
    ItemType queueChar;

    cout << "Escreva uma String: " << endl;
    cin.get(character);

    while (character != '\n' and !queue.isFull())
    {
        queue.enqueue(character);
        cin.get(character);
    }

    cout << "\nA fila como vetor e: \n";
    queue.print();

    cout << "\nRemocao atraves do metodo dequeue(): \n";
    while (!queue.isEmpty())
    {
        queueChar = queue.dequeue();
        cout << queueChar;
    }
    cout << endl
         << endl;
}