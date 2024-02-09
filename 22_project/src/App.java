import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sr = new Scanner(System.in);
        int rowSize,colSize;
        System.out.println("Enter the row  size");
        rowSize=sr.nextInt();
        System.out.println("Enter the colunm size");
        colSize=sr.nextInt();
        int arr1[][] = new int[rowSize][colSize];
        int arr2[][] = new int[rowSize][colSize];
        int arr3[][] = new int[rowSize][colSize];
        secondClass obj1=new secondClass();
        arr1=obj1.getArray(rowSize, colSize);
        arr2=obj1.getArray(rowSize, colSize);
        arr3=obj1.addArray(arr1, arr2, rowSize, colSize);
        obj1.displayArray(arr3, rowSize, colSize);

    }
    
}
