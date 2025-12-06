
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class vehiculoMotorizado{

private:
    string Placa;
    string marca;
    string modelo;
    string color;
    string Rendimiento;
    string Energia;
    string Transmision;
    int año;
    int capacidadPersonas;
    double precio;
    bool disponibilidad;


    public:
    vehiculoMotorizado(string placa, string m, string mod, string c, string rend, string e, string trans, int a,  int caP, double p):
    Placa(placa), marca(m), modelo(mod), color(c),  Rendimiento(rend), Energia(e), Transmision(trans), año(a), capacidadPersonas (caP), precio(p), disponibilidad(true) {}


        //Getters
        string getPlaca() const {
            return Placa;
        }
        string getMarca() const {
            return marca;
        }
        string getModelo() const {
            return modelo;
        }
        string getColor() const {
            return color;
        }
        string getRendimiento() const {
            return Rendimiento;
        }
        int getAño() const {
            return año;
        }
        int getcapacidadPersonas() const {
        return capacidadPersonas;
        }
        double getPrecio() const {
            return precio;
        }
        bool getDisponibilidad() const {
            return disponibilidad;
        }

        //Metodos
        void Rentar() {
            disponibilidad=false;
        }
        void Devuelto() {
            disponibilidad=true;
        }

    virtual void mostrarDatos() const {
        cout << "placa " << Placa << endl;
        cout << "Marca " << marca << endl;
        cout << "Modelo " << modelo << endl;
        cout << "Color " << color << endl;
        cout << "Rendimiento " << Rendimiento << endl;
        cout << "Energia " << Energia << endl;
        cout << "Transmision " << Transmision << endl;
        cout << "Año " << año << endl;
        cout << "Capacidad de personas " << capacidadPersonas << endl;
        cout << "Precio " << precio << endl;
        cout << "Disponibilidad " << (disponibilidad ? "Disponible" : "Rentado") << endl;
    }

    };

class Carro:public vehiculoMotorizado{
private:
    bool AireAcondicionado;
    string Traccion;
    string Cabina;
public:
    Carro(string placa, string m, string mod, string c, string rend, string e, string trans, int a,  int caP, double p, bool AC, string T, string cab):
    vehiculoMotorizado(placa, m, mod, c, rend, e, trans, a, caP, p), AireAcondicionado(AC), Traccion(T), Cabina(cab){}

        bool getAireAcondicionado() const {
        return AireAcondicionado;
        }
        string getTraccion() const {
            return Traccion;
        }
        string getCabina() const {
        return Cabina;
        }

    void mostrarDatos() const override {
        vehiculoMotorizado::mostrarDatos();
        cout << "AC " << (AireAcondicionado ? "Si" : "No") << endl;
        cout << "Traccion " << Traccion << endl;
        cout << "Cabina " << Cabina << endl;
    }
};

class Camioneta:public vehiculoMotorizado{
private:
    bool AireAcondicionado;
    int CapacidadDeCarga;
    string Traccion;
    string Cabina;
public:
    Camioneta(string placa, string m, string mod, string c, string rend, string e, string trans, int a,  int caP, double p, bool AC, int CapCarga, string T, string cab):
    vehiculoMotorizado(placa, m, mod, c, rend, e, trans, a, caP, p ), AireAcondicionado(AC), CapacidadDeCarga(CapCarga), Traccion(T), Cabina(cab) {}



        bool getAireAcondicionado() const {
            return AireAcondicionado;
        }
        int getCapacidadDeCarga() {
        return CapacidadDeCarga;
        }
        string getTraccion() const {
        return Traccion;
        }
        string getCabina() const {
        return Cabina;
        }

    void mostrarDatos() const override {
        vehiculoMotorizado::mostrarDatos();
        cout << "AC " << (AireAcondicionado ? "Si" : "No") << endl;
        cout << "Capacidad de carga " << CapacidadDeCarga << endl;
        cout << "Traccion " << Traccion << endl;
        cout << "Cabina " << Cabina << endl;
    }
};

class motocicleta:public vehiculoMotorizado {
    private:
    int CapacidadDeCarga;
    int cilindraje;
    string Traccion;
public:
    motocicleta(string placa, string m, string mod, string c, string rend, string e, string trans, int a,  int caP, double p,  int CapCarga, int cilin, string T ):
vehiculoMotorizado(placa, m, mod, c, rend, e, trans, a, caP, p), CapacidadDeCarga(CapCarga), cilindraje(cilin), Traccion(T) {}

    int getCapacidadDeCarga() const {
        return CapacidadDeCarga;
    }
    int getCilindraje() const {
        return cilindraje;
    }
    string getTraccion() const {
        return Traccion;
    }

