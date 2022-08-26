#pragma once

#include <QList>
#include <QString>
#include <QtWidgets>

class Menu
{
    public:

        float fwPrice = 4.50;
        float caPrice = 4.70;
        float exPrice = 3.50;
        float lbPrice = 4.00;
        float maPrice = 5.00;
        /*
        QString fwLabel = "Flat White";
        QString caLabel = "Cappuccino";
        QString exLabel = "Expresso";
        QString lbLabel = "Long Black";
        QString maLabel = "Macchiato";
       */

      //QList<QString> menuList(30, "Empty");  // using a QList for the menu is better than a normal list because it is dynamic
};
