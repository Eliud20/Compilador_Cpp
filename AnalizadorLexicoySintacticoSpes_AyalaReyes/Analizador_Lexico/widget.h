#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <iostream>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:

    void on_analizar_clicked();

    void on_archivo_clicked();

    void on_guardar_clicked();

    void on_salir_clicked();

    void analiza();

    void sintac(QString simb, int edo);

    void Token(int est, string cad);

    void Error(int err);

    void on_limpiar_clicked();

    void ingresa_deriva(int produ[124][11], int fila, int pila[]);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
