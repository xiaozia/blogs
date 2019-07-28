import QtQuick 2.5
import QtQuick.Controls 2.5

Menu {
    title: qsTr("添加")

    property var downBottomLvFunc: undefined
    property var downOneLvFunc: undefined

    CustomMenuSeparator {}

    Action {
        text: qsTr("直线");
        onTriggered: {
            console.log("---置于底层-----");
            if (downBottomLvFunc){
                downBottomLvFunc();
            }
        }
    }

    Action {
        text: qsTr("曲线");
        onTriggered: {
            console.log("---down one level-----");
            if (downOneLvFunc) {
                downOneLvFunc();
            }
        }
    }

    Action {
        text: qsTr("圆形");
        onTriggered: {
            console.log("---down one level-----");
            if (downOneLvFunc) {
                downOneLvFunc();
            }
        }
    }

    delegate: MenuDelegate {}
    background: MenuBg {}
}
