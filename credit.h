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
		static int id;
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
		friend ostream& operator << (ostream &o, const credit &c)
		{
				int dia = c.ltm->tm_mday;
				int mes = 1 + c.ltm->tm_mon;
				int ano = 1900 + c.ltm->tm_year;
			o << "Monto: " << c.monto << " Administracion: " << c.Administracion 
			  << " Seguro: " << c.seguro << " Intereses:" << c.intereses << " Plataforma: "
			  << c.plataforma << " Iva :" << c.iva << " Cuotas: " << c.cuotas
			  << " Fecha de inicio: dia " <<dia << " mes "<<mes<< " año "<<ano<< " Cliente: "<< c.cliente->getNombre()
			  << " Estado: "<< c.estado<<endl;
			  return o; 
		};
		credit(float monto, int Administracion, float seguro, float intereses, int plataforma, float iva, client *cliente,int cuotas);
		~credit();
		bool pagoDeCreditoMinimo(float monto);
		bool pagoDeCreditoTotal(float monto);
		void RevisionPago();
		bool revisionFecha();
		int getID();
		float getMonto();
		int getAdministracion();
		float getSeguro();
		float getIntereses();
		int getPlataforma();
		float getIva();
		int getCuotas();
		tm* getLtm();
		void setLtm(tm *ltm);
		client* getCliente();
		int getEstado();
		void setEstado(int estado);
		list<pair<string,float> > getOperaciones();


};



#include "credit.hxx"
#endif