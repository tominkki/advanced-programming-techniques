#include "counter.h"

counter::counter(QWidget *parent)
    : QMainWindow(parent), _value(0) {
    this->_central_widget = new QWidget(this);
    this->_layout = new QGridLayout();
    this->_count = new QLabel("9 + 10 = 21", this->_central_widget);
    this->_add = new QPushButton("+", this->_central_widget);
    this->_sub = new QPushButton("-", this->_central_widget);
    this->_pal = new QPalette();

    this->_layout->addWidget(this->_count, 0, 0, 1, 2, Qt::AlignCenter);
    this->_layout->addWidget(this->_sub, 1, 0);
    this->_layout->addWidget(this->_add, 1, 1);

    this->_pal->setColor(QPalette::Background, Qt::black);

    this->_central_widget->setLayout(this->_layout);
    this->_central_widget->setAutoFillBackground(true);
    this->_central_widget->setPalette(*this->_pal);

    this->setCentralWidget(this->_central_widget);

    connect(this->_add, &QPushButton::clicked, this, &counter::increase_value);
    connect(this->_sub, &QPushButton::clicked, this, &counter::decrease_value);
}

counter::~counter() {
}

void counter::increase_value() {
    this->_value++;
    this->update_count();
}

void counter::decrease_value() {
    this->_value--;
    this->update_count();
}

void counter::update_count() {
    this->_count->setText(QString::number(this->_value));
}
