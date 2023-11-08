#ifndef MINIALPHAGOUI_H
#define MINIALPHAGOUI_H

#include <QMainWindow>
#include <QPushButton>
#include <QPalette>
#include <QLabel>
#include <QPainter>
#include <cstdint>
#include <cstdio>

QT_BEGIN_NAMESPACE
namespace Ui { class MiniAlphaGoUi; }
QT_END_NAMESPACE

class MiniAlphaGoUi : public QMainWindow
{
    Q_OBJECT

public:
    // get instance
    static MiniAlphaGoUi &getinstance()
    {
        static MiniAlphaGoUi _instance;
        return _instance;
    }

    // deconstructor
    ~MiniAlphaGoUi();
private:
    //constructor
    explicit MiniAlphaGoUi(QWidget *parent = nullptr);
    //create index
    void createGameUi();
    //player first
    void playerFirst();
    //ai first
    void aiFirst();

private:
    // index name
    QLabel *name;
    // ai button
    QPushButton *ai_first;
    // player button
    QPushButton *player_first;
};
#endif // MINIALPHAGOUI_H
