ostringstream lecturaDbs;

/*int callback(void *NotUsed, int argc, char **argv, 
                    char **azColName) {
    
    NotUsed = 0;
    
    for (int i = 0; i < argc; i++) {

        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    
    printf("\n");
    
    return 0;
}*/

int callback (void *NotUsed, int argc, char **argv, 
                    char **azColName)
{
	
	NotUsed = 0;
	for (int i = 0; i < argc; i++)
	{
		lecturaDbs << azColName[i]
						   << " "
						   << argv[i]
						   << " ";

	}
	return 0;
}


int callback2 (void *NotUsed, int argc, char **argv, 
                    char **azColName)
{
	NotUsed = 0;
	for (int i = 0; i < argc; i++)
	{
		lecturaDbs << argv[i]
				   << " ";

	}
	
	return 0;
}


client * crearCliente(string clienteCadena)
	{
		char_separator<char> sep(" ");
    	tokenizer<char_separator<char>> tokens(clienteCadena, sep);
    	bool separador = false;
    	list <string> listaAyuda;
    	int x = 1;
    	if (clienteCadena.size()>0){
    	for (const auto & t : tokens)
    	{

    		if ((x%2)==0)
    		{
    			listaAyuda.push_back(t);
    			separador = false;
    		}
    		x++;
    	}
		string nombre = "";
		string apellido = "";
		string fechaDeNacimiento = "";
		const char* sexo;
		string estadoCivil = "";
		string numeroDeCedula = "";
		string direccionDeResidencia = "";
		string tarjetaDeCredito = "";
		string correoElectronico = "";
		string tiempoLaborandoEnLaEmpresa = "";
		listaAyuda.pop_front();
		listaAyuda.pop_front();
		nombre = listaAyuda.front(),
		listaAyuda.pop_front();
		apellido = listaAyuda.front();
		listaAyuda.pop_front();
		fechaDeNacimiento = listaAyuda.front();
		listaAyuda.pop_front();
		sexo = listaAyuda.front().c_str();
		listaAyuda.pop_front();
		estadoCivil = listaAyuda.front();
		listaAyuda.pop_front();
		numeroDeCedula = listaAyuda.front();
		listaAyuda.pop_front();
		direccionDeResidencia = listaAyuda.front();
		listaAyuda.pop_front();
		tarjetaDeCredito = listaAyuda.front();
		listaAyuda.pop_front();
		correoElectronico = listaAyuda.front();
		listaAyuda.pop_front();
		tiempoLaborandoEnLaEmpresa = listaAyuda.front();
    	client* retorno = new client(nombre,apellido,fechaDeNacimiento,*sexo,estadoCivil,numeroDeCedula,direccionDeResidencia,tarjetaDeCredito,correoElectronico,tiempoLaborandoEnLaEmpresa);
		return retorno;}
		return NULL;
	}


analist * crearAnalista(string clienteCadena)
	{
		
		char_separator<char> sep(" ");
    	tokenizer<char_separator<char>> tokens(clienteCadena, sep);
    	bool separador = false;
    	list <string> listaAyuda;
    	int x = 1;
    	for (const auto & t : tokens)
    	{

    		if ((x%2)==0)
    		{
    			listaAyuda.push_back(t);
    			separador = false;
    		}
    		x++;
    	}
    
    	listaAyuda.pop_front();
    	string nombre ="";
    	string password = "";
    	nombre = listaAyuda.front();
    	listaAyuda.pop_front();
    	password = listaAyuda.front();
    	listaAyuda.pop_front();
    	analist * retorno = new analist(nombre,password);
    	return retorno;
	}
sistema::sistema(){}

sistema::~sistema(){}


