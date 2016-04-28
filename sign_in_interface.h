#ifndef SIGN_IN_INTERFACE
#define SIGN_IN_INTERFACE
#include "client.h"
#include "analist.h"
#include <list>
#include "sistema.h"

class sign_in_interface
{
	private:
		string user;
		string password;
		client *a;
		analist *b;
	public:
		sign_in_interface(string user, string password);
		~sign_in_interface();
		client* getClient();
		analist* getAnalist();

};
#include "sign_in_interface.hxx"
#endif