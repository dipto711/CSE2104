class FinalT6A {
private final int x;
private final int y;
public FinalT6A(int x, int y) {
this.x = x;
this.y = y;
}
public void methodA() {
System.out.println("x = " + x + ", y = " + y);
}
}
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
