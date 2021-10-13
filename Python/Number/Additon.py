##########################################################################
## 
##
##   Accept 2  numbers from user and perform the addition.
##
##
###########################################################################




def Add(iNo1,iNo2): 
     return iNo1+iNo2


if __name__=="__main__":
      iNo1=int(input())
      iNo2=int(input())
      iRet=Add(iNo1,iNo2)
      print("Addition is:",iRet)
