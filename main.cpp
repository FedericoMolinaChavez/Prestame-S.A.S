#include <iostream>
#include "client.h"
#include "analist.h"
#include "overdue_credit.h"
#include "credit_application.h"
#include "credit.h"
#include "collection.h"
#include "mailer_handler.h"
#include "sign_in_interface.h"
#include "sistema.h"
#include "user_interface.h"
#include "analist_interface.h"
#include <list>
#include <typeinfo>

//151955287


using namespace std;

void nuevaSolicitudDeCredito(user_interface *interfazDeUsuario);
void guardarDatosAplicacionDB(list<credit_application *> listaDeGuardado,sistema *systemq);
int main()
	{
	sistema * systemq = new sistema();
	list <credit_application *> listaSolicitudes;
	list <analist*> listaAnalistas;
	listaSolicitudes = systemq->cargarDatosSolicitudes();

	string usuario = "";//entrada de datos para el log in.
	string password= "";
	int resl = 0;
	cout<< "Bienvenido  al sistema de creditos de Prestame S.A.S"<<endl;
	cout<<"Si es un usuario por favor digite 0, si nes un analista digite 1 y si es un usuario nuevo digite 2"<<endl;
	cin >> resl;
	if (resl == 0){
	client *nuevo = NULL;
	cout<< "Digite su usuario ";
	cin>> usuario;
	cout<< "Digite su password ";
	cin>> password;
	user_interface * interfazDeUsuario = NULL;
	sign_in_interface *entrada = new sign_in_interface(usuario,password);
	if (entrada->getClient() !=NULL)
	{
		interfazDeUsuario = new user_interface (entrada->getClient());
	} 

	bool cicloUsuario = false;
	int opcion = 0;
	while (cicloUsuario == false)
		{
			
			cout << "Bienvenido cliente"<<endl;
			cout << "Menu"<<endl;
			cout << "Opcion 1: crear nueva solicitud de credito"<<endl;
            cout << "Opcion 2: simular credito"<<endl;
            cout << "Opcion 3: cancelar aplicacion de credito"<<endl;
            cout << "Opcion 4: revisar creditos"<<endl;
            cout << "Opcion 5: pago de creditos"<<endl;
            cout << "Opcion 6: preguntas frecuentes"<<endl;
            cin >> opcion;
            if (opcion == 1)
            {
            	nuevaSolicitudDeCredito(interfazDeUsuario);
            	guardarDatosAplicacionDB(interfazDeUsuario->getListaAplicaciones(),systemq);
            }
            else if(opcion == 2)
            {	int simulacion = 0;
            	while (simulacion == 0)
            		{
            		cout<< "Digite un valor total que desea creditar"<<endl;
            		float monto = 0;
            		cin>>monto;
            		cout<<"Digite el numero de cuotas que desea"<<endl;
            		int cuotas = 0;
            		cin >>cuotas;
            		interfazDeUsuario->SimulacionDeCredito(monto,cuotas);
            		cout<<"Desea volver a simular digite 0"<<endl;
            		cin >> simulacion;
            		}
            }
            else if (opcion == 3)
            {
            	float valorABuscar = 0;
            	bool respuesta = false;
            	cout << "Digite el monto que solicito"<<endl;
            	cin >> valorABuscar;
            	respuesta = interfazDeUsuario->eliminarSolicitud(valorABuscar);
            	if (respuesta == true)
            	{
            		cout<<"Se elimino su solicitud"<<endl;
            	}
            	else 
            	{
            		cout<<"No se pudo eliminar su solicitud"<<endl;
            		cout<<"Se buscara en la base de datos externa"<<endl;
            		ostringstream transformador;
            		transformador<<valorABuscar;
            		respuesta = systemq->eliminarSolicitud(interfazDeUsuario->getCliente()->getNumeroDeCedula(),transformador.str());
            		if (respuesta == true)
            		{
            			cout <<"Se elimino su solicitud"<<endl;
            		}
            	}

            }
            else if (opcion == 4)
            {
            	//systemq->cargarDatosCreditos (interfazDeUsuario->getCliente()->getNumeroDeCedula());
            	list<credit *> listaCreditos;
            	listaCreditos = systemq->getListaCred();
            	cout<<"Sus creditos son : "<<endl;
            	int cont = 0;
            	for (credit* i : listaCreditos)
            		{
            			
            			
            			if (i->getCliente()->getNumeroDeCedula() == interfazDeUsuario->getCliente()->getNumeroDeCedula())
            			{
            			++cont;
            			cout<<"credito numero "<<cont<<endl;
            			cout<<*i;
            			}
            		}
            }
            else if (opcion == 5)
            {
            	//systemq->cargarDatosCreditos (interfazDeUsuario->getCliente()->getNumeroDeCedula());
            	list<credit *> listaCreditos = systemq->getListaCred();
            	cout<<"Sus creditos son : "<<endl;
            	int cont = 0;
            	for (credit* i : listaCreditos)
            		{
            			++cont;
            			cout<<"credito numero "<<cont<<endl;
            			if (i->getCliente()->getNumeroDeCedula() == interfazDeUsuario->getCliente()->getNumeroDeCedula())
            			{
            			cout<<*i;
            			}
            		}
            	cout<< "Seleccione un credito al digitar el monto del mismo";
            	float monto = 0;
            	cin >> monto;
            	cout<< "Desea pagarlo completo o pagar el minimo, digite 1 para la primera opcion o 2 para la segunda";
            	int desicionx = 0;
            	cin >> desicionx;
            	if (desicionx == 1)
            		{
            				for (credit* i : listaCreditos)
            		{
            			if (i->getMonto()==monto)
            				{
            					cout<< "Digite el monto para pagar todo el credito"<<endl;
            					float montoTotal = 0;
            					cin>>montoTotal;
            					i->pagoDeCreditoTotal(montoTotal);
            					int columna = i->getEstado();
            					ostringstream ayuda;
            					ayuda<<columna;
            					float cosa = 0;
            					cosa = i->getMonto();
            					ostringstream ayuda2;
            					ayuda2<<cosa;
            					systemq->updateCreditos("estado", ayuda.str() ,ayuda2.str());
            				}
            		}
            		}
            	if (desicionx == 2)
            		{
            			for (credit* i : listaCreditos)
            			{
            				if (i->getMonto()==monto)
            					{
	            					cout<< "Digite el monto para pagar el credito"<<endl;
	            					float montoTotal = 0;
	            					cin>>montoTotal;
	            					i->pagoDeCreditoMinimo(montoTotal);
	            					int columna = i->getEstado();
	            					ostringstream ayuda;
	            					ayuda<<columna;
	            					float cosa = 0;
	            					cosa = i->getMonto();
	            					ostringstream ayuda2;
	            					ayuda2<<cosa;
	            					systemq->updateCreditos("estado", ayuda.str() ,ayuda2.str());
	            				}
            			}
            		}

            }
            if (opcion == 6)
            	{
            		cout<< "FAQ"<<endl;
            		cout<< "¿Como es el proceso de credito?"<<endl;
            		cout<< "Se debe primero llenar una solicitud y esperar a que un analista diligencie el proceso de aprobacion"<<endl;
            		cout<< "luego recibira un correo con la respeusta."<<endl;
            		cout<< endl;
            		cout<< "¿Por que no se aprueba un credito?"<<endl;
            		cout<< "Un credito no se aprueba porque no cumplen los puntos minimos de aprobación"<<endl;
            		cout<<endl;
            		cout<< "¿Cuanto tiempo se demora el tramite?"<<endl;
            		cout<< "Puede tardar de tres a cinco dias habiles"<<endl;
            		cout<< endl;
            	}
            else
            {

            }
		}
				}
	else if (resl == 1)
				{
			analist *nuevo2 = NULL;
			bool cicloAnalista = false;
			cout<< "Digite su usuario ";
			cin>> usuario;
			cout<< "Digite su password ";
			cin>> password;
			sign_in_interface *entrada = new sign_in_interface(usuario,password);
			if(entrada->getAnalist() != NULL)
				{
				while (cicloAnalista == false){
					analist_interface * fachada = new analist_interface();
					cout<<"Menu de analistas"<<endl;
					cout<<"Opcion 1: Fabrica de creditos"<<endl;
					cout<<"Opcion 2: Ingerso de cobro"<<endl;
					cout<<"Opcion 3: Reportes"<<endl;
					int resla = 0;
					cin>>resla;

					if (resla == 1)
						{
							cout<< "Información de solicitudes : " << endl;
							for (credit_application * i : listaSolicitudes)
							{
								cout<< *i << endl;
							}
							cout << "Seleccionar una solicitud, digitando el nombre del cliente y el monto solicitado"<<endl;
							string nombre = "";
							float monto = 0;
							cin >> nombre;
							cin >> monto;
							credit_application * solicitudDeCredito = NULL;
							for (credit_application * i : listaSolicitudes)
							{
								if (i->getCliente()->getNombre() == nombre && i->getCuota() == monto)
									{
										solicitudDeCredito = i;
									}
							}
							client * clienteDeSolicitud = systemq->buscarClienteDB(solicitudDeCredito->getCliente()->getNumeroDeCedula());
							credit* creditoAprobado = NULL;
							creditoAprobado = fachada->fabricaDeCredito(solicitudDeCredito,clienteDeSolicitud);
							if (creditoAprobado != NULL)
								{
									list <credit *> listaAuxiliar;
									listaAuxiliar.push_back(creditoAprobado);
									cout << *creditoAprobado<<endl;
									systemq->guardarCreditosBaseDeDatos(listaAuxiliar);
									
								}
						}
					else if (resla == 2)
						{
							cout<< "Información de creditos :"<<endl;
							list <credit *> listaDeCreditos;
							listaDeCreditos = systemq->getListaCred();
							for (credit * credito : listaDeCreditos)
								{
									cout << *credito << endl;
								}
							cout << "Seleccione un credito digitando el nombre del cliente y el monto del credito"<<endl;
							string nombre = "";
							float monto = 0;
							cin >> nombre;
							cin >> monto;
							for (credit * credito : listaDeCreditos)
								{
									if(credito->getCliente()->getNombre() == nombre && credito->getMonto()==monto)
										{
											list<overdue_credit*> morosos;
											systemq->cargarListaMorosos(morosos);
											collection* cobro = NULL;
											cobro = fachada->generarCobro(credito,morosos);
											systemq->guardarCobroBaseDeDatos(cobro,credito->getCuotas());
										}
								}
						}
					else if (resla == 3)
						{
							cout << "Menu de reportes" << endl;
							cout << "Opcion 1: reporte de creditos"<< endl;
							cout << "Opcion 2: reporte de morosos"<< endl;
							cout << "Opcion 3: reporte de cobros"<< endl; 
							int selector = 0;
							cin >> selector;
							if (selector == 3)
								{
									cout << "Los cobros realizados son : "<<endl; 
									systemq->cargarDatosCobros();
								}
							if (selector == 1)
								{
									cout << "los creditos realizados son : "<<endl;
									list <credit *> listaDeCreditos;
									listaDeCreditos = systemq->getListaCred();
									list <overdue_credit*> listaDeMoras = systemq->getListaDeMoras();

									for (credit * credito : listaDeCreditos)
										{
										cout << *credito << endl;
										}
								}
							if (selector == 2)
								{
									cout<< "los morosos son :"<<endl;
									list<overdue_credit*> listaDeMorosos;
									systemq->cargarListaMorosos(listaDeMorosos);

									for (overdue_credit * i : listaDeMorosos)
										{
											client * clienteDeMora = systemq->buscarClienteDB(reinterpret_cast<char *>(i->getId()));
											cout<< *clienteDeMora<< endl;
											cout<< *i<<endl;
										}
								}
						}
				}}

		}
		else 
	{
		cout<< "Creador de usuarios"<<endl;
		cout<< "Digite su nombre"<<endl;
		string nombre = "";
		cin>>nombre;
		cout<< "Digite su apellido"<<endl;
		string apellido = "";
		cin>>apellido;
		cout<< "Digite su cedula"<<endl;
		string cedula = "";
		cin>>cedula;
		cout<< "Digite su fecha de nacimiento"<<endl;
		string fechaDeNacimiento = "";
		cin>>fechaDeNacimiento;
		cout<<"Digite su correo electronico"<<endl;
		string correo = "";
		cin>>correo;
		cout<<"Digite su sexo f o m"<<endl;
		char sexo;
		cin >> sexo;
		cout<<"Digite su direccion de residencia"<<endl;
		string direccion = "";
		cin>>direccion;
		cout<<"Digite su estado civil"<<endl;
		string estadoCivil = "";
		cin>>estadoCivil;
		cout<<"Digite su tiempo laborando en su empresa actual"<<endl;
		string tiempo = "";
		cin>>tiempo;
		cout<<"Digite su tarjeta de credito"<<endl;
		string tarjeta = "";
		cin>>tarjeta;
		list<client*> listaClientes;
		client* nuevoCliente = new client(nombre,apellido,fechaDeNacimiento,sexo,estadoCivil,cedula,direccion,tarjeta,correo,tiempo);
		listaClientes.push_back(nuevoCliente);
		systemq->guardarClientesBaseDeDatos(listaClientes);

	}
	
	
	return 0;
	}

	void nuevaSolicitudDeCredito(user_interface *interfazDeUsuario)
	{
		float ingresosMensuales = 0;
		string nombreDeLaEmpresa = "";
		string telefonoDeLaEmpresa = "";
		float gastos = 0;
		float ingresosFamiliares = 0;
		float cuota = 0;
		float monto = 0;
		cout << "Creador de creditos"<<endl;
		cout << "Digite sus ingresos mensuales"<<endl;
		cin >> ingresosMensuales;
		cout << "Digite sus gastos"<<endl;
		cin >> gastos;
		cout << "Digite el nombre de la empresa"<<endl;
		cin >> nombreDeLaEmpresa;
		cout << "Digite el telefono de la empresa"<<endl;
		cin >> telefonoDeLaEmpresa;
		cout << "digite los ingresos de su familia"<<endl;
		cin >> ingresosFamiliares;
		cout << "digite el monto que desea solicitar"<<endl;
		cin >> cuota; 

		interfazDeUsuario->nuevaAplicacionDeCredito(ingresosMensuales,nombreDeLaEmpresa,telefonoDeLaEmpresa,gastos,ingresosMensuales,cuota);
	}

	void guardarDatosAplicacionDB(list<credit_application *> listaDeGuardado, sistema * systemq)
	{

		bool resultado = systemq->guardarSolicitudesBaseDeDatos(listaDeGuardado);
		cout<<resultado<<endl;
	}