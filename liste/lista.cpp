#include <iostream>
#include "lista.h"
using namespace std;

Nodoptr insert_first(Nodoptr s, Dato d) {
	Nodoptr q = new Tnodo(d);
	q->next = s;
	return q;
}
Nodoptr insert_last(Nodoptr s, Dato d) {
	Nodoptr q = new Tnodo(d);
	if (s == NULL) {
		return q;
	}
	Nodoptr p = s;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = q;
	return s;
}
Nodoptr insert_order(Nodoptr s, Dato d) {
	Nodoptr q = new Tnodo(d);
	if (s == NULL) {
		return q;
	}
	if (s->dato.index > d.index) {
		return insert_first(s, d);
	}
	Nodoptr p = s;
	while (p->next != NULL && p->next->dato.index < d.index) {
		p = p->next;
	}

	q->next = p->next;
	p->next = q;
	return s;
}
int lung(Nodoptr s) {
	int a = 0;
	Nodoptr p = s;
	while(p->next != NULL){
		p = p->next;
		++a;
	}
	return a;
}
Nodoptr remove_first(Nodoptr s) {
	if (s == NULL) {
		return NULL;
	}
	Nodoptr p = s;
	s = s->next;
	delete p;
	return s;
}
Nodoptr remove_last(Nodoptr s) {
	if (s == NULL) {
		return NULL;
	}
	if (s->next == NULL) {
		delete s;
		return NULL;
	}
	Nodoptr p = s;	
	while (p->next->next != NULL) {
		p = p->next;
	}
	delete p->next;
	p->next = NULL;
	return s;
}
Nodoptr search_remove(Nodoptr p, int val) {
	if (p == NULL) {
		return NULL;
	}
	Nodoptr s = p;
	if (s->dato.index == val) {
		s = remove_first(s);
	}
	while (s->next != NULL) {
		while (val == s->next->dato.index) {
			if (val == s->next->dato.index) {
				Nodoptr r = s->next;
				s->next = r->next;
				delete r;
			}
		}
		s = s->next;
	}
	return p;
}
Nodoptr remove_cond(Nodoptr s) {
	if (s == NULL) {
		return NULL;
	}
	Nodoptr p = s;
	if (p->dato.index % 2 == 0) {
		p = remove_first(p);
	}
	while (p->next != NULL) {
		while (p->next->dato.index % 2 == 0) {
			if (p->next->dato.index % 2 == 0) {
				Nodoptr r = p->next;
				p->next = r->next;
				delete r;
			}
		}
		p = p->next;
	}
	return s;
}
void stampa(Nodoptr s) {
	Nodoptr p = s;
	while (p != NULL) {
		p->stampa();
		p = p->next;
	}
	cout << endl;
}