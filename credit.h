#ifndef CREDIT
#define CREDIT
#include "client.h"
#include "overdue_credit.h"
#include <list>
#include <utility>
#include <ctime>

using namespace std;

class credit
{
	private:
		float monto;
		int Administracion;
		float seguro;
		float intereses;
		int plataforma;
		float iva;
		int cuotas;
		tm *ltm; //time for overdue pourposes.
		list<overdue_credit> listaCredMor;
		client *cliente;
		int estado;
		list< pair<string,float> > Operaciones;
	public:
		credit(float monto, int Administracion, float seguro, float intereses, int plataforma, float iva, client *cliente,int cuotas);
		~credit();
		bool pagoDeCreditoMinimo(float monto);
		bool pagoDeCreditoTotal(float monto);
		void RevisionPago();
		bool revisionFecha();

};



#include "credit.hxx"
#endif