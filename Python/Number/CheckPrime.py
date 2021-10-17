##########################################################################
## 
##
##  Accept  numbers from user and Check Number is Prime or not.
##
##
###########################################################################


def CheckPrime(iNum):
    flag=True
    for i in range(2,int(iNum/2)+1):
        if(iNum%i==0):
            flag=False
            break
        else:
            flag=True
    return flag





if __name__=="__main__":

       iRet=False;
       iNum=int(input("Enter the Number\n"))
       iRet=CheckPrime(iNum)
       if(iRet==True):
            print("{} is a prime number".format(iNum))
       
       else:
         print("{} is not a prime number".format(iNum))
       
