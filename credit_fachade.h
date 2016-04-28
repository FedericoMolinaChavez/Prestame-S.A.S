#ifndef CREDIT_FACHADE
#define CREDIT_FACHADE
#include "credit.h"
#include "credit_application.h"
#include "credit_approval_interface.h"
#include "mailer_handler.h"
using namespace std;

class credit_fachade
{
	private:
		client *clienteAAprobarCredito;
		credit_application *aplicacionAAprobar;
	public:
		credit_fachade(client *clienteAAprobarCredito,credit_application *aplicacionAAprobar);
		~credit_fachade();
		credit* CreacionDeCredito(int cuotas);
		void envioCorreo(string format);
};

#include "credit_fachade.hxx"

#endif