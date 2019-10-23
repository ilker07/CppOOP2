#include <iostream>
#include "kolon.h"
#include "toplama.h"
#include  <cstdlib>
#include <time.h> 
#include "yen.h"

using namespace std;



int main(int argc, char** argv) {
	
	srand(time(NULL));
	/*
	int t;
	
	kolon k1(3);
	kolon k2(3);
	//cout<<k1.adresiAl()<<endl;
	

  	for(t=0;t<3;t++)
	{
		k1.degerAta(t,(t+1));
	}
	
	k2.degerAta(0,4);
	k2.degerAta(1,5);
	k2.degerAta(2,6);
	 
	
	k1.yazdir();
	k2.yazdir();
	
	toplama top;

   
    top.kolonlariTopla(&k1,&k2).yazdir();
    cout<<"K2 nin ortalamasi :"<<top.ortalamaAl(&k2)<<endl;
    */
    
    
    // Opertor + yüklemesi
    
    /*
    kolon k3(2);
    k3.degerAta(0,4);
    k3.degerAta(1,5);
    
    kolon k4(2);
    k4.degerAta(0,7);
    k4.degerAta(1,9);
    
    k3.yazdir();
    k4.yazdir();
    
    
    /*
    toplama top2;
    top2.operator+(&k3).yazdir();
    
    (k3+&k4).yazdir();
    
    */
    
    ///////////////////////////////////////////////////////////////////////////
    
    /*Aþýrý yüklemeler
    kolon k5(5);
    kolon k6(5);
    
   
    
    int indeks=0;
    for(;indeks<5;indeks++)
    {
    	k5.degerAta(indeks,rand() % 51);
    	k6.degerAta(indeks,rand() % 51);
	}
    
    cout<<"K5 Dizisi: ";
    k5.yazdir();
    cout<<"K6 Dizisi: ";
    k6.yazdir();
    
    cout<<"K5+K6 Dizisi: ";
    (k5+&k6).yazdir();
    
    
    k5(3,4);
    k5.yazdir();
	// Opertor + yüklemesi
	
	
	k5++;
	k5.yazdir();
	
	++k6;
	k6.yazdir();
	
	Aþýrý yüklemeler.*/
	//////////////////////////////////////////////////////////
	
	
	kolon k6(5);
    kolon k7(5);
    
   
    
    int indeks=0;
    for(;indeks<5;indeks++)
    {
    	k6.degerAta(indeks,rand() % 51);
    	k7.degerAta(indeks,rand() % 51);
	}
	
	
	k6.yazdir();
	k7.yazdir();
	
	//cout<<toplama::toplamaIslemi(&k6,&k7)<<endl;
	
	toplaSayi(1,3);
	
	return 0;
}
