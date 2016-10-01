#include <iostream>
#include <vector>

class NodoA
{
public:
	std::vector<char> Puzzel;
	std::vector<NodoA*> Hijos;
	NodoA * Padre;
	NodoA(std::vector<char> pzl);
	NodoA(std::vector<char> pzl , NodoA* padre);
};