bool sistema::guardarClientesBaseDeDatos(list<client *> clientes)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;

	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
		
		int x = 0;
		string nombre = "";
		string apellido = "";
		string fechaDeNacimiento = "";
		char sexo;
		string estadoCivil = "";
		string numeroDeCedula = "";
		string direccionDeResidencia = "";
		string tarjetaDeCredito = "";
		string correoElectronico = "";
		string tiempoLaborandoEnLaEmpresa = "";
		string transicion = "";
		ostringstream os;
	for (client *aux : clientes)
	{	++x;
		nombre = aux->getNombre(); //getters and setters for cliente.
		apellido =  aux->getApellido();
		sexo = aux->getSexo();
		estadoCivil =  aux->getEstadoCivil();
		numeroDeCedula =  aux->getNumeroDeCedula();
		direccionDeResidencia =  aux->getDireccionDeResidencia();
		tarjetaDeCredito =  aux->getTarjetaDeCredito();
		correoElectronico =  aux->getCorreoElectronico();
		tiempoLaborandoEnLaEmpresa =  aux->getTiempoLaborandoEnLaEmpresa();
		fechaDeNacimiento = aux->getFechaDeNacimiento();


		os<<("INSERT INTO clients VALUES( ")
		<<numeroDeCedula
		<<(",")
		<<(numeroDeCedula)
		<<(",'")
		<<(nombre)
		<<("','")
		<<(apellido)
		<<("','")
		<<(fechaDeNacimiento)
		<<("','")
		<<sexo
		<<("','")
		<<(estadoCivil)
		<<("','")
		<<(numeroDeCedula)
		<<("','")
		<<(direccionDeResidencia)
		<<("','")
		<<(tarjetaDeCredito)
		<<("','")
		<<(correoElectronico)
		<<("','")
		<<(tiempoLaborandoEnLaEmpresa)
		<<("');"); 
		transicion = os.str();
		
		
		lecturaDbs.str("");
		rc = sqlite3_exec(db,transicion.c_str(),callback,0,&zErr);
		if(rc)
			{
				fprintf(stderr,"sql error :%s\n",sqlite3_errmsg(db));
				sqlite3_close(db);
			}
		else
		{
			return true;
		}
		

	}	
	sqlite3_close(db);
	return false;
}

bool sistema::guardarAnalistasBaseDeDatos(list<analist *> analistas)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;

	string nombre = "";
	string password = "";
	int x = 0;
	ostringstream os;
	string transicion = "";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}

	for(analist * aux : analistas)
		{
			x++;
			nombre = aux->getNombre();
			password = aux->getPassword();

			os << "INSERT INTO analists VALUES("
			   << password
			   << (",'")
			   << (password)
			   << "','"
			   << (nombre)
			   << "');";
			transicion = os.str();
			lecturaDbs.str("");
			rc = sqlite3_exec(db,transicion.c_str(),callback,0,&zErr);
			if(rc)
			{
				fprintf(stderr,"sql error :%s\n",sqlite3_errmsg(db));
				sqlite3_close(db);
			}
		else
		{
			return true;
		}
		}
	sqlite3_close(db);
	return false;
}
bool sistema::guardarCreditosBaseDeDatos(list<credit*> listaCreditos)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;

	
	int x = 0;
	ostringstream os;
	string transicion = "";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}

	static int id;
	client *cliente = NULL;
		int estado = 0;
		float monto = 0;
		int Administracion = 0;
		float seguro = 0;
		float intereses = 0;
		int plataforma = 0;
		float iva = 0;
		int cuotas = 0;
		tm *ltm = NULL;
		string fecha = "";

	for(credit * aux : listaCreditos)
		{
			x++;
			estado = aux->getEstado();
			monto = aux->getMonto();
			Administracion = aux->getAdministracion();;
			seguro = aux->getSeguro();
			intereses = aux->getIntereses();
			plataforma = aux->getPlataforma();
			iva = aux->getIva();
			cuotas = aux->getCuotas();
			ltm = aux->getLtm();
			cliente = aux->getCliente();
				int dia = ltm->tm_mday;
				int mes = 1 + ltm->tm_mon;
				int ano = 1900 + ltm->tm_year;
					int id = 0;
				   	srand (time(NULL));
					int val1 = rand()%1000;
					int val2 = rand()%1000;
					int val3 = rand()%1000;
					int val4 = rand()%1000;
					int matrix [2][2];
					matrix[0][0] = val1;
					matrix[0][1] = val2;
					matrix[1][0] = val3;
					matrix[1][1] = val4;
					id = abs((matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]));
			os << dia << " " << mes << " " << ano;
			fecha = os.str();
			os.flush();
			os.str("");
			os << "INSERT INTO credits VALUES("
			   << id
			   << (",")
			   << (cliente->getNumeroDeCedula())
			   << (",")
			   << (Administracion)
			   << (",")
			   << seguro
			   << (",")
			   << intereses
			   << (",")
			   << plataforma
			   << (",")
			   << iva
			   << (",")
			   << cuotas
			   << (",'")
			   << fecha
			   << ("','")
			   << monto
			   << "',"
			   << (estado)
			   <<");";
			transicion = os.str();
			lecturaDbs.str("");
			rc = sqlite3_exec(db,transicion.c_str(),callback,0,&zErr);
			if(rc)
			{
				fprintf(stderr,"sql error :%s\n",sqlite3_errmsg(db));
				sqlite3_close(db);
			}
		else
		{
			return true;
		}
		}
	sqlite3_close(db);
	return false;
}