    void mostrarDatos() const override {
        vehiculoMotorizado::mostrarDatos();
        cout << "Capacidad de carga " << CapacidadDeCarga << endl;
        cout << "Cilindraje " << cilindraje << endl;
        cout << "Traccion " << Traccion << endl;
    }
};

class VehiculoEspecial:public vehiculoMotorizado {
private:
    int CapacidadDeCarga;
    string Traccion;
    string NombreE;

public:
    VehiculoEspecial(string placa, string m, string mod, string c, string rend, string e, string trans, int a,  int caP, double p,  int CapCarga, string T, string nombreE):
    vehiculoMotorizado(placa, m, mod, c, rend, e, trans, a, caP, p), CapacidadDeCarga(CapCarga), Traccion(T), NombreE(nombreE){}

    int getCapacidadDeCarga() {
        return CapacidadDeCarga;
    }
    string getTraccion() const {
        return Traccion;
    }
    string getNombre() const {
        return NombreE;
    }

    void mostrarDatos() const override {
        vehiculoMotorizado::mostrarDatos();
        cout << "Nombre del vehiculo especial " << NombreE << endl;
        cout << "Capacidad de carga " << CapacidadDeCarga << endl;
        cout << "Traccion " << Traccion << endl;

    }
};

class Cliente{
private:
    int identificadorc;
    string nombre;
    string telefono;
    string numlicencia;
public:
    Cliente(int idC, string n, string tel, string nl):
    identificadorc(idC), nombre(n), telefono (tel), numlicencia(nl) {}

    int getIdentificadorc() const {
        return identificadorc;
    }
    string getNombre() const{
        return nombre;
    }

    string getTelefono() const {
        return telefono;
    }
    string getNumlicencia() const {
        return numlicencia;
    }

    void mostrarDatos() const {
        cout << "id del clliente " << identificadorc << endl;
        cout << "nombre " << nombre << endl;
        cout << "telefono " << telefono << endl;
        cout << "numero de licencia " << numlicencia << endl;
    }
};

vehiculoMotorizado* registrarVehiculo(){
    int tipo;
    do{
    cout << "Que tipo de carro desea añadir 1) Carro 2) Camioneta 3) Motocicleta 4) Vehiculo Especial"<< endl;
    cin >> tipo;
        if(tipo<1 or tipo>4){
            cout << "Escribe una opcion correcta"<< endl;
        }

        }while (tipo<1 or tipo>4);

    double precio;
    bool AC=false;
    int año, capP, capCarga, cilin, ACTIPO;
    string placa, marca, modelo, color, rend, energia, trans, cab, nombreE , traccion;

        cout << "Escriba la placa" << endl;
        cin >> placa;
        cout << "Escriba la marca" << endl;
        cin >> marca;
        cout << "Escriba el modelo" << endl;
        cin >> modelo;
        cout << "Escriba el color" << endl;
        cin >> color;
        cout << "Escriba el rendimiento" << endl;
        cin >> rend;
        cout << "Escriba el tipo de energia: gasolina, hibrido, electrico o diesel" << endl;
        cin >> energia;
        cout << "Escriba la transmision del carro: Estandar, Automatico, CVT, DobleEmbrague" << endl;
        cin >> trans;
        cout << "Escriba el año" << endl;
        cin >> año;
        cout << "Escriba la capacidad de personas" << endl;
        cin >> capP;
        cout << "Escriba el precio" << endl;
        cin >> precio;

    if (tipo==1){
        cout << "Cuenta con AC? (Si=1 No=0" << endl;
        cin >> ACTIPO;
        if (ACTIPO==1) {
            AC = true;
        }
        else if (ACTIPO==0) {
            AC = false;
        }

        cout << "Escriba el tipo de traccion: FWD, RWD, AWD, CuatroPorCuatro, DosPorCuatro" << endl;
        cin >> traccion;
        cout << "Escriba el tipo de cabina: Simple, UnayMedia, Doble, triple" << endl;
        cin >> cab;
        return new Carro(placa, marca, modelo, color, rend, energia, trans, año, capP, precio, AC, traccion, cab);

}
    if (tipo==2){
        cout << "Cuenta con AC? (Si=1 No=0)" << endl;
        cin >> ACTIPO;
        if (ACTIPO==1) {
            AC = true;
        }
        else if (ACTIPO==0) {
            AC = false;
        }
        cout << "Escriba el tipo de traccion: FWD, RWD, AWD, CuatroPorCuatro, DosPorCuatro" << endl;
        cin >> traccion;
        cout << "Escriba el tipo de cabina: Simple, UnayMedia, Doble, triple" << endl;
        cin >> cab;
        cout << "Escriba la cantidad de peso que soporta la parte trasera de la camioneta" << endl;
        cin >> capCarga;
        return new Camioneta(placa, marca, modelo, color, rend, energia, trans, año, capP, precio, AC, capCarga, traccion, cab);
    }

     if (tipo==3) {
        cout << "Escriba la cantidad de peso que soporta la moto" << endl;
        cin >> capCarga;
        cout << "Escriba el cilindraje de la moto" << endl;
         cin >> cilin;
         cout << "Escriba el tipo de traccion: FWD, RWD, AWD, CuatroPorCuatro, DosPorCuatro, NO TIENE" << endl;
         cin >> traccion;

         return new motocicleta(placa, marca, modelo, color, rend, energia, trans, año, capP, precio, capCarga, cilin, traccion);
    }

     if (tipo==4) {
        cout << "Escriba el nombre del vehiculo especial" << endl;
        cin >> nombreE;
        cout << "Escriba el tipo de traccion: FWD, RWD, AWD, CuatroPorCuatro, DosPorCuatro, NO TIENE" << endl;
        cin >> traccion;
        cout << "Escriba la cantidad de peso que soporta " << endl;
        cin >> capCarga;
         return new VehiculoEspecial(placa, marca, modelo, color, rend, energia, trans, año, capP, precio, capCarga, traccion, nombreE);
    }
    return 0;
};

