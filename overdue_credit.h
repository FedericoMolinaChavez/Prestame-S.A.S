#ifndef OVERDUE_CREDIT
#define OVERDUE_CREDIT

using namespace std;

class overdue_credit{
	private:
		float valor;
		int numCuotas;
		int id;

	public:
			friend ostream& operator << (ostream &o, const overdue_credit &c)
		{
				
			o << "Numero de cedula cliente : " << c.id << " Monto de mora : " << c.valor << " Numero de cuotas : " << c.numCuotas;
			  return o; 
		};
		overdue_credit(float valor, int numCuotas, int id);
		~overdue_credit();
		float getValor();
		int getNumCuotas();
		int getId();
		void setValor(float valor);
		void setNumCuotas(int numCuotas);
};
#include "overdue_credit.hxx"

#endif