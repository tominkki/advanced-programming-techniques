#include "app.h"

App::App(QWidget *parent)
    : QMainWindow(parent) {
    this->_central_widget = new QWidget(this);
    this->_layout = new QFormLayout(this->_central_widget);

    this->_name_edit = new QLineEdit(this);
    this->_id_edit = new QLineEdit(this);
    this->_credits_edit = new QLineEdit(this);
    this->_street_edit = new QLineEdit(this);
    this->_zip_edit = new QLineEdit(this);
    this->_municipality_edit = new QLineEdit(this);

    this->_credits_edit->setValidator(new QIntValidator(0, INT32_MAX, this));
    this->_zip_edit->setValidator(new QIntValidator(0, INT32_MAX, this));

    this->_submit_button = new QPushButton("Submit", this);
    this->_submit_button->setDisabled(true);

    this->_layout->addRow("Name", this->_name_edit);
    this->_layout->addRow("Student id", this->_id_edit);
    this->_layout->addRow("Credits", this->_credits_edit);
    this->_layout->addRow("Street address", this->_street_edit);
    this->_layout->addRow("ZIP", this->_zip_edit);
    this->_layout->addRow("Municipality", this->_municipality_edit);
    this->_layout->addWidget(this->_submit_button);

    connect(this->_name_edit, &QLineEdit::textChanged, this, &App::enable_submit);
    connect(this->_id_edit, &QLineEdit::textChanged, this, &App::enable_submit);
    connect(this->_credits_edit, &QLineEdit::textChanged, this, &App::enable_submit);
    connect(this->_street_edit, &QLineEdit::textChanged, this, &App::enable_submit);
    connect(this->_zip_edit, &QLineEdit::textChanged, this, &App::enable_submit);
    connect(this->_municipality_edit, &QLineEdit::textChanged, this, &App::enable_submit);
    connect(this->_submit_button, &QPushButton::clicked, this, &App::submit);

    this->_palette = new QPalette();
    this->_palette->setColor(QPalette::Window, QColor(46,52,64));
    this->_palette->setColor(QPalette::WindowText, Qt::white);

    this->_central_widget->setAutoFillBackground(true);
    this->_central_widget->setPalette(*this->_palette);

    this->setCentralWidget(this->_central_widget);
}

App::~App() {}

void App::enable_submit(void) {
    bool enable = true;

    enable &= this->_name_edit->text().length() >= 3;
    enable &= this->_id_edit->text().length() >= 3;
    enable &= this->_credits_edit->text().length() >= 1;
    enable &= this->_street_edit->text().length() >= 3;
    enable &= this->_zip_edit->text().length() >= 3;
    enable &= this->_municipality_edit->text().length() >= 3;

    this->_submit_button->setEnabled(enable);
}

void App::submit(void) {
    this->_student.set_name(this->_name_edit->text().toStdString());
    this->_student.set_student_id(this->_id_edit->text().toStdString());
    this->_student.set_credits(this->_credits_edit->text().toInt());
    this->_student.set_address(
                this->_street_edit->text().toStdString(),
                this->_zip_edit->text().toStdString(),
                this->_municipality_edit->text().toStdString()
    );

    this->_name_edit->clear();
    this->_id_edit->clear();
    this->_credits_edit->clear();
    this->_street_edit->clear();
    this->_zip_edit->clear();
    this->_municipality_edit->clear();
}
