import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner sr=new Scanner(System.in);
        secondClass obj=new secondClass();
        int rowSize,colSize;
        System.out.println("Enter the row and colunm size\n");
        rowSize=sr.nextInt();
        colSize=sr.nextInt();
        int arr[][]=new int[rowSize][colSize];
        arr=obj.getArray(rowSize, colSize);
        obj.displayArray(arr, rowSize, colSize);
    }
}