bool sistema::guardarSolicitudesBaseDeDatos(list<credit_application *> aplicacionesDeCredito)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	int x = 0;
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}

		float ingresosMensuales = 0;
		string nombreDeLaEmpresa = "";
		string telefonoDeLaEmpresa = "";
		float gastos = 0;
		float ingresosFamiliares = 0;
		float cuota = 0;
		string cedula = "";
		client *cliente = NULL;
		string transicion = "";
		ostringstream os;
		for (credit_application * aux : aplicacionesDeCredito)
			{
				x++;
				ingresosMensuales = aux->getIngresosMensuales();
				nombreDeLaEmpresa = aux->getNombreDeLaEmpresa();
				telefonoDeLaEmpresa = aux->getTelefonoDeLaEmpresa();
				gastos = aux->getGastos();
				ingresosFamiliares = aux->getIngresosFamiliares();
				cuota = aux->getCuota();
				cliente = aux->getCliente();
				cedula = cliente->getNumeroDeCedula();
				int id = 0;
				   	srand (time(NULL));
					int val1 = rand()%1000;
					int val2 = rand()%1000;
					int val3 = rand()%1000;
					int val4 = rand()%1000;
					int matrix [2][2];
					matrix[0][0] = val1;
					matrix[0][1] = val2;
					matrix[1][0] = val3;
					matrix[1][1] = val4;
					id = abs((matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]));
			
				os << "INSERT INTO creditApplication VALUES ("
				   << id
				   << (",'")
				   << (cedula)
				   << ("',")
				   << ingresosMensuales
				   << (",'")
				   << nombreDeLaEmpresa
				   << ("','")
				   << telefonoDeLaEmpresa
				   << ("',")
				   << gastos
				   << (",")
				   << ingresosFamiliares
				   << (",")
				   << cuota
				   << (");");
				transicion = os.str();
		
				lecturaDbs.str("");
				rc = sqlite3_exec(db,transicion.c_str(),callback,0,&zErr);
				if(rc)
					{
						fprintf(stderr,"sql error :%s\n",sqlite3_errmsg(db));
						sqlite3_close(db);
					}
				else
					{
						return true;
						sqlite3_close(db);
					}
			}
	sqlite3_close(db);	
	return false;
}

