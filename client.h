#ifndef CLIENT_CLASS
#define CLIENT_CLASS
using namespace std;
class client 
{
	private:
		string nombre;
		string apellido;
		string fechaDeNacimiento;
		char sexo;
		string estadoCivil;
		string numeroDeCedula;
		string direccionDeResidencia;
		string tarjetaDeCredito;
		string correoElectronico;
		string tiempoLaborandoEnLaEmpresa;
	public:
		client(string nombre,string apellido,string fechaDeNacimiento,char sexo,string estadoCivil,string numeroDeCedula,string direccionDeResidencia,string tarjetaDeCredito,string correoElectronico,string tiempoLaborandoEnLaEmpresa); //constructor
		~client();
		string getNombre(); //getters and setters for cliente.
		string getApellido();
		char getSexo();
		string getEstadoCivil();
		string getNumeroDeCedula();
		string getDireccionDeResidencia();
		string getTarjetaDeCredito();
		string getCorreoElectronico();
		string getTiempoLaborandoEnLaEmpresa();
		void setNombre(string nombre);
		void setApellido(string apellido);
		void setSexo (char sexo);
		void setFechaDeNacimiento(string fechaDeNacimiento);
		void setEstadoCivil (string estadoCivil);
		void setNumeroDeCedula(string numeroDeCedula);
		void setDireccionDeResidencia (string direccionDeResidencia);
		void setTarjetaDeCredito (string setTarjetaDeCredito);
		void setCorreoElectronico (string correoElectronico);
		void setTiempoLaborandoEnLaEmpresa (string tiempoLaborandoEnLaEmpresa);

};
#include "client.hxx"
#endif