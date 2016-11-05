#ifndef MOVIEFLIXWINDOW_H
#define MOVIEFLIXWINDOW_H

#include <QObject>
#include <QWidget>
#include <QWebEngineView>
#include <QWebEngineSettings>
#include <QWebEngineProfile>
#include <QWebEnginePage>
#include <QWebEngineFullScreenRequest>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include <QIcon>

class MovieFlixWindow : public QWebEngineView
{
    Q_OBJECT
public:
    MovieFlixWindow();
    ~MovieFlixWindow();

signals:

private slots:
    void renderProcessTerminationHandler(QWebEnginePage::RenderProcessTerminationStatus termStatus,
                                             int statusCode);
    void featurePermissionRequested(const QUrl & securityOrigin,
                                    QWebEnginePage::Feature feature);
    void fullScreenRequested(QWebEngineFullScreenRequest request);
};

#endif // MOVIEFLIXWINDOW_H
