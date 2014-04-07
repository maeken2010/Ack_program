#coding:utf-8
import sys

# 再帰処理の上限値
limit = 100000
sys.setrecursionlimit(limit)

x1 = 4
x2 = 1

def Ack(x1,x2):
  while 1:
    if x1==0 and x2!=0:
      x2 += 1
      break
    
    elif x1!=0 and x2==0:
      x1 -= 1
      x2 = 1
    
    else:
      x1 -= 1
      x2 = Ack(x1+1,x2-1)
    
  return x2

a = Ack(x1,x2)
print  u"Ack(%d,%d)=%d"%(x1,x2,a)

