collection::collection(string cedula, float valorBase, int Administracion, float Seguro, int usoDeLaPlataforma, list<overdue_credit *> listaMora)
{
	this->cedula = cedula;
	this->valorBase = valorBase;
	this->Administracion = Administracion;
	this->Seguro = Seguro;
	this->usoDeLaPlataforma = usoDeLaPlataforma;
	this->listaMora = listaMora;
	this->totalCobro = 0;
}

collection::~collection(){}

void collection::calcularTotalCobro()
{
	
	float total= 0;
	total += this->valorBase + this->Administracion + this->Seguro + this->usoDeLaPlataforma;
	for (overdue_credit *aux : listaMora)
	{
		total += (aux->getNumCuotas()*aux->getValor());
	}
	this->totalCobro = total;
}

float collection::getTotalCobro()
{
	return this->totalCobro;
}