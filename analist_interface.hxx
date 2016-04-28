#include "analist_interface.h"

analist_interface::analist_interface(){}

analist_interface::~analist_interface(){}

credit* analist_interface::fabricaDeCredito(credit_application *aplicacionAAprobar,client *cliente)
{
credit_approval_interface* aprobar = new credit_approval_interface (aplicacionAAprobar->getIngresosMensuales(),aplicacionAAprobar->getGastos(), aplicacionAAprobar->getCuota());
bool resl = aprobar->approveCredit();
if (resl == true){

credit_fachade *fachada = new credit_fachade(cliente,aplicacionAAprobar);
std::cout<< "Digite la cantidad de cuotas que va a aprobar para el credito"<<std::endl;
int cuotasCredito = 0;
std::cin>>cuotasCredito;
credit * creditAprobado = fachada->CreacionDeCredito(cuotasCredito);
cout << *creditAprobado;
ostringstream in;
in << "Su nuevo credito a sido aprobado con el valor de "
   << aplicacionAAprobar->getCuota();
cout << in.str()<<endl;
//El correo es de mentiras por favor no trolear.
 mailer_handler * envioDeCorreo = new mailer_handler(in.str(), "prestame.sas.javeriana@gmail.com",cliente->getCorreoElectronico(), "QWERTY123456789.", "Credito aprobado");
 envioDeCorreo->createMailDoc();
 envioDeCorreo->sendMail();
 return creditAprobado;
}
else
	{
		cout<< "Su credito a sido denegado"<<endl;
		ostringstream in;
		in << "Su nuevo credito a sido denegado";
		mailer_handler * envioDeCorreo = new mailer_handler(in.str(), "prestame.sas.javeriana@gmail.com",cliente->getCorreoElectronico(), "QWERTY123456789.", "Credito denegado");
		envioDeCorreo->createMailDoc();
		envioDeCorreo->sendMail();
	}
return NULL;
}

collection* analist_interface::generarCobro(credit * credito,list<overdue_credit*> morosos)
{
	collection *cobro = new collection(credito->getCliente()->getNumeroDeCedula(), credito->getMonto(), credito->getAdministracion(), credito->getSeguro(), credito->getPlataforma(),morosos);
	cobro->calcularTotalCobro();
	float total = cobro->getTotalCobro();
	cout<<"aqui : ";
	cout<<(int)total<<endl;
	ostringstream in;
	in << "Su nuevo cobro ha sido generado por el valor de : "
	   << (total/credito->getCuotas());
	cout<<in.str();
	mailer_handler * envioDeCorreo = new mailer_handler(in.str(),"federicomolinachavez@gmail.com",credito->getCliente()->getCorreoElectronico(),"melinaDurna0728","Cobro credito");
	envioDeCorreo->createMailDoc();
	envioDeCorreo->sendMail();
	return cobro;
}
