credit_approval_interface::credit_approval_interface(float ingresos, float gastos, float cuota)
{
	this->ingresos = ingresos;
	this->gastos = gastos;
	this->cuota = cuota;
}

credit_approval_interface::~credit_approval_interface(){}

bool credit_approval_interface::approveCredit()
{
	srand(time(NULL));
	int resl = rand()%1;
	int inclusion = 100;
	if (resl == 1)
		{
			int inclusion = rand()%100+1;
		}
	else
		{
			int inclusion = 0;
		}
	
	int historialCred = rand()%100;
	int numconsul = rand()%20;

	float disponible = (this->ingresos - this->gastos)*0.25;

	int puntosCapacidadDePago = 0;
	int puntosCentralesDeRiesgo = 0;
	int puntosHistorialCrediticio = 0;
	int puntosConsultaPorCredito = 0;
	int aprovar = 0;

	if (disponible<this->cuota)
		{
			puntosCapacidadDePago = 0;
		}
	if (disponible > this->cuota)
		{
			puntosCapacidadDePago = 50;
		}
	if (disponible > (this->cuota*1.5))
		{
			puntosCapacidadDePago = 75;
		}
	if (inclusion == 0)
		{
			puntosCentralesDeRiesgo = 75;
		}
	else 
		{
			if (inclusion>0 && inclusion<=5)
				{
					puntosCentralesDeRiesgo = 10;
				}
			if (inclusion>5 && inclusion<=11)
				{
					puntosCentralesDeRiesgo = 15;
				}
			if (inclusion == 12)
				{
					puntosCentralesDeRiesgo = 25;
				}
			if (inclusion > 12 && inclusion<=23)
				{
					puntosCentralesDeRiesgo = 25;
				}
			if (inclusion>24)
				{
					puntosCentralesDeRiesgo = 55;
				}
		}
	if (historialCred < 12)
		{
			puntosHistorialCrediticio = 12;
		}
	if (historialCred >12 && historialCred <= 23)
		{
			puntosHistorialCrediticio = 35;
		}
	if(historialCred > 24 && historialCred <= 47)
		{
			puntosHistorialCrediticio = 60;
		}
	if(historialCred > 48)
		{
			puntosHistorialCrediticio = 75;
		}
	if (numconsul == 0)
		{
			puntosConsultaPorCredito = 75;
		}
	if (numconsul == 1)
		{
			puntosConsultaPorCredito = 60;
		}
	if (numconsul == 2)
		{
			puntosConsultaPorCredito = 45;
		}
	if (numconsul == 3)
		{
			puntosConsultaPorCredito = 25;
		}
	if (numconsul > 4)
		{
			puntosConsultaPorCredito = 20;
		}
	aprovar = puntosHistorialCrediticio + puntosConsultaPorCredito + puntosCentralesDeRiesgo + puntosCapacidadDePago;

	if (aprovar >= 200)
		{
			return true;
		}
	return false;
}