#######################################################################################################################
#
# accept number of rows and number of columns  from user and display below pattern. 
#
#######################################################################################################################


"""Input : iRow = 4 iCol = 4 
Output : A B C D 
         A B C D 
         A B C D 
         A B C D
         """

def Pattern1(iRows,iCol):
    
    for i in range(1,iRows+1):
        ch=65
        for j in range(1,iCol+1):
            print(chr(ch),end=" ")
            ch=ch+1;
        print(" ")



if __name__=="__main__":
    iRows=int(input())
    iCol=int(input())

    Pattern1(iRows,iCol)

