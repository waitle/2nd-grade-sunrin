public class Sangsok03 {
       public static void main( String[] args ) {
           java.util.Scanner sc = new java.util.Scanner(System.in);

           System.out.print("X��ǥ �Է�: ");
           int x = sc.nextInt( );
           System.out.print(��Y��ǥ �Է�: ");
           int y = sc.nextInt( );
           System.out.print(��Z��ǥ �Է�: ");
           int z = sc.nextInt( );
           Point3D p = new Point3D(x, y, z);
           System.out.println( p.getLocation( ) );

           sc.close( );
       }
