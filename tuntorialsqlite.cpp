#include "tuntorialsqlite.h"
#include "ui_tuntorialsqlite.h"

#include <QMessagebox>
#include <QtGui>

Tuntorialsqlite::Tuntorialsqlite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tuntorialsqlite)
{
    ui->setupUi(this);

    this->setWindowTitle("Tutorial SQLITE");
    habilitar_query(false);
    valoresIniciais();

    connect(ui->btn_conectar, SIGNAL(clicked()), this, SLOT(validarCampos()))
    connect(ui->btn_desconectar,SIGNAL(clicked()), this,SLOT(desconectar()))
    connect(ui->btn_executar, SIGNAL(clicked(),this, SLOT (enviarQuery)))

    txt_query = new QSqlQueryModel;
}

Tuntorialsqlite::~Tuntorialsqlite()
{
    delete ui;
}
