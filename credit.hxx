int credit::id = 0;

credit::credit(float monto, int Administracion, float seguro, float intereses, int plataforma, float iva, client *cliente, int cuotas)
{
	this->monto = monto;
	this->Administracion = Administracion;
	this->seguro = seguro;
	this->intereses = intereses;
	this->plataforma = plataforma;
	this->iva = iva;
	this->cliente = cliente;
	this->cuotas = cuotas;
	this->id++;

	time_t timer;	//inicialización del tiempo a tiempo actual.
	timer = time(0);
	this->ltm = localtime(&timer);

	this->estado = 1;
}

credit::~credit(){}

bool credit::pagoDeCreditoMinimo(float montoPago)
	{
		if (estado == 1){
			float total = (monto+Administracion+seguro+intereses+plataforma)/cuotas;
			total += (total*iva)+total;
			if (montoPago-total == 0)
				{
				string reslo = "pago credito";
				pair<string,float> pago(reslo,total);
				this->Operaciones.push_back(pago);
				RevisionPago();
				return true;
				}
			else
				{
				return false;	
				}
						}
		if (estado == 2)
			{
				float totalIntermedio = 0;
				for (overdue_credit aux : listaCredMor)
					{
						if(aux.getValor() > 0){
						totalIntermedio += (aux.getValor()/aux.getNumCuotas());
						
						}

					}
				float total = (monto+Administracion+seguro+intereses+plataforma+totalIntermedio)/cuotas;
				total = (total*iva) + total;
				if (montoPago - total)
					{
						string reslo = "pago credito";
						pair<string,float> pago(reslo,total);
						this->Operaciones.push_back(pago);

						for (overdue_credit aux : listaCredMor)
							{
							float auxiliar = aux.getValor(); //intermedio.
							aux.setValor(auxiliar-totalIntermedio);
							int cuotasNuvo = aux.getNumCuotas() - 1;
							aux.setNumCuotas(cuotasNuvo);
							}
						RevisionPago();
						return true;
					}
				else
					{
						return false;
					}
			}
		if (estado == 3)
			{
				return false;
			}
		return false;
	}

bool credit::pagoDeCreditoTotal(float montoPago)
	{
		if (estado == 1)
		{
			float total = monto+Administracion+seguro+intereses+plataforma;
			total = (total * iva) + total;
			if ((montoPago - total) == 0)
				{
					string reslo = "pago total";
					pair<string,float> pago(reslo,total);
					this->Operaciones.push_back(pago);
					RevisionPago();
					cout<<"Se pago"<<endl;
					return true;			
				}
			else
				{
					return false;
				}
		}

		if (estado == 2)
			{
				float totalIntermedio = 0;
				for (overdue_credit aux : listaCredMor)
					{
						if(aux.getValor() > 0){
						totalIntermedio += (aux.getValor());
						}
					}
				float total = monto+Administracion+seguro+intereses+plataforma+totalIntermedio;
				total = (total * iva) + total;
					if ((montoPago - total) == 0)
						{
							string reslo = "pago total";
							pair<string,float> pago(reslo,total);
							this->Operaciones.push_back(pago);
							RevisionPago();
							for (overdue_credit aux : listaCredMor)
								{
									if (aux.getValor() > 0)
										{
											aux.setValor(0);
											aux.setNumCuotas(0);
										}
								}
							return true;	
						}

			}
		if (estado == 3)
			{
				return false;
			}	
		return false;
	}

void credit::RevisionPago()
	{
		float pagoActual=0;
		float total = monto+Administracion+seguro+intereses+plataforma;
		total = (total * iva) + total;
		for (pair<string,float> aux : Operaciones)
			{
				pagoActual += aux.second;
			}
		if (this->estado == 1)
			{
				if (pagoActual == total)
					{
						this->estado = 3;
					}
				if (pagoActual < total)
					{
						this->estado = 1;
					}
			}
		if (this->estado == 2)
			{
				float totalIntermedio = 0;
				for (overdue_credit aux : listaCredMor)
					{
						if(aux.getValor() > 0){
						totalIntermedio += (aux.getValor());
						}
					}
				total += totalIntermedio;
				if (pagoActual == total)
					{
						this->estado = 3;
					}
				if (pagoActual < total)
					{
						this->estado = 2;
					}
			}
	}
bool credit::revisionFecha()
	{
		time_t timer;	//inicialización del tiempo a tiempo actual.
		timer = time(0);
		tm *auxi = localtime(&timer);
		int dia = 0;
		int mes = 0;
		int ano = 0;

		dia = auxi->tm_mday;
		mes = 1 + auxi->tm_mon;
		ano = 1900 + auxi->tm_year;

		if (ltm->tm_mday < dia && (ltm->tm_year + 1900)<= ano)
			{
				if (ltm->tm_mon == mes && (ltm->tm_year + 1900)== ano)
					{
						return false;
					}
				else
					{
						return true;
					}
			}
		return false;
	}

int credit::getID()
{
	return this->id;
}
float credit::getMonto()
{
	return this->monto;
}
int credit::getAdministracion()
{
	return this->Administracion;
}
float credit::getSeguro()
{
	return this->seguro;
}
float credit::getIntereses()
{
	return this->intereses;
}
int credit::getPlataforma()
{
	return this->plataforma;
}
float credit::getIva()
{
	return this->iva;
}
int credit::getCuotas()
{
	return this->cuotas;
}
tm* credit::getLtm()
{
	return this->ltm;
}
client* credit::getCliente()
{
	return this->cliente;
}
int credit::getEstado()
{
	return this->estado;
}
void credit::setLtm(tm * ltm)
{
	this->ltm = ltm;
}
void credit::setEstado(int estado)
{
	this->estado = estado;
}
list<pair<string,float> > credit::getOperaciones()
{
	return this->Operaciones;
}