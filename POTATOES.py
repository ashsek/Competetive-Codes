def prime(n):
  for i in range(2,int(n**0.5) +1):
    if(n%i==0):
      return True
  return False

for i in range(int(input())):
  a,b=map(int,input().split())
  m=a+b+1
  while 1<2:
    if not prime(m):
      break 
    m += 1
  print(m-a-b) 