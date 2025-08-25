#ifndef OPENSXT_H
#define OPENSXT_H

#include <QWidget>

namespace Ui {
class opensxt;
}

class opensxt : public QWidget
{
    Q_OBJECT

public:
    explicit opensxt(QWidget *parent = nullptr);
    ~opensxt();

private:
    Ui::opensxt *ui;
};

#endif // OPENSXT_H
