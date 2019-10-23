#include "kolon.h"

using namespace std;

kolon::kolon(int boyut)
{
	this->boyut=boyut;
	this->data=new int[boyut];
//	cout<<boyut<<" boyutlu bir dizi olusturuldu."<<endl;

}




int kolon::getBoyut()
{
	return boyut;
}

void kolon::setBoyut(int boyut)
{
	this->boyut=boyut;
}

/*
kolon::~kolon()
{
	delete []data;
	cout<<"Yikici calisti."<<endl;
	
}*/

const int * kolon:: adresiAl()const   //Adres döner.1.const adres belirttði için deðiþmeyeceðini gösterir.
{                                     //2.const fonksiyonda herhangi bir þey deðiþmeyeceðini gösterir.
	return data;
}

void kolon::degerAta(int indis,int deger)
{
	

	if(indis<this->boyut)
	{
		this->data[indis]=deger;
	}
}

void kolon::yazdir()
{
	int i;
	for(i=0;i<this->boyut;i++)
	{
		cout<<this->data[i]<<" ";
	}
	cout<<endl;
}

kolon kolon::operator+(const kolon *k)
{
	if(this->getBoyut()==k->boyut)
	{
		kolon temp(this->getBoyut());
		int i=0;
		for(;i<this->getBoyut();i++)
		  temp.data[i]=this->data[i]+k->data[i];
		
		
		return temp;  
		
	}
}

void kolon::operator ()(int x,int y)
{
	int temp=this->data[x];
	this->data[x]=this->data[y];
	this->data[y]=temp;
}

void kolon::arttirma(int deger)
{
	int i=0;
	for(;i<this->boyut;i++)
	this->data[i] +=deger;
	
}
void kolon:: operator++(int)
{
	arttirma(1);
}
void kolon::operator++()
{
	arttirma(2);
}