bool sistema::guardarCobroBaseDeDatos(collection* cobro,int cuota)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	int x = 0;
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	int id_p = 0;
	float valor = 0;
	int cuotas = 0;
	ostringstream os;
	string transicion = "";
	int id = 0;
				   	srand (time(NULL));
					int val1 = rand()%1000;
					int val2 = rand()%1000;
					int val3 = rand()%1000;
					int val4 = rand()%1000;
					int matrix [2][2];
					matrix[0][0] = val1;
					matrix[0][1] = val2;
					matrix[1][0] = val3;
					matrix[1][1] = val4;
					id = abs((matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]));	
	id_p = atoi(cobro->getCedula().c_str());
	cuotas = cuota;
	valor = cobro->getTotalCobro();
	os << "INSERT into cobros VALUES("
	   << id
	   << " , "
	   << id_p
	   << " , "
	   << valor
	   << " , "
	   << cuotas
	   << ");";
	transicion = os.str();
		
				lecturaDbs.str("");
				rc = sqlite3_exec(db,transicion.c_str(),callback,0,&zErr);
				if(rc)
					{
						fprintf(stderr,"sql error :%s\n",sqlite3_errmsg(db));
						sqlite3_close(db);
					}
				else
					{
						return true;
						sqlite3_close(db);
					}
			
	sqlite3_close(db);	
	return false;
}

list<credit_application*> sistema::cargarDatosSolicitudes()
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion = "";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if (rc)
	{
		fprintf(stderr,"can't open database: %s\n",sqlite3_errmsg(db) );
		sqlite3_close(db);
	}
	os <<"SELECT* FROM creditApplication;";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db,transicion.c_str(),callback2,0,&zErr);
    if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);

        sqlite3_free(zErr);
        sqlite3_close(db);
        
        
    } 

    transicion = lecturaDbs.str();
   
     char_separator<char> sep(" ");
    	tokenizer<char_separator<char>> tokens(transicion, sep);
    	bool separador = false;
    	list <string> listaAyuda;
    	int x = 0;
    	for (const auto & t : tokens)
    	{  		
    			listaAyuda.push_back(t);
    	}
    	client *aux= NULL;
    	float ingresosMensuales = 0;
    	string nombreDeLaEmpresa = "";
    	string telefonoDeLaEmpresa = "";
    	float gastos = 0;
    	float ingresosFamiliares = 0;
    	float cuota = 0;
    	while (!listaAyuda.empty())
    	{
    		listaAyuda.pop_front();
    		string cedula = listaAyuda.front();
    		aux = buscarClienteDB(cedula);
    		listaAyuda.pop_front();
    		ingresosMensuales = atof(listaAyuda.front().c_str());
    		listaAyuda.pop_front();
    		nombreDeLaEmpresa = listaAyuda.front();
    		listaAyuda.pop_front();
    		telefonoDeLaEmpresa = listaAyuda.front();
    		listaAyuda.pop_front();
    		gastos = atof(listaAyuda.front().c_str());
    		listaAyuda.pop_front();
    		ingresosFamiliares = atof(listaAyuda.front().c_str());
    		listaAyuda.pop_front();
    		cuota = atof(listaAyuda.front().c_str());
    		listaAyuda.pop_front();
    		credit_application * nuevaSolicitud = new credit_application(aux,ingresosMensuales,nombreDeLaEmpresa,telefonoDeLaEmpresa,gastos,ingresosFamiliares,cuota);
    		this->listaSolicitudes.push_back(nuevaSolicitud);
    	}

    	sqlite3_close(db);

	return this->listaSolicitudes;
}

client* sistema::buscarClienteDB(string password)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "SELECT* FROM clients WHERE id_p = '"
	   << password
	   <<"';";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db, transicion.c_str(), callback, 0, &zErr);
    
    if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);

        sqlite3_free(zErr);
        sqlite3_close(db);
        
        return NULL;
    } 

    transicion = lecturaDbs.str();
    client* retorno = NULL;
     retorno = crearCliente(transicion);
  
	sqlite3_close(db);	
	return retorno;
}

list<collection*> sistema::cargarDatosCobros()
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	list<collection*> listRetorno;
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "SELECT* FROM cobros;";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db, transicion.c_str(), callback, 0, &zErr);
    
    if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);

        sqlite3_free(zErr);
        sqlite3_close(db);
        
        return listRetorno;
    } 	
    cout << lecturaDbs.str()<<endl;
    sqlite3_close(db);
    return listRetorno;

}

