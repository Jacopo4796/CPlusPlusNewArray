#include <iostream>
using namespace std;

// Create
int *aggiungiInFondo(int arrayBase[], int lungBase, int numb) // Aggiunge in fondo all'array il numero desiderato
{
    int newLung = lungBase + 1;        // Definisco la lunghezza del nuovo array
    int newArray[newLung];             // Creo un nuovo array
    for (int i = 0; i < lungBase; i++) // Scorro l'array di base
    {
        newArray[i] = arrayBase[i]; // Metto dentro il nuovo array i valori di array di base
    }
    newArray[newLung - 1] = numb; // Metto in fondo all'array il numero desiderato
    cout << "Aggiungi in fondo all'array il valore " << numb << ". \n";
    for (int i = 0; i < newLung; i++) // Scorro la lunghezza del nuovo array
    {
        cout << newArray[i] << endl; // Stampa il nuovo array
    }
    return newArray;
}
int *aggiungiInTesta(int arrayBase[], int lungBase, int numb) // Aggiunge all'inizio dell'array il numero desiderato
{
    int newLung = lungBase + 1;       // Definisco la lunghezza del nuovo array
    int newArray[newLung];            // Creo un nuovo array
    newArray[0] = numb;               // Metto il numero desiderato in posizione 0
    for (int i = 0; i < newLung; i++) // Scorro la lunghezza del nuovo array
    {
        newArray[i + 1] = arrayBase[i]; // Metto dentro il nuovo array i valori di array di base
    }
    cout << "Aggiungi in testa all'array il valore " << numb << ". \n";
    for (int i = 0; i < newLung; i++) // Scorro la lunghezza del nuovo array
    {
        cout << newArray[i] << endl; // Stampa il nuovo array
    }
    return newArray;
}
int *aggiungiInPosizione(int arrayBase[], int lungBase, int numb, int posizione) // Aggiunge in una certa posizione il numero desiderato
{
    if (posizione > lungBase) // Se la posizione si trova fuori la lunghezza dell'array
    {
        cout << "La posizione si trova al di fuori della lunghezza dell'array.\n";
        return arrayBase; // Ritorna l'array di base
    }
    else
    {
        int newLung = lungBase + 1;         // Definisco la lunghezza del nuovo array
        int newArray[newLung];              // Creo un nuovo array
        for (int i = 0; i < posizione; i++) // Scorro l'array di base fino alla posizione desiderata
        {
            newArray[i] = arrayBase[i]; // Metto dentro il nuovo array i valori di array di base
        }
        newArray[posizione] = numb;               // Metto nel nuovo array il numero desiderato nella posizione scelta
        for (int i = posizione; i < newLung; i++) // Scorro la lunghezza dell'array
        {
            newArray[i + 1] = arrayBase[i]; // Metto dentro il nuovo array i valori di array di base
        }
        cout << "Il numero " << numb << " è stato aggiunto in posizione " << posizione << ". \n";
        for (int i = 0; i < newLung; i++) // Scorro la lunghezza del nuovo array
        {
            cout << newArray[i] << endl; // Stampa il nuovo array
        }
        return newArray;
    }
}

// Read
int trovaPosizione(int arrayBase[], int lungBase, int cerca) // Trova la posizione di un certo numero presente nell'array
{
    for (int i = 0; i < lungBase; i++) // Scorro la lunghezza dell'array
    {
        if (arrayBase[i] == cerca) // Se "i" è uguale al numero che sto cercando
        {
            return i; // Mi ritorna la posizione di i
        }
    }
    return -1;
}

// Update
int *sostituisciInPosizione(int arrayBase[], int lungBase, int valore, int posizione) // Sostituisce un numero presente nell'array con un altro valore
{
    int newArray[lungBase];             // Creo un array lungo quanto l'array di base
    for (int i = 0; i < posizione; i++) // Scorro l'array fino alla posizione desiderata
    {
        newArray[i] = arrayBase[i]; // Metto dentro il nuovo array i valori di array di base
    }
    newArray[posizione] = valore;                  // Metto il valore desirato nella posizione scelta
    for (int i = posizione + 1; i < lungBase; i++) // Scorro la lunghezza dell'array
    {
        newArray[i] = arrayBase[i]; // Metto dentro il nuovo array i valori di array di base
    }
    cout << "Il valore " << valore << " è stato sostituito al numero in posizione " << posizione << ". \n";
    for (int i = 0; i < lungBase; i++) // Scorro la lunghezza dell'array
    {
        cout << newArray[i] << endl; // Stampa il nuovo array
    }
    return newArray;
}

// Delete
int *rimuovi(int arrayBase[], int lungBase, int elemento) // Rimuove un "elemento" dall'array di base
{
    bool trovato = false;              // Imposto una variabile booleana "trovato" a false
    for (int i = 0; i < lungBase; i++) // Scorro la lunghezza dell'array
    {
        if (elemento == arrayBase[i]) // Se "elemento" è uguale a "i" dell'array di base
        {
            trovato = true; // Imposto "trovato" a true
            break;
        }
    }
    int newArray[lungBase - 1]; // Creo un nuovo array e ne definisco la lunghezza
    if (trovato == false)       // Se "trovato" è uguale false
    {
        cout << "L'elemento " << elemento << " non si trova nell'array e non può essere rimosso. \n";
    }
    else
    {
        int i = 0;
        while (arrayBase[i] != elemento) // Finché "i" dell'array di base è diverso da "elemento"
        {
            newArray[i] = arrayBase[i]; // Metto dentro il nuovo array i valori di array di base
            i++;                        // Incremento l'indice
        }
        while (i < lungBase) // Finché "i" è minore della lunghezza dell'array di base
        {
            newArray[i] = arrayBase[i + 1]; // Metto dentro il nuovo array i valori di array di base saltando "elemento"
            i++;                            // Incremento l'indice
        }
        cout << "L'elemento " << elemento << " è stato rimosso dall'array. \n";
        for (int i = 0; i < lungBase - 1; i++) // Scorro la lunghezza dell'array
        {
            cout << newArray[i] << endl; // Stampa il nuovo array
        }
    }
    return newArray;
}

int main()
{
    int arrayBase[] = {1, 2, 3, 4, 5};
    int lungBase = sizeof(arrayBase) / sizeof(arrayBase[0]);
    int numb = 6;
    int posizione = 2;
    int cerca = 5;
    int valore = 99;
    int elemento = 3;

    int *newArray = aggiungiInFondo(arrayBase, lungBase, numb);
    int *newarray1 = aggiungiInTesta(arrayBase, lungBase, numb);
    int *newArray2 = aggiungiInPosizione(arrayBase, lungBase, numb, posizione);
    cout << "Il valore da cercare si trova in posizione " << trovaPosizione(arrayBase, lungBase, cerca) << ". \n";
    int *newArray3 = sostituisciInPosizione(arrayBase, lungBase, valore, posizione);
    int *newArray4 = rimuovi(arrayBase, lungBase, elemento);
}