Cliente* registrarCliente() {

    int idCliente;
    string nombreC, telefono, numeroLicencia;

    cout << "Cual es el id del cliente"<< endl;
    cin >> idCliente;
    cout << "Cual es el nombre del cliente?"<< endl;
    cin >> nombreC;
    cout << "Cual es el telefono del cliente?"<< endl;
    cin >> telefono;
    cout << "Cual es el numero de licencia del cliente?"<< endl;
    cin >> numeroLicencia;

    return new Cliente (idCliente, nombreC, telefono, numeroLicencia);


};

void rentarVehiculo(vector<vehiculoMotorizado*> &vehiculoMotorizado) {

    string placa;
    cout << "Escriba la placa";
    cin >> placa;

    for (auto &v : vehiculoMotorizado) {
        if (v->getPlaca() == placa) {

            if (v->getDisponibilidad() == false) {
                cout << "Ya esta rentado\n";
                return;
            }

            v->Rentar();
            cout << "Su vehiculo ha sido rentado\n";
            return;
        }
    }

    cout << "No se encontro esa placa pruebe otra vez\n";
}

void devolverVehiculo(vector<vehiculoMotorizado*> &vehiculoMotorizado) {

    string placa;
    cout << "Escriba la placa del vehiculo ";
    cin >> placa;

    for (auto &v : vehiculoMotorizado) {
        if (v->getPlaca() == placa) {

            if (v->getDisponibilidad() == true) {
                cout << "El vehiculo no se encuentra rentado\n";
                return;
            }

            v->Devuelto();
            cout << "Se ha devuelto el vehiculo\n";
            return;
        }
    }

    cout << "No se encontro el vehiculo vuelva a intentar.\n";
}


    int main() {
        vector<vehiculoMotorizado*> vehiculos;
        vector<Cliente*> clientes;

        int opcion;

        do {
            cout << "1) Registrar vehiculo\n";
            cout << "2) Registrar cliente\n";
            cout << "3) Mostrar vehiculos \n";
            cout << "4) Mostrar clientes \n";
            cout << "5) Rentar  \n";
            cout << "6) devolver\n";
            cout << "7) Salir\n";
            cin >> opcion;

            switch (opcion) {

                case 1: {
                    vehiculoMotorizado* v = registrarVehiculo();
                    vehiculos.push_back(v);
                    cout << "El vehiculo fue registrado\n";
                    break;
                }

                case 2: {
                    Cliente* c = registrarCliente();
                    clientes.push_back(c);
                    cout << "El Cliente fue registrado\n";
                    break;
                }

                case 3: {
                    for (auto v : vehiculos) {
                        v->mostrarDatos();

                    }
                    break;
                }

                case 4: {

                    for (auto c : clientes) {
                        c->mostrarDatos();

                    }
                    break;
                }

                case 5:
                    rentarVehiculo(vehiculos);
                    break;

                case 6:
                    devolverVehiculo(vehiculos);
                    break;

                case 7:
                    cout << "Saliendo del programa";
                    break;

                default:
                    cout << "Escoja una opcion valida.\n";
            }

        } while (opcion != 7);

        return 0;
    }



