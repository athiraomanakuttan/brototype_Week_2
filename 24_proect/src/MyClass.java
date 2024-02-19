import java.util.Scanner;

public class MyClass extends Area{
    static Scanner sr=new Scanner(System.in);
    public static void main(String[] args) throws Exception {
        
        System.out.println("Enter your choice\n1. Circle\n2. Square\n3. Rectangle\n4. Triangle");
        int menu=sr.nextInt();
        switch (menu) {
            case 1:circle();
                
                break;
        
            default:
                break;
        }
    }
    private static void circle()
    {
        System.out.println("Enter the radious of the circle\n");
        double r=sr.nextDouble();
        double area = Math.PI * r * r;
        System.out.println("Area of the circle is "+area);;

    } 
    private static void square()
    {
        
    }
}