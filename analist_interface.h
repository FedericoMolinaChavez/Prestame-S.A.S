#ifndef ANALIST_INTERFACE
#define ANALIST_INTERFACE
#include "analist.h"
#include "credit.h"
#include "credit_application.h"
#include "credit_fachade.h"
#include "credit_approval_interface.h"
#include "sistema.h"
#include "client.h"
#include "mailer_handler.h"
#include "collection.h"
#include <iostream>

class analist_interface
{
	private:
		analist* analista;
		list<credit_application*> aplicaciones;
		list<credit*> creditosAprobados;

	public:	
		analist_interface();
		~analist_interface();
		credit* fabricaDeCredito(credit_application * aplicacionAAprobar,client* cliente);
		collection* generarCobro(credit* credito,list<overdue_credit*> morosos);
		string reporteCreditos();
		string reporteCobros();
		string reporteMorosos();
};


#include "analist_interface.hxx"
#endif