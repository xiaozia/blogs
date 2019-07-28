import QtQuick 2.5
import QtQuick.Window 2.2

Window {
    visible: true
    width: 500
    height: 300
    title: qsTr("Hello PopMenu")

    RightPopUpMenu {
        id: selectNodesMenu
    }

    MouseArea {
        anchors.fill: parent
        acceptedButtons: Qt.RightButton
        onClicked: {
            if (mouse.button === Qt.RightButton) {
                selectNodesMenu.popup();
            }
        }
    }
}
