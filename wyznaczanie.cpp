#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) 
{
	int p=0;
	int i;
	int pkt;
	cout<<"                     WYZNACZANIE WARTOSCI W PUNKCIE - ALGORYTM HORNERA\n\n";
	while(p<=0)
	{
		cout<<"Podaj najwyzsza potege wspolczynnika: ";
		cin>>p;
	}
	int tab1[p];
	int tab2[p];
	system("cls");
	i=p;
	cout<<"                     WYZNACZANIE WARTOSCI W PUNKCIE - ALGORYTM HORNERA\n\n";
		cout<<"Podaj wspolczynniki funkcji, zaczynajac od tego z najwyzsza potega.\n";
	while(i>-1)
	{
		if(i>0)
		{
			cout<<"Potega: "<<i<<"\n";
		}
		else
		{
			cout<<"Wyraz wolny\n";
		}
		cin>>tab1[i];
		i--;
		cout<<"\n";
	}
	system("cls");
	cout<<"                     WYZNACZANIE WARTOSCI W PUNKCIE - ALGORYTM HORNERA\n\n";
	cout<<"Podana funkcja to: f(x) = ";
	i=p;
	while(i>-1)
	{
		if(tab1[i]<0)
		{
			cout<<"("<<tab1[i]<<")";	
		}
		else
		{
			cout<<tab1[i];
		}
		if(i>0)
		{
			cout<<"x";
		}
		if(i>1)
		{
			cout<<"^"<<i;
		}
		if(i>0)
		{
			cout<<" + ";
		}
		i--;
	}
	cout<<"\n\nWcisnij dowolny przycisk, aby przejsc dalej.";
	getch();
	system("cls");
	cout<<"                     WYZNACZANIE WARTOSCI W PUNKCIE - ALGORYTM HORNERA\n\n";
	cout<<"Podaj punkt, dla ktorego wartosc funkcji chcesz obliczyc: ";
	cin>>pkt;
	system("cls");
	i=p;
	tab2[i]=tab1[i];
	cout<<"f"<<i<<" = "<<tab2[i]<<"\n";
	i--;
	while(i>-1)
	{
		cout<<"f"<<i<<" = "<<tab2[i+1]<<" * "<<pkt<<" + "<<tab1[i];
		tab2[i]=tab2[i+1]*pkt+tab1[i];
		cout<<" = "<<tab2[i]<<"\n";
		i--;
	}
	cout<<"\nWartosc funkcji ";
	i=p;
	while(i>-1)
	{
		if(tab1[i]<0)
		{
			cout<<"("<<tab1[i]<<")";	
		}
		else
		{
			cout<<tab1[i];
		}
		if(i>0)
		{
			cout<<"x";
		}
		if(i>1)
		{
			cout<<"^"<<i;
		}
		if(i>0)
		{
			cout<<" + ";
		}
		i--;
	}
	cout<<" w punkcie "<<pkt<<" wynosi "<<tab2[0];
	cout<<"\n\nWcisnij dowolny przycisk, aby zakonczyc program.";
	getch();
	return 0;
}
