#include "simple_file.h"
#include <qfiledialog.h>
#include <qmessagebox.h>
#include <qtextstream.h>
#include <qplaintextedit.h>

simple_file::simple_file(QWidget *parent)
    : QMainWindow(parent) {
    ui.setupUi(this);

    QMenu *pmu = menuBar()->addMenu("File");
    QAction *ac1 = new QAction("open", this);
    pmu->addAction(ac1);

    QPlainTextEdit *plain_text_edit = new QPlainTextEdit(this);
    plain_text_edit->setFixedSize(600, 500);
    plain_text_edit->move(0, 30);

    connect(ac1, &QAction::triggered, this, [=]() {
        QString file_name = QFileDialog::getOpenFileName(this);
        QFile *fl = new QFile(file_name);
        if (!file_name.isEmpty()) {

            if (!fl->open(QFile::ReadOnly | QFile::Text)) {
                QMessageBox::warning(this, "warning", "can not open file.");
            }
        }
        QTextStream in(fl);
        plain_text_edit->appendPlainText(in.readAll());
    });
}

simple_file::~simple_file() {}
