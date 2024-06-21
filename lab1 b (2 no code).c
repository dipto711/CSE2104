public class T6ATester {
public static void main(String[] args) {
FinalT6A q1 = new FinalT6A(2, 1);
q1.methodA();
FinalT6A q2 = new FinalT6A(3, 5);
q2.methodA();
q1 = new FinalT6A(5, 7);
q1.methodA();
q2.methodA();
}
}
class FinalT6A {
public static int temp = 4;
private int sum;
private int y;
public FinalT6A(int x, int p) {
temp += 1;
y = temp - p;
sum = temp + x;

System.out.println(x + " " + y + " " + sum);
}
public void methodA() {
int x = 0;
int yLocal = 0;
yLocal = yLocal + this.y;
x = this.y + 2 + temp;
sum = x + yLocal + methodB(temp, yLocal);
System.out.println(x + " " + yLocal + " " + sum);
}
public int methodB(int tempLocal, int n) {
int x = 0;
this.y = this.y + (++tempLocal);
x = x + 3 + n;
this.sum = this.sum + x + this.y;
System.out.println(x + " " + this.y + " " + this.sum);
return this.sum;
}
}
