user_interface::user_interface(client *cliente)
{
	this->cliente = cliente;
}
user_interface::~user_interface(){}
bool user_interface::nuevaAplicacionDeCredito(float ingresosMensuales,string nombreDeLaEmpresa,string telefonoDeLaEmpresa,float gastos, float ingresosFamiliares,float cuota)
{
	credit_application *nuevo = new credit_application(this->cliente,ingresosMensuales,nombreDeLaEmpresa,telefonoDeLaEmpresa,gastos,ingresosFamiliares,cuota);
	aplicaciones.push_back(nuevo);
	return true;
}
bool user_interface::pagarCredito(float valor)
{
	return true;
}
bool user_interface::cancelarAplicacion()
{
	return true;
}
void user_interface::simularCredito()
{
	
}
list<credit_application *> user_interface::getListaAplicaciones()
{
	return this->aplicaciones;
}

list<credit *> user_interface::getListaCreditos()
{
	return this->creditos;
}
void user_interface::setListaAplicaciones()
{

}
void user_interface::serListaCreditos()
{

}

void user_interface::SimulacionDeCredito(float monto, int cuotas)
{
	float iva = 0.16;
	float Intereses = 0.02;
	float seguro = 0.05;
	int plataforma = 15000;
	float min = 100000;
	float max = 1000000;
	float datoCuota = 0;
	float total = (monto*iva)+(monto*Intereses)+(monto*seguro)+plataforma+monto;

	if (total<min && total>max)
	{
		std::cout<<"El credito no se puede realizar"<<std::endl;
		std::cout<<"digite nuevos valores para el monto"<<std::endl;
	}
	else
	{
		datoCuota = total/cuotas;
		if (datoCuota < 50000 || cuotas > 12)
			{
				std::cout<<"Digite un diferente numero de cuota"<<std::endl;
			}
		if (datoCuota>50000 && cuotas <= 12)
		{
			std::cout<<"El valor de su credito seria : ";
			std::cout<< total<<std::endl;
			std::cout<<"El valor de cada cuota seria: ";
			std::cout<<datoCuota<<std::endl;

		}
	}
}
bool user_interface::eliminarSolicitud(float valorABuscar)
{
	for (credit_application *aux : this->aplicaciones)
	{
		if (aux->getCuota() == valorABuscar)
		{
			this->aplicaciones.remove(aux);
			return true;
		}
	}
	return false;
}

client* user_interface::getCliente()
{
	return this->cliente;
}