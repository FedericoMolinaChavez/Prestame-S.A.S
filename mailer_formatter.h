#ifndef MAILER_FORMATTER_H
#define MAILER_FORMATTER_H

#include "mailer_handler.h"
using namespace std;

class mailer_formatter {
	private:
		string texto;
		string correo;
		string email;
	    string password;
		string asunto;
	public:
		mailer_formatter();
		~mailer_formatter();
		mailer_handler formatter();
};

#include "mailer_formatter.hxx"

#endif