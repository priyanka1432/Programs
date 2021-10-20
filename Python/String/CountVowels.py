#######################################################################################################################
#
# Accept the String from user and count number of vowels.
#
#######################################################################################################################




def Count(str):
    iCount=0
    for i in str:
        if((i=='A')or(i=='E')or(i=='I')or(i=='O')or(i=='U')or(i=='a')or(i=='e')or(i=='i')or(i=='o')or(i=='u')):
            iCount=iCount+1

    return iCount


if __name__=="__main__":
    iRet=0
    str=input("Enter the String\n")
    iRet=Count(str)
    print("Number of Vowels are:",iRet)