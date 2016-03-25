analist::analist(string nombre, string password)
{
	this->nombre = nombre;
	this->password = password;
}

analist::~analist(){}

string analist::getNombre()
{
	return this->nombre;
}
string analist::getPassword()
{
	return this->password;
}

void analist::setNombre(string nombre)
{
	this->nombre = nombre;
}

void analist::setPassword(string password)
{
	this->password = password;
}