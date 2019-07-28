import QtQuick 2.5
import QtQuick.Controls 2.5


Menu {
    title: qsTr("修改长度")

    CustomMenuSeparator {}

    Action {
        text: qsTr("增加一像素");
        onTriggered: {
            console.log("---add one pixel-----");
        }
    }

    Action {
        text: qsTr("减少一像素");
        onTriggered: {
            console.log("---sub one pixel-----");
        }
    }

    delegate: MenuDelegate {}
    background: MenuBg {}
}
