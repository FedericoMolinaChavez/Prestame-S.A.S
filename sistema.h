#ifndef SISTEMA_H
#define SISTEMA_H

#include "credit_application.h"
#include "credit.h"
#include "overdue_credit.h"
#include "client.h"
#include <list>
#include <sqlite3.h>
#include <stdio.h>
#include <string.h>
#include <sstream>
#include <boost/tokenizer.hpp>
#include <time.h>
#include <stdlib.h>
#include <cmath> 

using namespace std;
using namespace boost;
class sistema {
	private:
		list<client> listaClientes;
		list<analist> listaAnalistas;
		list<credit_application* > listaSolicitudes;
		list<credit *> listaCreditos;
		list<client> listaMorosos;
		list<overdue_credit *> listaDeMoras;
		ostringstream lecturaDb;

		//list<Report> listaReportes;
	public:
		sistema();
		~sistema();

		bool guardarClientesBaseDeDatos(list<client*> listaClientes);
		bool guardarAnalistasBaseDeDatos(list <analist*> listaAnalistas);
		bool guardarSolicitudesBaseDeDatos(list<credit_application*> listaSolicitudes);
		bool guardarCreditosBaseDeDatos(list<credit*> listaCreditos);
		bool guardarCobroBaseDeDatos(collection* cobro, int cuotas);
		bool guardarListaDeMoras(list<overdue_credit*> listaMora);
		list<credit_application*> cargarDatosSolicitudes();
		client* buscarClienteDB(string password);
		analist* buscarAnalistaDB(string password);
		list<collection*> cargarDatosCobros();
		bool cargarDatosCreditos (string identificacion);
		bool eliminarSolicitud(string identificacion, string monto);
		bool cargarListaMorosos(list<overdue_credit *> morosos);
		bool updateCreditos(string columna, string valor,string identificacion);
		bool updateClientes(string columna, string valor, string identificacion);
		bool updateAnalistas(string columna, string valor, string identificacion);
		bool updateSolicitudes(string columna, string valor, string identificacion);
		list<credit *> getListaCred();
		list<overdue_credit*> getListaDeMoras();



};

#include "sistema.hxx"

#endif