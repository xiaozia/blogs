import QtQuick 2.5
import QtQuick.Controls 2.5

MenuItem {
    id: menuItem
    implicitWidth: 140
    implicitHeight: 29

    leftPadding: 20

    topPadding: 0
    bottomPadding: 0

    font: Qt.font({
                  family: "微软雅黑",
                  pixelSize: 12,
                  })

    contentItem: Text {
         id : labelTxt
         text: menuItem.text
         font: menuItem.font
         opacity: enabled ? 1.0 : 0.3
         color: menuItem.highlighted ? "#00AFFF" : "#FFFFFF"
         horizontalAlignment: Text.AlignLeft
         verticalAlignment: Text.AlignVCenter
         elide: Text.ElideRight
     }

    arrow: Image {
            x: parent.width - 12
            y: (parent.height - height)/2
            visible: menuItem.subMenu
            source: "qrc:/images/small_right_arrow.png"
        }

    background: Rectangle {
        anchors.centerIn: menuItem
        implicitWidth: 140
        implicitHeight: 25
        opacity: enabled ? 1 : 0.3
        color: menuItem.highlighted ? "#33373F" : "transparent"
    }
}
