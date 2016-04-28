#include "credit_fachade.h"

credit_fachade::credit_fachade(client *clienteAAprobarCredito,credit_application *aplicacionAAprobar)
{
	this->clienteAAprobarCredito = clienteAAprobarCredito;
	this->aplicacionAAprobar = aplicacionAAprobar;
}

credit_fachade::~credit_fachade(){}

credit* credit_fachade::CreacionDeCredito(int cuotas)
{
	credit_approval_interface *aux = new credit_approval_interface (aplicacionAAprobar->getIngresosMensuales(),aplicacionAAprobar->getGastos(), aplicacionAAprobar->getCuota());
	if (aux->approveCredit()==true)
		{
			float monto = aplicacionAAprobar->getCuota();
			float seguro = monto * 0.05;
			int Administracion = 15000;
			int plataforma = 15000; 
			float iva = 0.16;
			float intereses = monto * 0.02;

			credit *nuevo = new credit(monto,Administracion,seguro,intereses,plataforma,iva,this->clienteAAprobarCredito,cuotas);
			return nuevo;
		}
	return NULL;
}

	void credit_fachade::envioCorreo(string format){}