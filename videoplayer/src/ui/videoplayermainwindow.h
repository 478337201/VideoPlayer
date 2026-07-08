#pragma once

#include <QMainWindow>

class QMediaPlayer;
class QAudioOutput;

namespace Ui
{
class VideoPlayerMainWindow;
}

class VideoPlayerMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit VideoPlayerMainWindow(QWidget* pParent = nullptr);
    ~VideoPlayerMainWindow() override;

private slots:
    void onOpenFile();
    void onPlayPause();
    void onPlaybackStateChanged();

private:
    Ui::VideoPlayerMainWindow* m_pUi = nullptr;
    QMediaPlayer* m_pPlayer = nullptr;
    QAudioOutput* m_pAudioOutput = nullptr;
};