analist* sistema::buscarAnalistaDB(string password)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "SELECT* FROM analists WHERE password = '"
	   << password
	   <<"';";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db, transicion.c_str(), callback, 0, &zErr);
    
    if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);

        sqlite3_free(zErr);
        sqlite3_close(db);
        
        return NULL;
    } 
  	transicion = lecturaDbs.str();
    analist* retorno = crearAnalista(transicion);
	sqlite3_close(db);
	return retorno;
}

bool sistema::cargarDatosCreditos (string identificacion)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	sqlite3_stmt *res;
	ostringstream os;
	string transicion="";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "SELECT* FROM credits WHERE id_p = "
	   << identificacion
	   <<";";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db,transicion.c_str(),callback2,0,&zErr);
	  if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);

        sqlite3_free(zErr);

        sqlite3_close(db);
        
        return false;}
    	transicion = lecturaDbs.str();
    char_separator<char> sep(" ");
    	tokenizer<char_separator<char>> tokens(transicion, sep);
    	bool separador = false;
    	list <string> listaAyuda;
    	int x = 0;
    	for (const auto & t : tokens)
    	{  		
    			listaAyuda.push_back(t);
    	}

     	float monto = 0;
 		int Administracion = 0;
 		float seguro = 0;
 		float intereses = 0;
 		int plataforma = 0;
 		float iva = 0;
 		client *cliente = NULL;
 		int cuotas = 0;
 		int estado = 0;
 		string tiempo = "";
 		listaAyuda.pop_front();
		listaAyuda.pop_front();
		ostringstream tiempox;
		while (!listaAyuda.empty())
		{	
			Administracion = atoi(listaAyuda.front().c_str());
			listaAyuda.pop_front();
			seguro = atof(listaAyuda.front().c_str());
			listaAyuda.pop_front();
			intereses = atof(listaAyuda.front().c_str());
			listaAyuda.pop_front();
			plataforma = atoi(listaAyuda.front().c_str());
			listaAyuda.pop_front();
			iva = atof(listaAyuda.front().c_str());
			listaAyuda.pop_front();
			cuotas = atoi(listaAyuda.front().c_str());
			listaAyuda.pop_front();
			tiempox<<listaAyuda.front()<<" ";
			listaAyuda.pop_front();
			tiempox<<listaAyuda.front()<<" ";
			listaAyuda.pop_front();
			tiempox<<listaAyuda.front();
			listaAyuda.pop_front();
			tiempo = tiempox.str();
			cliente = this->buscarClienteDB(listaAyuda.front());
			listaAyuda.pop_front();
			estado = atoi(listaAyuda.front().c_str());
			listaAyuda.pop_front();
			credit * nuevoCredito = new credit (monto,Administracion, seguro,intereses,plataforma, iva, cliente,cuotas);
			this->listaCreditos.push_back(nuevoCredito);
		}



   

	
	sqlite3_close(db);

	return false;
}
bool sistema::eliminarSolicitud(string identificacion, string monto)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "DELETE from creditApplication where cedula = '"
	   << identificacion
	   << "' AND cuotas = '"
	   << monto
	   <<"';";
	transicion = os.str();

	lecturaDbs.str("");
	rc = sqlite3_exec(db,transicion.c_str(),callback2,0,&zErr);
	 if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);

        sqlite3_free(zErr);

        sqlite3_close(db);
        
        return false;}
        
	sqlite3_close(db);
	return true;
}
bool sistema::cargarListaMorosos(list<overdue_credit*> morosos)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "SELECT* FROM credits WHERE estado = "
	   << "2"
	   <<";";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db,transicion.c_str(),callback2,0,&zErr);
	  if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);

        sqlite3_free(zErr);

        sqlite3_close(db);
        
        return false;}
    string resl = lecturaDbs.str();

    if (resl.size()!=0)
    	{
    	char_separator<char> sep(" ");
    	tokenizer<char_separator<char>> tokens(transicion, sep);
    	bool separador = false;
    	list <string> listaAyuda;
    	int x = 0;
    	int id = 0;
    	float valor= 0;
    	int cuotas = 0;
    	for (const auto & t : tokens)
    	{  		
    			listaAyuda.push_back(t);
    			//cout<< t<< endl;
    	}
    	while (!listaAyuda.empty())
    		{
    			listaAyuda.pop_front();
    			id = atoi(listaAyuda.front().c_str());
    			listaAyuda.pop_front();
    			valor = atof(listaAyuda.front().c_str());
    			listaAyuda.pop_front();
    			cuotas = atof(listaAyuda.front().c_str());
    			listaAyuda.pop_front();
    			overdue_credit * auxiliar = new overdue_credit(id,valor,cuotas);
    			morosos.push_back(auxiliar);

    		}
    	return true;
    	}
    else
    	{
    		return false;
    	}

      
	sqlite3_close(db);

	return false;
}
bool sistema::updateCreditos(string columna, string valor,string identificacion)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "update CREDITS set "
	   << columna
	   << "="
	   << valor
	   << " where cuotas = "
	   << identificacion
	   << ";";

	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db,transicion.c_str(),callback2,0,&zErr);
	  if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);
        sqlite3_close(db);
        
        return false;}
        
	sqlite3_close(db);
	return true;

}

