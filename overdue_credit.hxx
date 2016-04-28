overdue_credit::overdue_credit(float valor, int numCuotas, int id)
{
	this->valor = valor;
	this->numCuotas = numCuotas;
	this->id = id;
}

overdue_credit::~overdue_credit(){}

float overdue_credit::getValor()
{
	return this->valor;
}

int overdue_credit::getNumCuotas()
{
	return this->numCuotas;
}

void overdue_credit::setValor(float valor)
{
	this->valor = valor;
}

void overdue_credit::setNumCuotas(int numCuotas)
{
	this->numCuotas = numCuotas;
}
int overdue_credit::getId(){return this->id;}
