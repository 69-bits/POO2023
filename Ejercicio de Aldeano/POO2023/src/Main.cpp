#include "Aldeano.h"
#include "Command.h"
#include "Common.h"

int opcion;
string palabraClave;
int main()
{

    Aldeano aldeano;
    Command command;
    aldeano.setNombre("Jhon");
    aldeano.setSalud(100);
    aldeano.setTipo(TipoAldeano::aldeanoBase);
    aldeano.setInventario(TipoObjeto::pan);
    do
    {
        cout << "--------------------------------------" << endl;
        cout << "Ingrese la opcion a realizar: " << endl;
        cout << endl;

        cout << "1-Ingresar comando a aldeano" << endl;
        cout << "2-Hacer tradeo >:)" << endl;
        cout << "3-Mostrar datos del aldeano" << endl;
        cout << "4-Salir" << endl;

        cin >> opcion;

        cout << "--------------------------------------" << endl;

        switch (opcion)
        {
        case 1:
            cout << "Ahora escribe uno de los siguientes comandos: " << endl;
            cout << "1.Agua.Bendita    2. Rayo     3.Mordida     4.Chuleta    5.Dolar.Negro" << endl;
            cin >> palabraClave;

            cout << "--------------------------------------" << endl;
            command.command(palabraClave, aldeano.stats.tipo);

            cout << "Despues del comando:" << endl;
            cout << "Nombre: " << aldeano.stats.nombre << endl;
            cout << "Salud: " << aldeano.stats.salud << endl;
            cout << "Tipo: " << aldeano.stats.tipo << endl;
            cout << "Objeto: " << aldeano.stats.objeto << endl;
            break;

        case 2:
            cout << "Ahora escribe uno de los siguientes comandos: " << endl;
            cout << "1. Pan     2.Posiones     3.Carne.Podrida    4.Carne.Rica    5.Peso.Argentino" << endl;
            cin >> palabraClave;

            cout << "--------------------------------------" << endl;
            command.intercambio(palabraClave, aldeano.stats.tipo, aldeano.stats.objeto);

            cout << "Objeto actual: " << aldeano.getInventario() << endl;
            break;

        case 3:
            cout << "Estado actual del aldeano:" << endl;
            cout << "Nombre: " << aldeano.stats.nombre << endl;
            cout << "Salud: " << aldeano.stats.salud << endl;
            cout << "Tipo: " << aldeano.stats.tipo << endl;
            cout << "Objeto: " << aldeano.stats.objeto << endl;
            break;

        case 4:
            cout << "Bye, bye..." << endl;
            break;

        default:
            cout << "No fue una opcion valida" << endl;
            break;
        }
    } while (opcion != 4);
    /*
    Aldeano aldeano;
    Command command;

  
    aldeano.setNombre("Jhon");
    aldeano.setSalud(100); 
    aldeano.setTipo(TipoAldeano::aldeanoBase); 

 
    cout << "Estado inicial del aldeano:" << endl;
    cout << "Nombre: " << aldeano.getNombre() << endl;
    cout << "Salud: " << aldeano.getSalud() << endl;
    cout << "Tipo: " << aldeano.getTipo() << endl;

  
    command.command("Rayo", aldeano.getTipo());

   
    cout << "Después del comando 'Rayo':" << endl;
    cout << "Nombre: " << aldeano.getNombre() << endl;
    cout << "Salud: " << aldeano.getSalud() << endl;
    cout << "Tipo: " << aldeano.getTipo() << endl;
    */

    //El aldeano tiene un objeto y te lo puede dar a cambio de otro que tengas en el inventario, si no lo tiene pues no te da el objeto, de lo contrario, si te da el objeto
}