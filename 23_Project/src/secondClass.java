import java.util.Scanner;
public class secondClass {
public int[][] getArray(int rowSize,int colSize)
{
    Scanner sr=new Scanner(System.in);
    int arr[][]=new int[rowSize][colSize];
    System.out.println("Enter the array elements\n");
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            arr[i][j]=sr.nextInt();
        }
    }
    return arr;
}
public void displayArray(int[][] arr, int rowSize,int colSize)
{
    System.out.println("Array elements are \n");
    for(int i=0; i<rowSize; i++)
    {
        for(int j=0; j<colSize; j++)
        {
            System.out.println(arr[i][j]+"\t");
        }
        System.out.println("\n");
    }
}
}
