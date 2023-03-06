#include <iostream>
using namespace std;
 
// Create
int* aggiungiInFondo(int base[], int lungBase, int newNumb)
{
    int newLung = lungBase + 1; // la dimensione del nuovo array è lungbase + 1
    int newArray[newLung]; // creo il nuovo array
    for(int i = 0; i < newLung + 1; i++) // scorro il nuovo array
    {
        newArray[i] = base[i]; // metto dentro newarray i valori che stanno dentro base
    }
    for(int i = 0; i < newLung; i++) // scorro nuovamente il nuovo array
    {
        if(i < newLung) // se i è minore della lunghezza del nuovo array
        {
            newArray[newLung - 1] = newNumb; // metto nuovo alla fine dell'array
        }
    }
    cout << "In fondo all'array aggiungi il numero " << newNumb << ". \n";
    for(int i = 0; i < newLung; i++) // scorro nuovamente il nuovo array
    {
        cout << newArray[i] << " \n"; // stampo i valori contenuti dentro il nuovo array
    }
    return newArray;
}
int* aggiungiInTesta(int base[], int lungBase, int newNumb)
{
    int newLung = lungBase + 1; // la dimensione del nuovo array è lungbase + 1
    int newArray[newLung]; // creo il nuovo array
    for(int i = 0; i < newLung; i++) // scorro il nuovo array
    {
        newArray[0] = newNumb; // metto dentro newarray in pos 0 nuovo
    }
    for(int i = 0; i < newLung; i++) // scorro nuovamente il nuovo array
    {
        newArray[i + 1] = base[i]; // metto dentro il nuovo array i valori contenuti dentro base
    }
    cout << "In testa all'array aggiungi il numero " << newNumb << ". \n";
    for(int i = 0; i < newLung; i++) // scorro nuovamente il nuovo array
    {
        cout << newArray[i] << " \n"; // stampo i valori contenuti dentro il nuovo array
    }
    return newArray;
}
int* aggiungiInPosizione(int base[], int lungBase, int newNumb, int posizione)
{
    int newLung = lungBase + 1; // la dimensione del nuovo array è lungbase + 1
    int newArray[newLung]; // creo il nuovo array
    for(int i = 0; i < posizione; i++) // scorro l'array fino a "posizione"
    {
        newArray[i] = base[i]; // metto dentro array i valori di base fino a "posizione"
    }
    newArray[posizione] = newNumb; // metto newNumb dentro newArray in posizione "posizione"
    for(int i = posizione; i < newLung; i++) // scorro l'array da "posizione" fino alla lunghezza dell'array
    {
        newArray[i + 1] = base[i]; // metto dentro array i valori di base da "posizione" fino a fine array
    }
    cout << "Aggiungi il numero " << newNumb << " in posizione " << posizione << ". \n";
    for (int i = 0; i < newLung; i++) // scorro nuovamente il nuovo array
    {
        cout << newArray[i] << " \n"; // stampo i valori contenuti dentro il nuovo array
    }
    return newArray;
}
 
// Read
int trovaPosizione(int base[], int lungBase, int cerca)
{
    int trovato = 0;
    for(int i = 0;i < lungBase; i++)
    {
        if(cerca == base[i])
        {
            trovato = i;
        }
    }
    return trovato;
}
 
// Update
int* aggiornaInPosizione(int base[], int lungBase, int valore, int posizione)
{
    
}

// Delete 
int* rimuovi(int base[], int lungBase, int index)
{

}

int main()
{
    int arrayBase[5] = {1, 2, 3, 4, 5};
    int lungBase = sizeof(arrayBase) / sizeof(arrayBase[0]);
    int numb = 6;
    int posizione = 2;
    int cerca = 5;
    int valore = 99;
 
    int* newArray = aggiungiInFondo(arrayBase, lungBase, numb);
    int* newarray1 = aggiungiInTesta(arrayBase, lungBase, numb);
    int* newArray2 = aggiungiInPosizione(arrayBase, lungBase, numb, posizione);
    cout << "Il valore da cercare si trova in posizione " << trovaPosizione(arrayBase, lungBase, cerca);
    
}