import QtQuick 2.9
import QtQuick.Window 2.2

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    property var myClassInterface: null

    Rectangle {
        anchors.centerIn: parent
        width: 200
        height: 200
        color: "red"
        Text {
            anchors.centerIn: parent
            color: "white"
            text: (myClassInterface)? myClassInterface.myProperty: "" //-- На момент создания QML myClassInterface может быть ещё не установлен
        }
    }

}
