
sign_in_interface::sign_in_interface(string user, string password)
{
	this->user = user;
	this->password = password;
	sistema *nuevo = new sistema();
	
	this->a = nuevo->buscarClienteDB(password);

	if (this->a == NULL)
	{
		this->b = nuevo->buscarAnalistaDB(password);
	}

	
}

sign_in_interface::~sign_in_interface(){}

client* sign_in_interface::getClient()
{
	return this->a;
}
analist* sign_in_interface::getAnalist()
{
	return this->b;
}
