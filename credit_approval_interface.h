#ifndef CREDIT_APPROVAL_INTERFACE
#define CREDIT_APPROVAL_INTERFACE
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class credit_approval_interface 
{
	private:
		float ingresos;
		float gastos;
		float cuota;

	public:
		credit_approval_interface(float ingresos,float gastos, float cuota);
		~credit_approval_interface();
		bool approveCredit();	
};

#include "credit_approval_interface.hxx"

#endif