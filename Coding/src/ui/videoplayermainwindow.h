#pragma once

#include <QMainWindow>

namespace Ui 
{
class VideoPlayerMainWindow;
}

class VideoPlayerMainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit VideoPlayerMainWindow(QWidget *parent = nullptr);
    ~VideoPlayerMainWindow() override;

private:
    Ui::VideoPlayerMainWindow *ui;
};
