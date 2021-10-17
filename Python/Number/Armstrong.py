##########################################################################
## 
##
##  Accept  numbers from user and Check Number is Armstrong or not.
##
##
###########################################################################

class ArmStrong:
    def __init__(self,iNum):
        self.iNum=iNum

    def DigitCount(self):
        iCnt=0
        iNo=iNum
        while(iNo>0):
            iCnt=iCnt+1
            iNo=int(iNo/10)
        
        return iCnt

    def SumDigit(self,iCount):
        iSum=0
        iPower=1
        iDigit=0
        iNo=self.iNum
        while(iNo>0):
            iDigit=iNo%10
            iPower=1
            for i in range(1,iCount+1):
                iPower=iPower*iDigit
            iSum=iSum+iPower
            iNo=int(iNo/10)
        
        return iSum

    def CheckArmstrong(self,iNumber):
        if(iNum==iNumber):
            return True
        else:
            return False






if __name__=="__main__":
    iCount=0
    iSum=0
    bRet=False
    iNum=int(input("Enter the number\n"))
    aobj=ArmStrong(iNum)
    iCount=aobj.DigitCount()
    iSum=aobj.SumDigit(iCount)
    bRet=aobj.CheckArmstrong(iSum)

    if(bRet==True):
        print("It is Armstrong number")
    else:
        print("It is not Armstrong")
