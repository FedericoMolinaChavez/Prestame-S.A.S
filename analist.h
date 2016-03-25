#ifndef ANALIST_H
#define ANALIST_H

using namespace std;

class analist
{
	private:
		string nombre;
		string password;
	public:
		analist(string nombre,string password);
		~analist();
		string getNombre();
		string getPassword();
		void setNombre(string nombre);
		void setPassword(string password);	
};
#include "analist.hxx"
#endif