#! ruby -Ku

x1 = 3
x2 = 3

def Ack(x1,x2)
  while true
    if x1==0 and x2!=0
      x2 += 1;break
    elsif x1!=0 and x2==0
      x1 -= 1;x2 = 1
    else
      x1 -= 1;x2 = Ack(x1+1,x2-1)
  end
  return x2
end

a = Ack(x1,x2)
print "Ack("+x1+","+x2+")="+a+"\n"