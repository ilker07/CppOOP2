#ifndef KOLON_H
#define KOLON_H


#include <iostream> 

using namespace std;


class kolon{
	
    private :
    	int boyut;

	public:	
	
	    int * data;
		kolon(int=1);
	    //~kolon();	
		int getBoyut();
		void setBoyut(int boyut);
		const int *  adresiAl()const;
		void degerAta(int,int);
		void yazdir();
		kolon operator+(const kolon *);
		void operator ()(int,int);
		void operator++(int);//Bu x++ demek.
		void operator++();//Bu ++x demek.
		void arttirma(int);
	
};




#endif 
