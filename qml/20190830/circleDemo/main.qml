import QtQuick 2.0
import CircleHead 1.0

Item {
    width: 400; height: 400

    CircleHead {                 // 接着我们就可以使用"PieChart"这个类型
        id: aPieChart
//        x: 120
//        y: 120
        anchors.centerIn: parent
        width: 300;
        height: 300
        source: ":/images/cat.jpg"
    }
}
