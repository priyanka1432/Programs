##########################################################################
## 
##
##   Accept  numbers from user and perform the addition till that number.
##
##
###########################################################################


def Addition(iNo):
    Sum=0
    for i in range(iNo):
        Sum=Sum+i
    return Sum




if __name__=="__main__":
    iNo1=int(input("Enter the Number\n"))
    iRet=Addition(iNo1)
    print("Addition is:",iRet)