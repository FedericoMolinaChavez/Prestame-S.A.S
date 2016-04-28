#ifndef CREDIT_APPLICATION
#define CREDIT_APPLICATION
#include "client.h"
using namespace std;
class credit_application
{
	private:
		client *aux;
		float ingresosMensuales;
		string nombreDeLaEmpresa;
		string telefonoDeLaEmpresa;
		float gastos;
		float ingresosFamiliares;
		float cuota;
	public:
		credit_application(client *aux,float ingresosMensuales,string nombreDeLaEmpresa,string telefonoDeLaEmpresa,float gastos, float ingresosFamiliares,float cuotas);
		~credit_application();
			friend ostream& operator << (ostream &o, const credit_application &c)
		{
				
			o << "Nombre : " << c.aux->getNombre()<< " Apellido : "<< c.aux->getApellido() << " Cedula : " << c.aux->getNumeroDeCedula() << " Ingresos Mensuales :" << c.ingresosFamiliares
			  << " Nombre de la empresa : " << c.nombreDeLaEmpresa << " Telefono de la empresa : " << c.telefonoDeLaEmpresa << " Gastos : " << c.gastos 
			  << " Ingresos familiares : "  << c.ingresosFamiliares<< " Valor solicitado : " << c.cuota;
			  return o; 
		};
		float getIngresosMensuales();
		string getNombreDeLaEmpresa();
		string getTelefonoDeLaEmpresa();
		float getGastos();
		float getIngresosFamiliares();
		float getCuota();
		client* getCliente();
};


#include "credit_application.hxx"
#endif