#ifndef TUNTORIALSQLITE_H
#define TUNTORIALSQLITE_H

#include <QDialog>
#include <QsqlQueryModel>

namespace Ui {
class Tuntorialsqlite;
}

class Tuntorialsqlite : public QDialog
{
    Q_OBJECT
public slots:
    void validarCampos();
    void desconectar();
    void enviarQuery();

public:
    explicit Tuntorialsqlite(QWidget *parent = 0);
    ~Tuntorialsqlite();

private:
    Ui::Tuntorialsqlite *ui;
    QsqlQueryModel *txt query;
    void habilitar_query(bool ativo);
    void valoresIniciais();
    void conectarSQL();
};

#endif // TUNTORIALSQLITE_H
