client::client(string nombre,string apellido,string fechaDeNacimiento,char sexo,string estadoCivil,string numeroDeCedula,string direccionDeResidencia,string tarjetaDeCredito,string correoElectronico,string tiempoLaborandoEnLaEmpresa)
	{
		this->nombre = nombre;
		this->apellido = apellido;
		this->fechaDeNacimiento = fechaDeNacimiento;
		this->estadoCivil = estadoCivil;
		this->numeroDeCedula = numeroDeCedula;
		this->direccionDeResidencia = direccionDeResidencia;
		this->tarjetaDeCredito = tarjetaDeCredito;
		this->tiempoLaborandoEnLaEmpresa = tiempoLaborandoEnLaEmpresa;
		this->correoElectronico = correoElectronico;
	}
client::~client(){}

string client::getNombre()
	{
		return this->nombre;
	}

string client::getApellido()
{
	return this->apellido;
}
char client::getSexo()
{
	return this->sexo;
}
string client::getEstadoCivil()
{
	return this->estadoCivil;
}
string client::getNumeroDeCedula()
{
	return this->numeroDeCedula;
}
string client::getDireccionDeResidencia()
{
	return this->direccionDeResidencia;
}
string client::getTarjetaDeCredito()
{
	return this->tarjetaDeCredito;
}
string client::getCorreoElectronico()
{
	return this->correoElectronico;
}
string client::getTiempoLaborandoEnLaEmpresa()
{
	return this->tiempoLaborandoEnLaEmpresa;
}
void client::setNombre(string nombre)
{
	this->nombre = nombre;
}
void client::setApellido(string apellido)
{
	this->apellido = apellido;
}
void client::setSexo (char sexo)
{
	this->sexo = sexo;
}
void client::setFechaDeNacimiento(string fechaDeNacimiento)
{
	this->fechaDeNacimiento = fechaDeNacimiento;
}
void client::setEstadoCivil (string estadoCivil)
{
	this->estadoCivil = estadoCivil;
}
void client::setNumeroDeCedula(string numeroDeCedula)
{
	this->numeroDeCedula = numeroDeCedula;
}
void client::setDireccionDeResidencia (string direccionDeResidencia)
{
	this->direccionDeResidencia = direccionDeResidencia;
}
void client::setTarjetaDeCredito (string tarjetaDeCredito)
{
	this->tarjetaDeCredito = tarjetaDeCredito;
}
void client::setCorreoElectronico (string correoElectronico)
{
	this->correoElectronico = correoElectronico;
}
void client::setTiempoLaborandoEnLaEmpresa (string tiempoLaborandoEnLaEmpresa)
{
	this->tiempoLaborandoEnLaEmpresa = tiempoLaborandoEnLaEmpresa;
}