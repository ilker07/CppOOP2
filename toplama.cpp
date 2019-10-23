
#include "toplama.h"

using namespace std;



kolon toplama::kolonlariTopla(kolon *k1,kolon *k2)
{
	kolon gecici(k1->getBoyut());
	
	
	
	
	if(k1->getBoyut()==k2->getBoyut())
	{
		
		int i;
	       for(i=0;i<k1->getBoyut();i++)
	       {
	       
	       	 gecici.data[i]=k1->data[i]+k2->data[i];
	       	 
		   }
		   
		   
		   
		   return gecici;
	       
	}
	
	
}


double toplama::ortalamaAl(kolon *k1)
{
	int i=0;
	int toplam=0;
	for(;i<k1->getBoyut();i++)
	{
		toplam +=k1->data[i];
	}
	
	return (double)toplam/k1->getBoyut();
}

kolon toplama::operator+(kolon *k1)
{
	    kolon temp(k1->getBoyut());
		int i=0;
		for(;i<k1->getBoyut();i++)
		  temp.data[i] =k1->data[i]+k1->data[i];
		  
		return temp;  
	
}

kolon toplamaIslemi(kolon *k1,kolon *k2)
{
		kolon gecici(k1->getBoyut());
	
	
	
	
	if(k1->getBoyut()==k2->getBoyut())
	{
		
		int i;
	       for(i=0;i<k1->getBoyut();i++)
	       {
	       
	       	 gecici.data[i]=k1->data[i]+k2->data[i];
	       	 
		   }
		   
		   
		   
		   return gecici;
	       
	}
}


void toplaSayi(int x,int y)
{
	cout<<(x+y)<<endl;
}





