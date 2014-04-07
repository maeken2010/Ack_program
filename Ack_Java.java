class Ack_Java{
  public static void main(String[] args) {
    int x1 = 4;
    int x2 = 1;

    int a = Ack(x1,x2);
    System.out.println("Ack("+x1+","+x2+")="+a);
  }

  static int Ack(int x1,int x2){
    while(true){
      if(x1==0 && x2!=0){
        x2 += 1;
        break;
      }
      else if(x1!=0 && x2==0){
        x1 -= 1;
        x2 = 1;
      }
      else{
        x1 -= 1;
        x2 = Ack(x1+1,x2-1);
      }
    }
    return(x2);
  }
}