mailer_handler::mailer_handler (const string texto, const string correo,const string email, const string password, const string asunto)
{
	this->texto = texto;
	this->correo=correo;
	this->email=email;
	this->password=password;
	this->asunto = asunto;
}


mailer_handler::~mailer_handler(){}

void mailer_handler::createMailDoc()
{
	ofstream mailer_creator("newMail.txt");
	mailer_creator << correo;
	mailer_creator << ",";
	mailer_creator << password;
	mailer_creator << ",";
	mailer_creator << email;
	mailer_creator << ",";
	mailer_creator << '"';
	mailer_creator << '"';
	mailer_creator << '"';
	mailer_creator << "From:";
	mailer_creator << asunto;
	mailer_creator <<endl;
	mailer_creator << ",";
	mailer_creator << "Subject: email Prestame SAS";
	mailer_creator << endl;
	mailer_creator << texto;
	mailer_creator << '"';
	mailer_creator << '"';
	mailer_creator << '"';

	mailer_creator.close(); 
}

void mailer_handler::sendMail()
	{
		string filename = "emailx.py";
		std::string command = "python ";
		command += filename;
		system(command.c_str());
	}

