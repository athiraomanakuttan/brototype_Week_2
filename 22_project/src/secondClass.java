import java.util.Scanner;
public class secondClass {
    public int[][] getArray(int rowSize, int colSize)
    {
        Scanner sr=new Scanner(System.in);
        int array[][]= new int[rowSize][colSize];
        System.out.println("Enter the array elements\n");
        for(int i=0; i<rowSize; i++)
        {
            for(int j=0; j<colSize; j++)
            {
                array[i][j]=sr.nextInt();
            }
        }

    return array;
    }
    public int[][] addArray(int[][] arr1, int[][] arr2, int rowSize,int colSize)
    {
         int c[][]= new int[rowSize][colSize];
         for(int i=0; i<rowSize; i++)
        {
            for(int j=0; j<colSize; j++)
            {
                c[i][j]=arr1[i][j]+arr2[i][j];
            }
        }

        return c;
    }
    public void displayArray(int[][] arr1,int rowSize,int colSize){
        System.out.println("Result array is \n");
        for(int i=0; i<rowSize; i++)
        {
            for(int j=0; j<colSize; j++)
            {
                System.out.println(arr1[i][j]+"\t");
            }
            System.out.println("\n");
        }
    }
}
