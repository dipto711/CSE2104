public class FinalT6A{
private int temp;
private int sum;
private int y;
public FinalT6A(int x, int p){
temp = 4 + 1;
y = temp - p;
sum = temp + x;
System.out.println(x + " " + y+ " " + sum);
}
public void methodA(int x){
int localX = 0, localY = 0;
localY = localY + this.y;
localX = this.y + 2 + this.temp;
sum = localX + localY + methodB(this.temp, this.y);
System.out.println(localX + " " + localY+ " " + sum);
}
public int methodB(int temp, int n){
int localX = 0;
int localY = this.y;
localY = localY + (++temp);
localX = localX + 3 + n;
sum = sum + localX + localY;
System.out.println(localX + " " + localY+ " " + sum);
return sum;
}
public static void main(String[] args) {

FinalT6A obj = new FinalT6A(5, 2);
obj.methodA(5);
}
}
