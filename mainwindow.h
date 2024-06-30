#pragma once

#include <QMainWindow>
#include <QDebug>
#include <QMediaPlayer>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    int m_beatsPerMeasure{2};
    QTimer *m_timer;
    int m_bpm{120};
    int m_currentBeat{0};
    QMediaPlayer *metronome1;
    QMediaPlayer *metronome2;
public slots:
    void tick();
private slots:
    void on_volume_down_clicked();
    void on_volume_up_clicked();
    void on_pushButton_2_4_clicked(bool checked);
    void on_pushButton_3_4_clicked(bool checked);
    void on_pushButton_4_4_clicked(bool checked);
    void on_pushButton_5_4_clicked(bool checked);
    void on_pushButton_clicked(bool checked);
};
