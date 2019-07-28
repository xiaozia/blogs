import QtQuick 2.5
import QtQuick.Controls 2.5


Menu {
    title: qsTr("修改")

    CustomMenuSeparator {}

    ModifyLenSubMenu {}

    Action {
        text: qsTr("调整宽度");
        onTriggered: {
            console.log("---modify width-----");
        }
    }

    Action {
        text: qsTr("调整颜色");
        onTriggered: {
            console.log("---modify height-----");
        }
    }

    delegate: MenuDelegate {}
    background: MenuBg {}
}
