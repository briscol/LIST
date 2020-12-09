#include<iostream>
#include "lista.h";
using namespace std;

int main() {
	Tdato t = Tdato(6, 3.66);
	Tdato t1 = Tdato(2, 5.66);
	Tdato aux;
	Nodoptr lista;
	lista = NULL;
	lista = insert_order(lista, Tdato(1, 3.3));
	lista = insert_order(lista, Tdato(5, 3.3));
	lista = insert_order(lista, Tdato(4, 3));
	lista = insert_order(lista, Tdato(7, 3.3));
	lista = insert_order(lista, Tdato(2, 3.3));
	stampa(lista);
	lista = remove_cond(lista);
	stampa(lista);
}