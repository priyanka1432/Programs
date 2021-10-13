##########################################################################
## 
##
##   Accept  Radius From user and Find the Area of Circle.
##
##
###########################################################################



class Circle:
    PI=3.14
    def __init__(self,Radius):
        self.Radius=Radius
    def Area(self):
        Area=0.0
        Area=Circle.PI*Radius*Radius
        return Area





if __name__=="__main__":
    Radius=float(input("Enter the Radius\n"))
    c1=Circle(Radius)
    iRet=c1.Area()
    print("Area of Circle is:",iRet)

