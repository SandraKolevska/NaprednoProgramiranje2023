// Sandra Kolevska INKI969
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include <ctime>
using namespace std;
class date
{
	private:
		int day, month, year;
	public:
	date(){}
	friend void operator>>(istream &in, date &d);
	friend void operator<<(ostream &out, date &d)
	{
		out<<"\n Date : ";
		out<<d.day;
		out<<"/";
		out<<d.month;
		out<<"/";
		out<<d.year;
		out<<endl;
   		
	}
	~date(){}
};
void operator>>(istream &in, date &d)
{
	cout<<"\n Enter Day : ";
		in>>d.day;
	cout<<"\n Enter Month : ";
		in>>d.month;
	cout<<"\n Enter Year : ";
		in>>d.year; // smeni in, shto se dobiva ?
	cout<<"\n ------------------";
	switch(d.month)
	{
		case 1: // January
		case 3: // March
		case 5: //May
		case 7: //July
    		case 8: //August
		case 10: //October
		case 12: //December
		if(d.day>31)
		{
			cout<<"\n Invalid Days ";
			exit(0);
		}
		break;
		case 4: //April
		case 6: //June
		case 9: //September
		case 11: //November
		if(d.day>30)
		{
			cout<<"\n Invalid Days ";
			exit(0);
		}
		break;
		case 2:
		if((d.year%100!=0&&d.year%4==0)||(d.year%400==0))
		{			if(d.day>29)
			{
				cout<<"\n Invalid Days ";
				exit(0);
			}
		}
		else
		{
			if(d.day>28)
			{
			cout<<"\n Invalid Days ";
			exit(0);
			}	
		}
		break;
		default: {
			cout<<"\n Invalid month. Insert a number between 1-12.";
			exit(0);
		}
		}
}
int main()
{
	date d;
	cout<<"\n Enter Date \n";
	cout<<"\n ------------------";
	cin>>d;
	cout<<d;
	return 0;
}
//So overload operatorot moze da se promeni nacinot na koj rabotat operatorite za tipovi definirani od korisnikot kako objekti i strukturi.
//Friend funkcijata e definirana nadvor od opsegot na taa klasa, no ima  pravo da pristapi do site privatni i zastiteni clenovi na klasata.
