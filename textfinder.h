#ifndef TEXTFINDER_H
#define TEXTFINDER_H

#include <QWidget>
#include <QPointer>

QT_BEGIN_NAMESPACE
namespace Ui { class TextFinder; }
QT_END_NAMESPACE

class TextFinder : public QWidget
{
    Q_OBJECT

private:
    Ui::TextFinder *ui;
    void loadTextFile();

private slots:
    void on_findButton_clicked();

public:
    TextFinder(QWidget *parent = nullptr);
    ~TextFinder();
};
#endif // TEXTFINDER_H
