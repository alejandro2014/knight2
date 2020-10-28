#include <QApplication>
#include <QLabel>
#include <QWidget>

int main(int argc, char *argv[ ]) {
    QApplication app(argc, argv);
    QLabel hola("<center>Ejemplo Qt para Ubunlog</center>");
    
    hola.setWindowTitle("Mi primer programa Qt");
    hola.resize(600, 400);
    hola.show();

    return app.exec();
}