bool sistema::updateClientes(string columna, string valor, string identificacion)
{
		sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "update CLIENTS set "
	   << columna
	   << "="
	   << valor
	   << " where ID_P = "
	   << identificacion
	   << ";";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db,transicion.c_str(),callback2,0,&zErr);
	  if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);
        sqlite3_close(db);
        
        return false;}
        
	sqlite3_close(db);
	return true;
}
bool sistema::updateAnalistas(string columna, string valor, string identificacion)
{
		sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "update ANALISTS set "
	   << columna
	   << "="
	   << valor
	   << " where PASSWORD = "
	   << identificacion
	   << ";";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db,transicion.c_str(),callback2,0,&zErr);
	  if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);
        sqlite3_close(db);
        
        return false;}
        
	sqlite3_close(db);
	return true;
}
bool sistema::updateSolicitudes(string columna, string valor, string identificacion)
{
		sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "update CREDITAPPLICATION set "
	   << columna
	   << "="
	   << valor
	   << " where CEDULA = "
	   << identificacion
	   << ";";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db,transicion.c_str(),callback2,0,&zErr);
	  if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);
        sqlite3_close(db);
        
        return false;}
        
	sqlite3_close(db);
	return true;
}

list<credit *> sistema::getListaCred()
	{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	ostringstream os;
	string transicion="";
	list<credit*> listaDeCreditos;
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	os << "SELECT* FROM credits;";
	transicion = os.str();
	lecturaDbs.str("");
	rc = sqlite3_exec(db, transicion.c_str(), callback2, 0, &zErr);
    
    if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "Failed to select data\n");
        fprintf(stderr, "SQL error: %s\n",zErr);
        sqlite3_close(db);
    } 

    transicion = lecturaDbs.str();
     char_separator<char> sep(" ");
    	tokenizer<char_separator<char>> tokens(transicion, sep);
    	bool separador = false;
    	list <string> listaAyuda;
    	int x = 0;
    	for (const auto & t : tokens)
    	{  		
    			listaAyuda.push_back(t);
    			//cout<< t<< endl;
    	}
    	float monto = 0;
    	int Administracion = 0;
    	float seguro = 0;
    	float intereses = 0;
    	int plataforma = 0;
    	float iva = 0;
    	client *cliente = NULL;
    	int cuotas = 0;
    	time_t timer;	//inicialización del tiempo a tiempo actual.
		timer = time(0);
		tm *ltm =  localtime(&timer);
    	ostringstream recorrido;
		int dia = 0;
		int mes = 0;
		int ano = 0;
		string fecha = "";
		int estado = 0;
		list <string> datosInsertado;
		credit * creditoADevolver = NULL;

			
  			
  		while (!listaAyuda.empty())
  			{
	listaAyuda.pop_front();
  				cliente = buscarClienteDB(listaAyuda.front());
  				listaAyuda.pop_front();
  				Administracion = atoi(listaAyuda.front().c_str());
  				listaAyuda.pop_front();
  				seguro = atof(listaAyuda.front().c_str());
  				listaAyuda.pop_front();
  				intereses = atof(listaAyuda.front().c_str());
  				listaAyuda.pop_front();
  				plataforma = atoi(listaAyuda.front().c_str());
  				listaAyuda.pop_front();
  				iva = atof(listaAyuda.front().c_str());
  				listaAyuda.pop_front();
  				cuotas = atoi(listaAyuda.front().c_str());
  				listaAyuda.pop_front();
    				dia = atoi(listaAyuda.front().c_str());
    				listaAyuda.pop_front();
    				mes = atoi(listaAyuda.front().c_str());
    				listaAyuda.pop_front();
    				ano = atoi(listaAyuda.front().c_str());
    				listaAyuda.pop_front();
    				ltm->tm_mday = dia;
    				ltm->tm_mon = mes;
    				ltm->tm_year = ano;
    				mktime(ltm);
  				monto = atof(listaAyuda.front().c_str());
  				listaAyuda.pop_front();
  				creditoADevolver = new credit(monto,Administracion,seguro,intereses,plataforma,iva,cliente,cuotas);
  				creditoADevolver->setLtm(ltm);
  				estado = atoi(listaAyuda.front().c_str());
  				
  				listaAyuda.pop_front();
  				creditoADevolver->setEstado(estado);
  				listaDeCreditos.push_back(creditoADevolver);
  				bool valorx = false;
  				estado = creditoADevolver->revisionFecha();
  					if (valorx == true)
  						{
  							creditoADevolver->setEstado(2);
  							overdue_credit * nuevoMora = new overdue_credit ((float)(monto * 0.3),cuotas,atoi(cliente->getNumeroDeCedula().c_str()));
  							this->listaDeMoras.push_back(nuevoMora);
  						}
  			}
  	

	sqlite3_close(db);	
	return listaDeCreditos;
	}
