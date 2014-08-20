#include "tuntorialsqlite.h"
#include <QtWidgets>

int main(int agrc, char *argv[])
{
    //Instncia base para incializar a aplicacao
    QApplication app(argc, argv);

    //Formulario principal
    tutorialSQLITE form;

    //Exibe formulario principal
    form.show();

    //Inicializa a aplicacao
    return app.exec();
}
