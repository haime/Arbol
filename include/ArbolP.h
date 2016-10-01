#include <stack>
#include "NodoA.h"


class ArbolP
{
private:
	NodoA* BusqRec(std::vector<char> ref, NodoA* aux);
public:
	NodoA* Raiz;
	ArbolP(std::vector<char> orig);
	NodoA* BusqNodo(std::vector<char> v);
	bool AddNodo(std::vector<char> ref,std::vector<char> aux);
	bool ElimNodo(std::vector<char> ref);
	std::stack<NodoA*> Camino(NodoA* aux);

};