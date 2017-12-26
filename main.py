import sys

from PyQt5.QtWidgets import *
from PyQt5.QtGui import QPixmap, QBrush, QImage, QPalette, QPainter, QPen, QColor
from PyQt5.QtCore import QRect, Qt, QRectF, QBasicTimer
import random
import time
from threading import Thread, Timer

TIMEHOLD = 0.1


FISHES = ["pickachu", "nemo"]

class Fish(QRect):
    def __init__(self):
        super().__init__()
        self.type_ = random.choice(FISHES) 

        self.x = random.randint(0, 945)
        self.y = random.randint(0, 600)
        self.speed = 20
        self.hunger = 100

        self.img = QImage('images/' + self.type_ + '.png')

        self.life = Thread(target = self.live)
        self.life.start()

    def __del__(self):
        print ("Fish died")
        self.life.kill()

    def live(self):
        while(self.hunger > 0):
            self.hunger -= 1
            self.rand_move()
            time.sleep(TIMEHOLD)
        self.img = QImage('images/' + self.type_ + 'RIP.png')
        while(self.y > self.speed):
            self.y -= self.speed
            time.sleep(TIMEHOLD)
            self.moveTo(self.x, self.y)
            

    def feed(self):
        self.hunger = 100

    def rand_move(self):
        x = random.randrange(3) - 1
        y = random.randrange(3) - 1
        self.x += x * self.speed
        self.y += y * self.speed

        if self.x > 945:
            self.x -= 2 * abs(x) * self.speed
        if self.y > 550:
            self.y -= 2 * abs(y) * self.speed
        if self.x < 0:
            self.x += 2 * abs(x) * self.speed
        if self.y < 0:
            self.y += 2 * abs(y) * self.speed

        self.moveTo(self.x, self.y)

        

class MainWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setWindowTitle('Aquarium')

        pal = self.palette()
        pal.setBrush(QPalette.Normal, QPalette.Window, QBrush(QPixmap("images/back.jpg")))
        self.setPalette(pal)

        self.resize(1265, 745)

        self.myFishes = []

        btn1 = QPushButton("Add Fish", self)
        btn1.move(1100, 25)

        btn2 = QPushButton("Food fishes", self)
        btn2.move(1100, 50)

        btn1.clicked.connect(self.addFish)
        btn2.clicked.connect(self.food)

        self.timer = QBasicTimer()
        self.timer.start(TIMEHOLD, self)

        self.show()

    def timerEvent(self, e):
        self.update()
        
    def addFish(self):
        sender = self.sender()
        self.myFishes.append(Fish())
        self.update()

    def food(self):
        for fish in self.myFishes:
            fish.feed()

    def paintEvent(self, e):
        qp = QPainter()
        qp.begin(self)
        self.drawRectangles(qp)
        qp.end()
        
    def drawRectangles(self, qp):
        for fish in self.myFishes:
            qp.drawImage(fish.x, fish.y, fish.img)
             

    def __del__(self):
        for fish in self.myFishes:
            del fish

            
            
if __name__ == '__main__':
    app = QApplication(sys.argv)
    main = MainWindow()
    sys.exit(app.exec_())