list<overdue_credit*> sistema::getListaDeMoras()
	{
		return this->listaDeMoras;
	}
bool sistema::guardarListaDeMoras(list<overdue_credit*> listaMora)
{
	sqlite3 *db;
	char* zErr;
	int rc;
	char* sql;
	int x = 0;
	rc = sqlite3_open("baseDeDatos.db",&db);
	if(rc)
	{
		fprintf(stderr,"can't open database:%s\n",sqlite3_errmsg(db));
		sqlite3_close(db);
	}
	for(overdue_credit* auxi : listaMora){
	int id_p = 0;
	float valor = 0;
	int cuotas = 0;
	ostringstream os;
	string transicion = "";
	int id = 0;
				   	srand (time(NULL));
					int val1 = rand()%1000;
					int val2 = rand()%1000;
					int val3 = rand()%1000;
					int val4 = rand()%1000;
					int matrix [2][2];
					matrix[0][0] = val1;
					matrix[0][1] = val2;
					matrix[1][0] = val3;
					matrix[1][1] = val4;
					id = abs((matrix[0][0]*matrix[1][1])-(matrix[0][1]*matrix[1][0]));	
	id_p = auxi->getId();
	cuotas = auxi->getNumCuotas();
	valor = auxi->getValor();
	os << "INSERT into overduaCredits VALUES("
	   << id
	   << " , "
	   << id_p
	   << " , "
	   << valor
	   << " , "
	   << cuotas
	   << ");";
	transicion = os.str();
		
				lecturaDbs.str("");
				rc = sqlite3_exec(db,transicion.c_str(),callback,0,&zErr);
				if(rc)
					{
						fprintf(stderr,"sql error :%s\n",sqlite3_errmsg(db));
						sqlite3_close(db);
					}
				else
					{
						return true;
						sqlite3_close(db);
					}
	}		
	sqlite3_close(db);	
	return false;
}
