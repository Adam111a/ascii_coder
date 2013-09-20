#include "asciicoder.h"
#include "ui_asciicoder.h"

asciiCoder::asciiCoder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::asciiCoder),
    buffer("")
{
    ui->setupUi(this);
}

QString asciiCoder::code(QString input)
{
    for(signed int i = 0; i < input.length(); i++)
        buffer+= (QString)(input[i].toAscii() + i);
    return buffer;
}

asciiCoder::~asciiCoder()
{
    delete ui;
}

void asciiCoder::on_pushButton1_clicked()
{
    ui->OutputString->setText(code(ui->InputString->text()));
    buffer = "";
}
