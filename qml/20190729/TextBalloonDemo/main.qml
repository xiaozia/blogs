import QtQuick 2.9
import QtQuick.Window 2.2
import TextBalloonPlugin 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    //! [0]
    ListModel {
        id: balloonModel
        ListElement {
            balloonWidth: 200
        }
        ListElement {
            balloonWidth: 120
        }
    }

    ListView {
        anchors.bottom: controls.top
        anchors.bottomMargin: 2
        anchors.top: parent.top
        id: balloonView
        delegate: TextBalloon {
            anchors.right: index % 2 == 0 ? undefined : parent.right
            height: 60
            rightAligned: index % 2 == 0 ? false : true
            width: balloonWidth
        }
        model: balloonModel
        spacing: 5
        width: parent.width
    }

    Rectangle {
        id: controls

        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.margins: 1
        anchors.right: parent.right
        border.width: 2
        color: "white"
        height: parent.height * 0.15

        Text {
            anchors.centerIn: parent
            text: "Add another balloon"
        }

        MouseArea {
            anchors.fill: parent
            hoverEnabled: true
            onClicked: {
                balloonModel.append({"balloonWidth": Math.floor(Math.random() * 200 + 100)})
                balloonView.positionViewAtIndex(balloonView.count -1, ListView.End)
            }
            onEntered: {
                parent.color = "#8ac953"
            }
            onExited: {
                parent.color = "white"
            }
        }
    }
}
