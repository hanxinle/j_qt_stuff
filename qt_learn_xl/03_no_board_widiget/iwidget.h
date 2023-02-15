#pragma once
#include <QWidget>

class IWidget : public QWidget {
public:
    IWidget(QWidget *p = nullptr);
    ~IWidget() {}

protected:
    // 讲鼠标控件控制拉伸.
    bool nativeEvent(const QByteArray &eventType, void *message, long *result) override;

private:
    int m_nBorderWidth = 5;
};
