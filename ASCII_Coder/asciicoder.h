#ifndef ASCIICODER_H
#define ASCIICODER_H

#include <QWidget>

namespace Ui {
class asciiCoder;
}

class asciiCoder : public QWidget
{
    Q_OBJECT
    
public:
    explicit asciiCoder(QWidget *parent = 0);
    ~asciiCoder();
    QString code(QString );
    QString getText();

private slots:
    void on_pushButton1_clicked();

private:
    Ui::asciiCoder *ui;
    QString buffer;
};

#endif // ASCIICODER_H
