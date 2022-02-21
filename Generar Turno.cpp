#include <fstream>
#include <string.h>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
using namespace std;
void espoch();
int main()
{
     struct personas{
        int edad,c;
        string ci;
        string nombre,sexo;
        //char sexo[1];//nombre[50];
    }datos[100];

	string nombre;

	bool band;
	int e,opc2,c,edad,ho,i=0,k=0,cont;
	char opc;
	string disponible,cadena,cedula,cadena5,ci;
    string vect[6];
	string  op1="o";
	string op2="d";
	string ced;
	int r=0,contt=0;
	//char nombre[100];
	char sexo;
	fstream fichero,depar,cedu,tur; // variable fichero
	fichero.open("Datos Personales.txt", ios::in| ios::out | ios::app);

	   int q;
	   do{
            espoch();
            //system ("color 0F");
    cout << "1. Generar turno"<< endl;
    cout << "2. Imprimir lista de turnos"<<endl;
    cout << "3. Verificar turno"<<endl;
    cout << "4. Salir"<<endl;
    cin>>q;
    fflush(stdin);
    system("cls");

        switch (q){
        case 1:
            espoch();

            //DATOS EN EL REGISTRO
        if (r>0)
        	espoch();
            int lon;
            do{
		do{
                 system("cls");
                espoch();
                cout<<"                                            Generar Turno                              "<<endl;
	cout<<"                                         REGISTRO DE DATOS"<<endl;
	cout<<"-----------------------------------------------------------------------------------------------------"<<endl;

            cout<<"Ingrese el Numero de cedula:";
            getline(cin,datos[k].ci);

        }while(datos[k].ci.size()!=10);

        fflush(stdin);
		cout<<"Ingrese el Nombre: ";
		fflush(stdin);
        getline(cin, datos[k].nombre);
		//cin.getline(datos[i].nombre,50);
		do{
		cout<<"Ingrese la edad: ";
		cin>>datos[k].edad;
		}while(datos[k].edad<0);
        do{
        band=false;
        fflush(stdin);
		cout<<"Ingrese el sexo:M/F  ";
		getline(cin,datos[k].sexo);
		//fflush(stdin);
		if((datos[k].sexo=="m")||(datos[k].sexo=="M")||(datos[k].sexo=="F")||(datos[k].sexo=="f")){
                band=true;
		}
		}while(band==false);
		system ("cls");

		espoch();
	cout<<"Departamentos:\n";
	cout<<"1.Departamento de Odontologia\n";
	cout<<"2.Departamento de Medicina General\n";
	cout<<"3.Departamento de Pediatria\n";
	cout<<"4.Departamento de Psicologia\n";
	cout<<"5.Departamento de Ginecologia\n";
	cout<<"Horarios"<<endl;
	cout<<"1.- 7:00  am - 8:00 am \n";
	cout<<"2.- 9:00  am - 10:00 am \n";
	cout<<"3.- 11:00 am - 12:00 pm \n";
    do{
	cout<<"Elija una opcion de  Departamento: ";
	cin>>opc2;
    }while(opc2<0 ||opc2>5);

    do{
	cout<<"Seleccione el horario:  ";
	cin>>ho;
    }while(ho<0|| ho>3);
    i=0;

	//verificacion
//generar turno
	switch(opc2){
		case 1:
			switch(ho){
			    case 1:
			        depar.open("odontologia.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                    cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Odontologia de 7:00  am - 8:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Odontologia\t";
                        fichero<<"7:00  am - 8:00  am\n";

                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("odontologia.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                        Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }
			    break;
			    case 2:
                    depar.open("odontologia.txt", ios::in| ios::out);
                    while(!depar.eof( )){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
                    }
                    depar.close();
                    if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                    cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Odontologia de 9:00  am - 10:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Odontologia\t";
                       fichero<<"9:00  am - 10:00 am\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("odontologia.txt", ios:: out);
                        for(i=0;i<3;i++){
                            cout<<vect[i]<<endl;
                            depar<<vect[i]<<endl;
                        }
                        depar.close();
                        Beep(1500,700);
                    }
                    else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
                    }
			    break;
			    case 3:
                    depar.open("odontologia.txt", ios::in| ios::out);
                    while(!depar.eof( )){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
                    }
                    depar.close();
                    if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                    cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Odontologia de 11:00  am - 12:00  pm\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Odontologia\t";
                       fichero<<"11:00 am - 12:00 pm\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Turno creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("odontologia.txt",  ios::out);
                        for(i=0;i<3;i++){
                            cout<<vect[i]<<endl;
                            depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
                    }
                    else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
                    }
			    break;
			}
			break;

		case 2:
			fichero<<"Medicina General\t";
			switch(ho){
			    case 1:
			        depar.open("MedicinaGeneral.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                    cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Medicina General de 7:00  am - 8:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Medicina General\t";
                        fichero<<"7:00  am - 8:00  am\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("MedicinaGeneral.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }


			    break;
			    case 2:
			          depar.open("MedicinaGeneral.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                     cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Medicina General de 9:00  am - 10:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Medicina General\t";
                        fichero<<"9:00  am - 10:00  am\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("MedicinaGeneral.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }

			    break;
			    case 3:
			          depar.open("MedicinaGeneral.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                     cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Medicina General de 11:00  am - 12:00  pm\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Medicina General\t";
                        fichero<<"11:00  am - 12:00  pm\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("MedicinaGeneral.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }

			    break;
			}
			//fichero<<"-----------------------"<<endl;
			break;
		case 3:
			fichero<<"Pediatria\t";
			switch(ho){
			    case 1:
			          depar.open("Pediatria.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                     cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Pediatria de 7:00  am - 8:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Pediatria\t";
                        fichero<<"7:00  am - 8:00  am\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("Pediatria.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }

			    break;
			    case 2:
			           depar.open("Pediatria.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                     cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Pediatria de 9:00  am - 10:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Pediatria\t";
                        fichero<<"9:00  am - 10:00  am\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("Pediatria.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }
			    break;
			    case 3:
			           depar.open("Pediatria.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                     cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Pediatria de 11:00  am - 12:00  pm\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Pediatria\t";
                        fichero<<"11:00  am - 12:00  pm\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("Pediatria.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }
			    break;
			}
			fichero<<"-----------------------"<<endl;
			break;
		case 4:
			fichero<<"Psicologia\t";
			switch(ho){
			    case 1:
			           depar.open("Psicologia.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                     cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Psicologia de 7:00  am - 8:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Psicologia\t";
                        fichero<<"7:00  am - 8:00  am\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("Psicologia.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }
			    break;
			    case 2:
			          depar.open("Psicologia.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                    cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Psicologia de 9:00  am - 10:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Psicologia\t";
                        fichero<<"9:00  am - 10:00  am\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("Psicologia.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }
			    break;
			    case 3:
			          depar.open("Psicologia.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                    cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Psicologia de 11:00  am - 12:00  pm\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Psicologia\t";
                        fichero<<"11:00  am - 12:00  pm\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";

                        depar.open("Psicologia.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }
			    break;
			}
			fichero<<"-----------------------"<<endl;
			break;
		case 5:
			fichero<<"Ginecologia\t";
			switch(ho){
			    case 1:
			         depar.open("Ginecologia.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                    cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Ginecologia de 7:00  am - 8:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Ginecologia\t";
                        fichero<<"7:00  am - 8:00  am\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("Ginecologia.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }
			    break;
			    case 2:
			         depar.open("Ginecologia.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                    cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Ginecologia de 9:00  am - 10:00  am\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Ginecologia\t";
                        fichero<<"9:00  am - 10:00  am\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("Ginecologia.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }
			    break;
			    case 3:
			         depar.open("Ginecologia.txt", ios::in|ios::out);
			        while(!depar.eof()){
                        getline(depar,disponible);
                        vect[i]=disponible;
                        //cout<<vect[i]<<endl;
                        i++;
			        }
			        depar.close();
			        if(vect[ho-1]=="d"){
                    fichero<<"Cedula:";
                    fichero<<datos[k].ci<<endl;
                    cedu.open("cedulas.txt", ios::out| ios::app);
                        cedu<<datos[k].ci<<endl;
                    cedu.close();
                    tur.open("turnos.txt",ios::out|ios::app);
                    tur<<" Ginecologia de 11:00  am - 12:00  pm\n";
                    tur.close();
                    fflush(stdin);
                    fichero<<"Nombre:";
                    fichero<<datos[k].nombre<<endl;
                    fichero<<"Edad:";
                    fichero<<datos[k].edad<<endl;
                    fichero<<"Sexo:";
                    fichero<<datos[k].sexo<<endl;
                    fichero<<"Turno :";
                    fichero<<"Ginecologia\t";
                        fichero<<"11:00  am - 12:00  pm\n";
                        fichero<<"-----------------------------------------"<<endl;
                        cout<<"Su Turno se ha creado exitosamente"<<endl;
                        vect[ho-1]="o";
                        depar.open("Ginecologia.txt", ios::out);
                        for(i=0;i<3;i++){
                        cout<<vect[i]<<endl;
                        depar<<vect[i]<<endl;
                        }
                        depar.close();
                         Beep(1500,700);
			        }
			        else{
                        cout<<"Turno no disponible"<<endl;
                        Beep(200,700);
			        }
			    break;
			}
			fichero<<"-----------------------"<<endl;
            break;
        default:
				cout<<"Error opcion incorrecta:";
	}
	cout<<"Desea Generar otro Turno: S/N  ";
    cin>>opc;
	system("cls");
	fichero.close();
	r++;
}while(opc=='S'|| opc=='s');
break;
case 2:
contt=0;
    cedu.open("cedulas.txt", ios::in);
        while(!cedu.eof()){
            getline(cedu,cadena);

            contt=contt+1;
            if(contt==1)
                break;

        }
        cedu.close();
        if(contt!=0){
            cedu.open("Datos Personales.txt", ios::in);
                    while(!cedu.eof( )){
                        getline(cedu,cadena);
                        cout<<cadena<<endl;

                        }
                        cedu.close();
    }
    else{
        espoch();
        cout<< "No se ha registrado turnos"<<endl;
        cout<<endl;
    }
    system("pause");
    system("cls");
	break;
case 3:
    contt=0;
    do{
    cout<<"Ingrese Numero de cedula"<<endl;
    getline(cin,ced);
    }while(ced.size()!=10);

    i=0;
    cedu.open("cedulas.txt", ios::in);
    depar.open("turnos.txt",ios::in);
        while(!cedu.eof()){
            getline(cedu,cadena);
            getline(depar,disponible);
            if(cadena==ced){
                    cout<<cadena+" "+disponible<<endl;
            }
        }
        cedu.close();
        depar.close();

    system("pause");
    system("cls");
    break;
        }
    }while (q!=4);
	return 0;
}

void espoch(){
ifstream fichero;
    string cadena;
    int i;
    fichero.open("logo.txt", ios::in);
    while (!fichero.eof()){
        getline(fichero, cadena);
        cout<<cadena<<endl;
        system("color 0A");
    }
    fichero.close();
}
