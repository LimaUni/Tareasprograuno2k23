//empezamos declarando las liberias que estaremos usando y agregaremos las que hemos creado
#include <iostream>
#include <unistd.h>
//liberia creada
#include "Juego.h"
//liberia creada
#include "Config.h"

//indispensable
using namespace std;

//vamos a empezar
int main()

{   //como prime paso empezamos poniendo nuestros valores constantes con su tipo de dato
    cout << "'########::'##::::'##::'######:::'######:::::'###::::'##::::'##:'####:'##::: ##::::'###:::::'######::"<< endl;
    cout << " ##.... ##: ##:::: ##:'##... ##:'##... ##:::'## ##::: ###::'###:. ##:: ###:: ##:::'## ##:::'##... ##:"<< endl;
    cout << " ##:::: ##: ##:::: ##: ##:::..:: ##:::..:::'##:. ##:: ####'####:: ##:: ####: ##::'##:. ##:: ##:::..::"<< endl;
    cout << " ########:: ##:::: ##:. ######:: ##:::::::'##:::. ##: ## ### ##:: ##:: ## ## ##:'##:::. ##:. ######::"<< endl;
    cout << " ##.... ##: ##:::: ##::..... ##: ##::::::: #########: ##. #: ##:: ##:: ##. ####: #########::..... ##:"<< endl;
    cout << " ##:::: ##: ##:::: ##:'##::: ##: ##::: ##: ##.... ##: ##:.:: ##:: ##:: ##:. ###: ##.... ##:'##::: ##:"<< endl;
    cout << " ########::. #######::. ######::. ######:: ##:::: ##: ##:::: ##:'####: ##::. ##: ##:::: ##:. ######::"<< endl;
    cout << "........::::.......::::......::::......:::..:::::..::..:::::..::....::..::::..::..:::::..:::......:::"<< endl;
    cout<<"\n"<<endl;
    cout << "'########:'##::::::::'#######::'########:::::'########::'########::::'##::::::::'#######::'########::'#######::"<< endl;
    cout << " ##.....:: ##:::::::'##.... ##: ##.... ##:::: ##.... ##: ##.....::::: ##:::::::'##.... ##:... ##..::'##.... ##:"<< endl;
    cout << " ##::::::: ##::::::: ##:::: ##: ##:::: ##:::: ##:::: ##: ##:::::::::: ##::::::: ##:::: ##:::: ##:::: ##:::: ##:"<< endl;
    cout << " ######::: ##::::::: ##:::: ##: ########::::: ##:::: ##: ######:::::: ##::::::: ##:::: ##:::: ##:::: ##:::: ##:"<< endl;
    cout << " ##...:::: ##::::::: ##:::: ##: ##.. ##:::::: ##:::: ##: ##...::::::: ##::::::: ##:::: ##:::: ##:::: ##:::: ##:"<< endl;
    cout << " ##::::::: ##::::::: ##:::: ##: ##::. ##::::: ##:::: ##: ##:::::::::: ##::::::: ##:::: ##:::: ##:::: ##:::: ##:"<< endl;
    cout << " ##::::::: ########:. #######:: ##:::. ##:::: ########:: ########:::: ########:. #######::::: ##::::. #######::"<< endl;
    cout << "..::::::::........:::.......:::..:::::..:::::........:::........:::::........:::.......::::::..::::::.......:::"<< endl;
    cout << "              .                                                        "<< endl;
    cout << "             .@.                                    .                  "<< endl;
    cout << "             @m@,.                                 .@                  "<< endl;
    cout << "            .@m%nm@,.                            .@m@                  "<< endl;
    cout << "           .@nvv%vnmm@,.                      .@mn%n@                  "<< endl;
    cout << "          .@mnvvv%vvnnmm@,.                .@mmnv%vn@,                 "<< endl;
    cout << "          @mmnnvvv%vvvvvnnmm@,.        .@mmnnvvv%vvnm@                 "<< endl;
    cout << "          @mmnnvvvvv%vvvvvvnnmm@, ;;;@mmnnvvvvv%vvvnm@,                "<< endl;
    cout << "          `@mmnnvvvvvv%vvvvvnnmmm;;@mmnnvvvvvv%vvvvnmm@                "<< endl;
    cout << "           `@mmmnnvvvvvv%vvvnnmmm;%mmnnvvvvvv%vvvvnnmm@                "<< endl;
    cout << "             `@m%v%v%v%v%v;%;%;%;%;%;%;%%%vv%vvvvnnnmm@                "<< endl;
    cout << "             .,mm@@@@@mm%;;@@m@m@@m@@m@mm;;%%vvvnnnmm@;@,.             "<< endl;
    cout << "          .,@mmmmmmvv%%;;@@vmvvvvvvvvvmvm@@;;%%vvnnm@;%mmm@,           "<< endl;
    cout << "       .,@mmnnvvvvv%%;;@@vvvvv%%%%%%%vvvvmm@@;;%%mm@;%%nnnnm@,         "<< endl;
    cout << "    .,@mnnvv%v%v%v%%;;@mmvvvv%%;*;*;%%vvvvmmm@;;%m;%%v%v%v%vmm@,.      "<< endl;
    cout << ",@mnnvv%v%v%v%v%v%v%;;@@vvvv%%;*;*;*;%%vvvvm@@;;m%%%v%v%v%v%v%vnnm@,   "<< endl;
    cout << "`    `@mnnvv%v%v%v%%;;@mvvvvv%%;;*;;%%vvvmmmm@;;%m;%%v%v%v%vmm@'   '   "<< endl;
    cout << "         `@mmnnvvvvv%%;;@@mvvvv%%%%%%%vvvvmm@@;;%%mm@;%%nnnnm@'        "<< endl;
    cout << "            `@mmmmmmvv%%;;@@mvvvvvvvvvvmmm@@;;%%mmnmm@;%mmm@'          "<< endl;
    cout << "              `mm@@@@@mm%;;@m@@m@m@m@@m@@;;%%vvvvvnmm@;@'              "<< endl;
    cout << "             ,@m%v%v%v%v%v;%;%;%;%;%;%;%;%vv%vvvvvnnmm@                "<< endl;
    cout << "           .@mmnnvvvvvvv%vvvvnnmm%mmnnvvvvvvv%vvvvnnmm@                "<< endl;
    cout << "          .@mmnnvvvvvv%vvvvvvnnmm'`@mmnnvvvvvv%vvvnnmm@                "<< endl;
    cout << "          @mmnnvvvvv%vvvvvvnnmm@':%::`@mmnnvvvv%vvvnm@'                "<< endl;
    cout << "          @mmnnvvv%vvvvvnnmm@'`:::%%:::'`@mmnnvv%vvmm@                 "<< endl;
    cout << "          `@mnvvv%vvnnmm@'     `:;%%;:'     `@mvv%vm@'                 "<< endl;
    cout << "           `@mnv%vnnm@'          `;%;'         `@n%n@                  "<< endl;
    cout << "            `@m%mm@'              ;%;.           `@m@                  "<< endl;
    cout << "             @m@'                 `;%;             `@                  "<< endl;
    cout << "             `@'                   ;%;.             '                  "<< endl;
    cout << "              `                    `;%;                                 "<< endl;
    cout << "============================================================================================================================="<< endl;
    system("pause");
    system("cls");
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = false;
    const int VIDASTABLERO = 3;
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);

    srand(getpid());
    int opciones;
    bool repetir = true;
    do


    {   //empezaremos a crear lo que aparecera al inicio de nuestro juego, que seran las indicaciones / intrucciones

        system("cls");
        cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |            MENU DE INICIO           | / |"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
        cout << "\        -------------------------------------------------"<< endl;
        cout << "                 *===============================*"<< endl;
        cout << "                 |   Porfavor, elije una opcion  |"<< endl;
        cout << "                 |                               |"<< endl;
        cout << "                 | 1. Configuaracion del Juego   |"<< endl;
        cout << "                 | 2. Iniciar el Juego           |"<< endl;
        cout << "                 | 3. Creditos                   |"<< endl;
        cout << "                 | 4. Salir del juego            |"<< endl;
        cout << "                 |                               |"<< endl;
        cout << "                 *===============================*"<< endl;
        cin >> opciones;

        //ahora empezaremos a generar nuestras opciones, en este caso son 3 y llamamos a las clases que estan declaradas en "config.h"
        switch (opciones)
        {
            //instruccion 1
        case 1:
            {
                configuracionJuego.menuConfiguracion();
                break;
            }
            //instruccion 2
        case 2:
            {   system("cls");
              	Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                juego.iniciar();
                system("pause");
                break;
            }
            //instruccion 3
        case 3:
            {
                system("cls");
        cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |               CREDITOS              | / |"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
        cout << "\        -------------------------------------------------"<< endl;
        cout << "                 *===============================*"<< endl;
        cout << "                 |                               |"<< endl;
        cout << "                 |            GRUPO #1           |"<< endl;
        cout << "                 |                               |"<< endl;
        cout << "                 |    JULIO MELGAR   (TULIO)     |"<< endl;
        cout << "                 |    jAVIER LIMA    (LIMA)      |"<< endl;
        cout << "                 |    KESDY MELGAR   (KES)       |"<< endl;
        cout << "                 |    ERICK SOLARES  (RICK)      |"<< endl;
        cout << "                 |                               |"<< endl;
        cout << "                 *===============================*"<< endl;
                system("pause");
                system("cls");
                break;

            }
            //instruccion 4
        case 4:
            {
                repetir = false;
                break;
            }
        case 666:
            {
                system("cls");
                cout << "                 *===============================*"<< endl;
                cout << "                 |                               |"<< endl;
                cout << "                 |     OH NO! HAZ ENCONTRADO     |"<< endl;
                cout << "                 |         A UN INTRUSO          |"<< endl;
                cout << "                 |                               |"<< endl;
                cout << "                 *===============================*"<< endl;
                cout << "                                                             .."<< endl;
                cout << "                                  ,,,                         MM .M"<< endl;
                cout << "                              ,!MMMMMMM!,                     MM MM  ,."<< endl;
                cout << "      ., .M                .MMMMMMMMMMMMMMMM.,          'MM.  MM MM .M'"<< endl;
                cout << "    . M: M;  M          .MMMMMMMMMMMMMMMMMMMMMM,          'MM,:M M'!M'"<< endl;
                cout << "   ;M MM M: .M        .MMMMMMMMMMMMMMMMMMMMMMMMMM,         'MM'...'M"<< endl;
                cout << "    M;MM;M :MM      .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.       .MMMMMMMM"<< endl;
                cout << "    'M;M'M MM      MMMMMM  MMMMMMMMMMMMMMMMM  MMMMMM.    ,,M.M.'MMM'"<< endl;
                cout << "     MM'MMMM      MMMMMM @@ MMMMMMMMMMMMMMM @@ MMMMMMM.'M''MMMM;MM'"<< endl;
                cout << "    MM., ,MM     MMMMMMMM  MMMMMMMMMMMMMMMMM  MMMMMMMMM      '.MMM"<< endl;
                cout << "    'MM;MMMMMMMM.MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMM"<< endl;
                cout << "     ''.'MMM'  .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM       MMMM"<< endl;
                cout << "      MMC      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMMM"<< endl;
                cout << "     .MM      :MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM''MMM       MMMMM"<< endl;
                cout << "     MMM      :M  'MMMMMMMMMMMMM.MMMMM.MMMMMMMMMM'.MM  MM:M.    'MMMMM"<< endl;
                cout << "    .MMM   ...:M: :M.'MMMMMMMMMMMMMMMMMMMMMMMMM'.M''   MM:MMMMMMMMMMMM'"<< endl;
                cout << "   AMMM..MMMMM:M.    :M.'MMMMMMMMMMMMMMMMMMMM'.MM'     MM''''''''''''"<< endl;
                cout << "   MMMMMMMMMMM:MM     'M'.M'MMMMMMMMMMMMMM'.MC'M'     .MM"<< endl;
                cout << "    '''''''''':MM.       'MM!M.'M-M-M-M'M.'MM'        MMM"<< endl;
                cout << "               MMM.            'MMMM!MMMM'            .MM"<< endl;
                cout << "                MMM.             '''   ''            .MM'"<< endl;
                cout << "                 MMM.                               MMM'"<< endl;
                cout << "                  MMMM            ,.J.JJJJ.       .MMM'"<< endl;
                cout << "                   MMMM.       'JJJJJJJ'JJJM   CMMMMM"<< endl;
                cout << "                    MMMMM.    'JJJJJJJJ'JJJ .MMMMM'"<< endl;
                cout << "                       MMMMMMMM.'  'JJJJJ'JJMMMMM'"<< endl;
                cout << "                         'MMMMMMMMM'JJJJJ JJJJJ'"<< endl;
                cout << "                            ''MMMMMMJJJJJJJJJJ'"<< endl;
                cout << "                                    'JJJJJJJJ'"<< endl;
                system("pause");
                system("cls");
                break;
            }

        }


    //cerramos nuestro ciclo
    } while (repetir);
    return 0;
}
