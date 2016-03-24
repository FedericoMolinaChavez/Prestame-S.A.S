#ifndef MAILER_HANDLER_H
#define MAILER_HANDLER_H
#include <iostream>
#include <fstream>
#include <stdio.h>     
#include <stdlib.h>


using namespace std;

class mailer_handler {
	private:
		string texto;
		string correo;
		string email;
	    string password;
		string asunto;
	public:
		mailer_handler (const string texto, const string correo,const string email, const string password, const string asunto);
		~mailer_handler();
		void createMailDoc();
		void sendMail();

	
};
#include "mailer_handler.hxx"
#endif