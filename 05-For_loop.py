# factoria nuumber
# num=int(input("Enter the number:"))
# fact=1;
# for i in range(1,num+1):
#     fact=fact*i;
#     print(fact)
    
    
# prime number
n=int(input("Enter the Number"));
if n<2:
    print("Not Prime Number");
    
   
else:
    for i in range(2,n):  
       if n%i==0:
           print("Not Prime Number")
           break;   
    else:
        print("Prime Number")
    