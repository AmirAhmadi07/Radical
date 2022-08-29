import numpy as np
n=input('N:')
list1=[]
cnt = 0
print ( 'Please enter coefficient one by one')
for x in range(int(n)+1):
     list1.append(int(input('coeff{'+str(x)+'}:')))   
eqe=''
a=int(n)
    
for i in range(11):
 eq=np.polyval(list1,i)
 if eq==0:
         if i==0:
             eqe=eqe+'*x'
         else:
             eqe=eqe+'*(x-'+str(i)+')'
     
if int(list1 [0]) > 1 :               
    print (str(list1[0]) + str(eqe))
else :
    eqe2 = eqe.replace ('*','',1)
    print (eqe2)
