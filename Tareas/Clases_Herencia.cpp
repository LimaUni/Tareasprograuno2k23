#include <iostream>
using namespace std;
class mago
{
public:
    mago(int cantidadPoder, int cantidadVida, string nombre)
    {
        mCantidadPoder = cantidadPoder;
        mCantidadVida = cantidadVida;
        mNombre = nombre;
    }
    int getVida()
    {
        return mCantidadVida;
    }
    string getNombre()
    {
        return getNombre;
    }

protected:
    int mCantidadPoder, mCantidadVida;
    string mNombre;
};
int main()
{
    Mago Gandalf(11, 100, "Gandalf");
    cout<<"El nombre del mago es:" <<Gandalf.getNombre()<< endl;
    cout<<"La cantidad de vida del mago " <<Gandalf.getNombre() "es: " <<Gandalf,getVida()<< endl;
    return 0;

}

