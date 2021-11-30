#include <iostream>
#include<stdlib.h>
using namespace std;


class Vehicle{
    protected:
    string tipo;
    string marca;
    string color;

    public: //metodos
    Vehicle(string, string, string); //constructor
    void mostrarVehicle();
    

};


class Car : public Vehicle{
    protected:
    int anno;
    public:
    Car(string, string, string, int);
    void mostrarCar();
    
};


//definir constructor
Vehicle::Vehicle(string _tipo, string _marca, string _color){
    tipo = _tipo;
    marca = _marca;
    color = _color;

};

Car::Car(string _tipo, string _marca, string _color, int _anno): Vehicle(_tipo, _marca, _color){
    anno = _anno; 
    
    
};

void Vehicle::mostrarVehicle(){
    cout<<"Tipo de vehiculo: "<<tipo<<endl;
    cout<<"Marca: "<<marca<<endl;
    cout<<"color: "<<color<<endl;
}

void Car::mostrarCar(){
    mostrarVehicle();
    cout<<"Modelo: "<<anno<<endl;

};

int main(){

    Car car1("auto","toyota","azul", 2009);
    car1.mostrarCar();
    return 0;

};