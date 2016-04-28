#ifndef USER_INTERFACE
#define USER_INTERFACE
#include "client.h"
#include "credit.h"
#include "credit_application.h"
#include "sistema.h"
#include <iostream>

using namespace std;

class user_interface{
	private:
		client *cliente;
		list <credit *> creditos;
		list <credit_application *> aplicaciones;
	public:
		user_interface(client *cliente);
		~user_interface();
		bool nuevaAplicacionDeCredito(float ingresosMensuales,string nombreDeLaEmpresa,string telefonoDeLaEmpresa,float gastos, float ingresosFamiliares,float cuota);
		bool pagarCredito(float valor);
		bool cancelarAplicacion();
		void simularCredito();
		list<credit_application *> getListaAplicaciones();
		list<credit *> getListaCreditos();
		void setListaAplicaciones();
		void serListaCreditos();
		void SimulacionDeCredito(float monto, int cuotas);
		bool eliminarSolicitud(float valorABuscar);
		client* getCliente();


};

#include "user_interface.hxx"
#endif