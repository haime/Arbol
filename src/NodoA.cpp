#include "NodoA.h"

NodoA::NodoA(std::vector<char> pzl)
{
	this->Puzzel = pzl;
	this->Padre = NULL;
}

NodoA::NodoA(std::vector<char> pzl , NodoA* padre)
{
	this->Puzzel = pzl;
	this->Padre = padre;
}