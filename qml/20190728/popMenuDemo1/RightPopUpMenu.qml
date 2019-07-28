import QtQuick 2.5
import QtQuick.Controls 2.5

Menu {
    id: firstMenu
    title: qsTr("剪切")

    Action {
        text: qsTr("剪切");
        onTriggered: {
            console.log("---剪切-----");
        }
    }

    Action {
        text: qsTr("复制");
        onTriggered: {
            console.log("---复制-----");
        }
    }

    CustomMenuSeparator {}

    Action { text: qsTr("重命名") }

    CustomMenuSeparator {}

    InsertSubMenu {}

    ModifySubMenu {}

    CustomMenuSeparator {}

    Action { text: qsTr("删除") }

    delegate: MenuDelegate {} //注意这里的delegate不能为某个Component
    background: MenuBg {}
}
