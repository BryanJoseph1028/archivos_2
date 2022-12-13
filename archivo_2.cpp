
#include<stdlib.h>
#include<fstream>
using namespace std;
void abir_archivo();
int main(){
	
void crear_archivo();
	return 0 ;
}
void crear_archivo(){
	ofstream archivo;
	string nombre;
	archivo.open("archivo.txt",ios::out);
	}else{
		cout<<"ingrese nombre";
		getline(cin,nombre);
		archivo<<nombre<<endl;
	}
	archivo.close();
}
