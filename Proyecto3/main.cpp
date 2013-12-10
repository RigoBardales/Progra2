#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
int dia, mes;
char signo[30];
int cacuario=0, cpiscis=0, caries=0, ctauro=0, cgeminis=0, ccancer=0;
int cleo=0, cvirgo=0, clibra=0, cescorpion=0, csagitario=0, ccapricornio=0;

void ingresar (int &dia, int &mes)
{
    do
    {
      cout<<"Ingrese el dia : ";
      cin>>dia;
    }while (dia>31);

    do
    {
      cout<<"Ingrese el mes : ";
      cin>>mes;
    } while (mes>12);
}

void signoZodiacal (int dia, int mes)
{
    if (((mes==1) and (dia>=21)) or ((mes==2) and (dia<=18)))
        {
        strcpy(signo,"Acuario");
        cacuario++;
        }

     if (((mes==2) and (dia>=19)) or ((mes==3) and (dia<=20)))
        {
        strcpy(signo,"Piscis");
        cpiscis++;
        }

     if (((mes==3) and (dia>=21)) or ((mes==4) and (dia<=20)))
        {
        strcpy(signo,"Aries");
        caries++;
        }

     if (((mes==4) and (dia>=21)) or ((mes==5) and (dia<=21)))
        {
        strcpy(signo,"Tauro");
        ctauro++;
        }

     if (((mes==5) and (dia>=22)) or ((mes==6) and (dia<=21)))
        {
        strcpy(signo,"Geminis");
        cgeminis++;
        }

     if (((mes==6) and (dia>=22)) or ((mes==7) and (dia<=22)))
        {
        strcpy(signo,"Cancer");
        ccancer++;
        }

     if (((mes==7) and (dia>=23)) or ((mes==8) and (dia<=23)))
        {
        strcpy(signo,"Leo");
        cleo++;
        }

     if (((mes==8) and (dia>=24)) or ((mes==9) and (dia<=23)))
        {
        strcpy(signo,"Virgo");
        cvirgo++;
        }

     if (((mes==9) and (dia>=24)) or ((mes==10) and (dia<=23)))
        {
        strcpy(signo,"Libra");
        clibra++;
        }

     if (((mes==10) and (dia>=24)) or ((mes==11) and (dia<=22)))
        {
        strcpy(signo,"Escorpion");
        cescorpion++;
        }

     if (((mes==11) and (dia>=23)) or ((mes==12) and (dia<=21)))
        {
        strcpy(signo,"Sagitario");
        csagitario++;
        }

     if (((mes==12) and (dia>=22)) or ((mes==1) and (dia<=20)))
        {
        strcpy(signo,"Capriconio");
        ccapricornio++;
        }
}
void presentar (char signo[])
{
    cout<<"Su signo Zodicial es : "<<signo<<"\n";
}

int main()
{ char resp;
    do
    {
        ingresar(dia,mes);
        signoZodiacal(dia,mes);
        presentar(signo);

    _flushall();

        do
        {
           cout<<"Desea continuar? ";
           cin.get(resp);
           _flushall();
        } while ((resp!='S') and (resp!='N'));

    } while (resp!='N');

    if (cacuario>0)
        cout<<"Acuario: "<<cacuario<<"\n";
    if (cpiscis>0)
        cout<<"Piscis: "<<cpiscis<<"\n";
    if (caries>0)
        cout<<"Aries: "<<caries<<"\n";
    if (ctauro>0)
        cout<<"Tauro: "<<ctauro<<"\n";
    if (cgeminis>0)
        cout<<"Geminis: "<<cgeminis<<"\n";
    if (ccancer>0)
        cout<<"Cancer: "<<ccancer<<"\n";
    if (cleo>0)
        cout<<"Leo: "<<cleo<<"\n";
    if (cvirgo>0)
        cout<<"Virgo: "<<cvirgo<<"\n";
    if (clibra>0)
        cout<<"Libra: "<<clibra<<"\n";
    if (cescorpion>0)
        cout<<"Escorpion: "<<cescorpion<<"\n";
    if (csagitario>0)
        cout<<"Sagitario: "<<csagitario<<"\n";
    if (ccapricornio>0)
        cout<<"Capricornio: "<<ccapricornio<<"\n";

    return 0;
}
