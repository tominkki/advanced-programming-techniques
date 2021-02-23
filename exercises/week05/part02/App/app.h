#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include <QWidget>
#include <QFormLayout>
#include <QPalette>
#include <QLabel>
#include <QLineEdit>
#include <QIntValidator>
#include <QPushButton>

#include "student.h"

class App : public QMainWindow {
    Q_OBJECT

    private:
        Student _student;

        QWidget* _central_widget;
        QFormLayout* _layout;
        QPalette* _palette;

        QLineEdit* _name_edit;
        QLineEdit* _id_edit;
        QLineEdit* _credits_edit;
        QLineEdit* _street_edit;
        QLineEdit* _zip_edit;
        QLineEdit* _municipality_edit;

        QPushButton* _submit_button;

    public:
        App(QWidget *parent = nullptr);
        ~App();

    public slots:
        void enable_submit(void);
        void submit(void);
};
#endif // APP_H
