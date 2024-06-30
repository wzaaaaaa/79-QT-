#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    m_timer = new QTimer(this);
    m_timer->setInterval(60000/m_bpm);
    connect(m_timer, &QTimer::timeout, this, &MainWindow::tick);
    metronome1 = new QMediaPlayer(this);
    metronome1->setMedia(QUrl("qrc:/metronome1.wav"));
    metronome2 = new QMediaPlayer(this);
    metronome2->setMedia(QUrl("qrc:/metronome2.wav"));
}

void MainWindow::tick()
{
    qDebug() << "Tick " << (m_currentBeat + 1) << "/" << m_beatsPerMeasure;

    switch (m_beatsPerMeasure)
    {
    case 2:
        if(m_currentBeat == 0)
        {
            ui->pushButton_circle_1_1->setChecked(true);
            ui->pushButton_arrow_1_1->setChecked(true);
            ui->pushButton_circle_1_2->setChecked(false);
            ui->pushButton_arrow_1_2->setChecked(false);
            metronome1->stop();
            metronome1->play();
        }
        else if(m_currentBeat == 1)
        {
            ui->pushButton_circle_1_1->setChecked(false);
            ui->pushButton_arrow_1_1->setChecked(false);
            ui->pushButton_circle_1_2->setChecked(true);
            ui->pushButton_arrow_1_2->setChecked(true);
            metronome2->stop();
            metronome2->play();
        }
        break;
    case 3:
        if(m_currentBeat == 0)
        {
            ui->pushButton_circle_2_1->setChecked(true);
            ui->pushButton_arrow_2_1->setChecked(true);
            ui->pushButton_circle_2_2->setChecked(false);
            ui->pushButton_arrow_2_2->setChecked(false);
            ui->pushButton_circle_2_3->setChecked(false);
            ui->pushButton_arrow_2_3->setChecked(false);
            metronome1->stop();
            metronome1->play();
        }
        else if(m_currentBeat == 1)
        {
            ui->pushButton_circle_2_1->setChecked(false);
            ui->pushButton_arrow_2_1->setChecked(false);
            ui->pushButton_circle_2_2->setChecked(true);
            ui->pushButton_arrow_2_2->setChecked(true);
            ui->pushButton_circle_2_3->setChecked(false);
            ui->pushButton_arrow_2_3->setChecked(false);
            metronome2->stop();
            metronome2->play();
        }
        else if(m_currentBeat == 2)
        {
            ui->pushButton_circle_2_1->setChecked(false);
            ui->pushButton_arrow_2_1->setChecked(false);
            ui->pushButton_circle_2_2->setChecked(false);
            ui->pushButton_arrow_2_2->setChecked(false);
            ui->pushButton_circle_2_3->setChecked(true);
            ui->pushButton_arrow_2_3->setChecked(true);
            metronome2->stop();
            metronome2->play();
        }
        break;
    case 4:
        if(m_currentBeat == 0)
        {
            ui->pushButton_circle_3_1->setChecked(true);
            ui->pushButton_arrow_3_1->setChecked(true);
            ui->pushButton_circle_3_2->setChecked(false);
            ui->pushButton_arrow_3_2->setChecked(false);
            ui->pushButton_circle_3_3->setChecked(false);
            ui->pushButton_arrow_3_3->setChecked(false);
            ui->pushButton_circle_3_4->setChecked(false);
            ui->pushButton_arrow_3_4->setChecked(false);
            metronome1->stop();
            metronome1->play();
        }
        else if(m_currentBeat == 1)
        {
            ui->pushButton_circle_3_1->setChecked(false);
            ui->pushButton_arrow_3_1->setChecked(false);
            ui->pushButton_circle_3_2->setChecked(true);
            ui->pushButton_arrow_3_2->setChecked(true);
            ui->pushButton_circle_3_3->setChecked(false);
            ui->pushButton_arrow_3_3->setChecked(false);
            ui->pushButton_circle_3_4->setChecked(false);
            ui->pushButton_arrow_3_4->setChecked(false);
            metronome2->stop();
            metronome2->play();
        }
        else if(m_currentBeat == 2)
        {
            ui->pushButton_circle_3_1->setChecked(false);
            ui->pushButton_arrow_3_1->setChecked(false);
            ui->pushButton_circle_3_2->setChecked(false);
            ui->pushButton_arrow_3_2->setChecked(false);
            ui->pushButton_circle_3_3->setChecked(true);
            ui->pushButton_arrow_3_3->setChecked(true);
            ui->pushButton_circle_3_4->setChecked(false);
            ui->pushButton_arrow_3_4->setChecked(false);
            metronome2->stop();
            metronome2->play();
        }
        else if(m_currentBeat == 3)
        {
            ui->pushButton_circle_3_1->setChecked(false);
            ui->pushButton_arrow_3_1->setChecked(false);
            ui->pushButton_circle_3_2->setChecked(false);
            ui->pushButton_arrow_3_2->setChecked(false);
            ui->pushButton_circle_3_3->setChecked(false);
            ui->pushButton_arrow_3_3->setChecked(false);
            ui->pushButton_circle_3_4->setChecked(true);
            ui->pushButton_arrow_3_4->setChecked(true);
            metronome2->stop();
            metronome2->play();
        }
        break;
    case 5:
        if(m_currentBeat == 0)
        {
            ui->pushButton_circle_4_1->setChecked(true);
            ui->pushButton_arrow_4_1->setChecked(true);
            ui->pushButton_circle_4_2->setChecked(false);
            ui->pushButton_arrow_4_2->setChecked(false);
            ui->pushButton_circle_4_3->setChecked(false);
            ui->pushButton_arrow_4_3->setChecked(false);
            ui->pushButton_circle_4_4->setChecked(false);
            ui->pushButton_arrow_4_4->setChecked(false);
            ui->pushButton_circle_4_5->setChecked(false);
            ui->pushButton_arrow_4_5->setChecked(false);
            metronome1->stop();
            metronome1->play();
        }
        else if(m_currentBeat == 1)
        {
            ui->pushButton_circle_4_1->setChecked(false);
            ui->pushButton_arrow_4_1->setChecked(false);
            ui->pushButton_circle_4_2->setChecked(true);
            ui->pushButton_arrow_4_2->setChecked(true);
            ui->pushButton_circle_4_3->setChecked(false);
            ui->pushButton_arrow_4_3->setChecked(false);
            ui->pushButton_circle_4_4->setChecked(false);
            ui->pushButton_arrow_4_4->setChecked(false);
            ui->pushButton_circle_4_5->setChecked(false);
            ui->pushButton_arrow_4_5->setChecked(false);
            metronome2->stop();
            metronome2->play();
        }
        else if(m_currentBeat == 2)
        {
            ui->pushButton_circle_4_1->setChecked(false);
            ui->pushButton_arrow_4_1->setChecked(false);
            ui->pushButton_circle_4_2->setChecked(false);
            ui->pushButton_arrow_4_2->setChecked(false);
            ui->pushButton_circle_4_3->setChecked(true);
            ui->pushButton_arrow_4_3->setChecked(true);
            ui->pushButton_circle_4_4->setChecked(false);
            ui->pushButton_arrow_4_4->setChecked(false);
            ui->pushButton_circle_4_5->setChecked(false);
            ui->pushButton_arrow_4_5->setChecked(false);
            metronome2->stop();
            metronome2->play();
        }
        else if(m_currentBeat == 3)
        {
            ui->pushButton_circle_4_1->setChecked(false);
            ui->pushButton_arrow_4_1->setChecked(false);
            ui->pushButton_circle_4_2->setChecked(false);
            ui->pushButton_arrow_4_2->setChecked(false);
            ui->pushButton_circle_4_3->setChecked(false);
            ui->pushButton_arrow_4_3->setChecked(false);
            ui->pushButton_circle_4_4->setChecked(true);
            ui->pushButton_arrow_4_4->setChecked(true);
            ui->pushButton_circle_4_5->setChecked(false);
            ui->pushButton_arrow_4_5->setChecked(false);
            metronome2->stop();
            metronome2->play();
        }
        else if(m_currentBeat == 4)
        {
            ui->pushButton_circle_4_1->setChecked(false);
            ui->pushButton_arrow_4_1->setChecked(false);
            ui->pushButton_circle_4_2->setChecked(false);
            ui->pushButton_arrow_4_2->setChecked(false);
            ui->pushButton_circle_4_3->setChecked(false);
            ui->pushButton_arrow_4_3->setChecked(false);
            ui->pushButton_circle_4_4->setChecked(false);
            ui->pushButton_arrow_4_4->setChecked(false);
            ui->pushButton_circle_4_5->setChecked(true);
            ui->pushButton_arrow_4_5->setChecked(true);
            metronome2->stop();
            metronome2->play();
        }
        break;
    default:
        break;
    }

    m_currentBeat = (m_currentBeat + 1) % m_beatsPerMeasure;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_volume_down_clicked()
{
    qDebug() << __func__;
    m_bpm--;
    ui->label->setText(QString::number(m_bpm));
    m_timer->setInterval(60000/m_bpm);
}

void MainWindow::on_volume_up_clicked()
{
    qDebug() << __func__;
    m_bpm++;
    ui->label->setText(QString::number(m_bpm));
    m_timer->setInterval(60000/m_bpm);
}

void MainWindow::on_pushButton_2_4_clicked(bool checked)
{
    if(checked)
    {
        qDebug() << __func__;
        ui->stackedWidget->setCurrentIndex(0);
        m_beatsPerMeasure = 2;
        ui->pushButton_3_4->setChecked(false);
        ui->pushButton_4_4->setChecked(false);
        ui->pushButton_5_4->setChecked(false);
    }
}

void MainWindow::on_pushButton_3_4_clicked(bool checked)
{
    if(checked)
    {
        qDebug() << __func__;
        ui->stackedWidget->setCurrentIndex(1);
        m_beatsPerMeasure = 3;
        ui->pushButton_2_4->setChecked(false);
        ui->pushButton_4_4->setChecked(false);
        ui->pushButton_5_4->setChecked(false);
    }
}

void MainWindow::on_pushButton_4_4_clicked(bool checked)
{
    if(checked)
    {
        qDebug() << __func__;
        ui->stackedWidget->setCurrentIndex(2);
        m_beatsPerMeasure = 4;
        ui->pushButton_2_4->setChecked(false);
        ui->pushButton_3_4->setChecked(false);
        ui->pushButton_5_4->setChecked(false);
    }
}

void MainWindow::on_pushButton_5_4_clicked(bool checked)
{
    if(checked)
    {
        qDebug() << __func__;
        ui->stackedWidget->setCurrentIndex(3);
        m_beatsPerMeasure = 5;
        ui->pushButton_2_4->setChecked(false);
        ui->pushButton_3_4->setChecked(false);
        ui->pushButton_4_4->setChecked(false);
    }
}

void MainWindow::on_pushButton_clicked(bool checked)
{
    if(checked)
    {
        ui->widget_a->setEnabled(false);
        QTimer::singleShot(0, [=](){tick();});
        m_timer->start();
        m_currentBeat = 0;
    }
    else
    {
        ui->widget_a->setEnabled(true);
        m_timer->stop();
        m_currentBeat = 0;
    }
}

