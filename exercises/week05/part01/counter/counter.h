#ifndef COUNTER_H
#define COUNTER_H

#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QPalette>

class counter : public QMainWindow {
    Q_OBJECT

    private:
        int _value;
        QWidget* _central_widget;
        QGridLayout* _layout;
        QLabel* _count;
        QPushButton* _add;
        QPushButton* _sub;
        QPalette* _pal;

        void update_count();

    public:
        counter(QWidget *parent = nullptr);
        ~counter();

    public slots:
        void increase_value();
        void decrease_value();
};
#endif // COUNTER_H
