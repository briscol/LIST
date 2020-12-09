#ifndef __LISTA_H__
#define __LISTA_H__

#include <iostream>
using namespace std;

typedef struct Tdato {
	int index;
	float value;
	~Tdato() {}
	Tdato() { 
		index = 0;
		value = 0;
	}
	Tdato(int a, float b) {
		index = a;
		value = b;
	}
	void stampa()const {
		cout << "Index: " << index << " Value: " << value << endl;
	}
	Tdato lt(Tdato a, Tdato b) {
		if (a.value > b.value)
			return b;
		else
			return a;
	}
	Tdato gt(Tdato a, Tdato b) {
		if (a.value > b.value)
			return a;
		else
			return b;
	}

} Tdato;
typedef struct Tnodo {
	Tdato dato;
	Tnodo* next;
	Tnodo() { dato = Tdato(); next = NULL; }
	Tnodo(Tdato d) { dato = d; next = NULL; }
	Tnodo(Tdato d, Tnodo* n) { dato = d; next = n; }
	~Tnodo() {}
	void stampa()const { dato.stampa(); }
} Tnodo;
//alias
typedef Tdato Dato;
typedef Tnodo Nodo;
typedef Tnodo* Nodoptr;
//funzioni
Nodoptr insert_first(Nodoptr s, Dato d);
void stampa(Nodoptr s);
int lung(Nodoptr s);
Nodoptr insert_last(Nodoptr s, Dato d);
Nodoptr insert_order(Nodoptr s, Dato d);
Nodoptr remove_first(Nodoptr s);
Nodoptr remove_last(Nodoptr s);
Nodoptr search_remove(Nodoptr p, int val);
Nodoptr remove_cond(Nodoptr s);
#endif
