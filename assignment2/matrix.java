class matrixProblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of column :");
        int col = sc.nextInt();
        System.out.println("Enter the number of rows :");
        int row = sc.nextInt();

        int arr[col][row];
        for(int i=0 ; i < col;i++){
            for(int j=0, j < row; j++){
                System.out.println("Enter values into the matrix : ");
                arr[i][j] = sc.nextInt();
            }

        }

    }
}