#include <iostream>
using namespace std;

class perro
{
public:
    string mLadrido;
    perro(string Nombre, string tipoLadrido)
    {
        mLadrido = tipoLadrido;
        mNombre = Nombre;
    }
    string getnombre
    {
        return mNombre;
    }
    void setNombre(string pNombre)
    {
        mNombre = pNombre;
    }
    void Ladrar()
        cout<< mLadrido<<endl;
    }
private
    string mNombre;
};
int main ()
{
    perro perrouno("Bobby", "Ladrido1");
    cout<<perrouno,getNombre()<<endl;
    perrouno.setNombre("Neron");
    cout<<perrouno,getNombre()<<endl;
    return 0
}
