class A:
    def __init__(self,name,id):
        self.name = name
        self.id = id
    def getId(self):
        return self.id
    def setId(self,id):
        self.id = id
    def funA(self):
        print("A function")
    @staticmethod
    def staticMethod(num):
        num = 9


class B(A):
    def __init__(self, name, id, roll):
        super().__init__(name, id)
        self.roll = roll
    def funA(self):
        super().funA()
        print(" B function")
    @staticmethod
    def staticMethod2(num):
        num += 1
    

a = A("Mitesh",1)
print(a.getId())
a.setId(2)
print(a.getId())
b = B("Goswami",1,9)
b.funA()
num=2
A.staticMethod(num)
#B.staticMethod2(num)
print(f"num: {num}")
