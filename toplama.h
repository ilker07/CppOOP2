#ifndef TOPLAMA_H
#define TOPLAMA_H


#include <iostream> 

#include "kolon.h"
using namespace std;


kolon toplamaIslemi(kolon *,kolon *);

void toplaSayi(int,int);


class toplama{
	
  

	public:	
	
	kolon kolonlariTopla(kolon *,kolon *);
	double ortalamaAl(kolon *);
	kolon operator+(kolon *);

	
	
	
};



#endif 
