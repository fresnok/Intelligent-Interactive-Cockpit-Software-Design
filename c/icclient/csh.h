#ifndef CSH_H
#define CSH_H

#include <QWidget>

namespace Ui {
class csh;
}

class csh : public QWidget
{
    Q_OBJECT

public:
    explicit csh(QWidget *parent = nullptr);
    ~csh();

private:
    Ui::csh *ui;
};

#endif // CSH_H
