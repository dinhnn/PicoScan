#ifndef PLOTWIDGET_H
#define PLOTWIDGET_H

#include "imageviewwidget.h"

#include <vector>

class PlotWidget : public ImageViewWidget
{
    Q_OBJECT
public:
    explicit PlotWidget(QWidget *parent = 0);
    void setHeaders(std::vector<QString> headerList);
    void setData(cv::Mat input);
    void setData(std::vector<cv::Mat> input);
    void plotLines();
signals:
    
public slots:

private:
    std::vector<QString> headerList;
    cv::Mat data;

    void fixHeaders();
    
};

#endif // PLOTWIDGET_H
