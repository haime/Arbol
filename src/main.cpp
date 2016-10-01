#include "ArbolP.h"

int main()
{
	std::vector<char> o;
	for (int i = 1; i < 9; ++i)
	{
		o.push_back(i);
	}
	o.push_back('*');
	
	ArbolP arbol(o);
	for (int i = 0; i < arbol.Raiz->Puzzel.size() ; ++i)
	{	
		if(arbol.Raiz->Puzzel[i]=='*')
			std::cout<<arbol.Raiz->Puzzel[i]<<std::endl;
		else
			std::cout<<(int)arbol.Raiz->Puzzel[i]<<std::endl;
	}

	std::vector<char> p;
	p.push_back('*');
	for (int i = 1; i < 9; ++i)
	{
		p.push_back(i);
	}
	

	std::cout<<arbol.AddNodo(o,p)<<std::endl;

	return 0;
}