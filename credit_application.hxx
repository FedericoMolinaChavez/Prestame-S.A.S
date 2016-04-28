
credit_application::credit_application(client *aux,float ingresosMensuales,string nombreDeLaEmpresa,string telefonoDeLaEmpresa,float gastos, float ingresosFamiliares,float cuota)
{
	this->aux = aux;
	this->ingresosMensuales = ingresosMensuales;
	this->nombreDeLaEmpresa = nombreDeLaEmpresa;
	this->telefonoDeLaEmpresa = telefonoDeLaEmpresa;
	this->gastos = gastos;
	this->ingresosFamiliares = ingresosFamiliares;
	this->cuota = cuota;
}

credit_application::~credit_application(){}

float credit_application::getIngresosMensuales()
{
	return this->ingresosMensuales;
}

client* credit_application::getCliente()
{
	return this->aux;
}

string credit_application::getNombreDeLaEmpresa()
{
	return this->nombreDeLaEmpresa;
}

string credit_application::getTelefonoDeLaEmpresa()
{
	return this->telefonoDeLaEmpresa;
}

float credit_application::getGastos()
{
	return this->gastos;
}

float credit_application::getIngresosFamiliares()
{
	return this->ingresosFamiliares;
}

float credit_application::getCuota()
{
	return this->cuota;
}