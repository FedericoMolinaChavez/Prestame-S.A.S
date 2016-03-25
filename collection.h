#ifndef COLLECTION
#define COLLECTION
#include <list>
#include <iostream>
#include "overdue_credit.h"
using namespace std;

class collection
{
	private:
		string cedula;
		float valorBase;
		int Administracion;
		float Seguro;
		int usoDeLaPlataforma;
		list<overdue_credit *> listaMora;
		float totalCobro;
	public:
		collection(string cedula, float valorBase, int Administracion, float Seguro, int usoDeLaPlataforma, list<overdue_credit *> listaMora);
		~collection();
		void calcularTotalCobro();
		float getTotalCobro();
};

#include "collection.hxx"
#endif