public class SimpleProgram {

    public static void funct1 (String s) {
	    // System.out.println ("Inside funct1");
    }
    public static int[] func2(int i){
    	int[] a = new int[24];
    	a[0] = 1;
    	return a;
    }
    public static void main (String args[]) {
		int a=2,b=a*a;
		// int c=3,d=4;

		double p=3.0;
		p = p*3.0 + 1.0;
		boolean x = a>b; //ISKA x = __temp_x  nhi aa rha in tac. Fix this before removing this test case.
		a = (a<<1) * (b+2*(a));
		funct1("Hello World!");
		int y = func2(a)[0];
		int[][] ac = new int[21][45];
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++) ac[i][j] = i*j + 1;
		}
		return;
		// a/=c;
		// c=a+b*c-d;
		// c = a*b/c + d^c + a>>b;
		// boolean x = a+b < c-d;
		// if(a-c+d > a*b+c*a && b>c || c+d>0){
		// 	a++;
		// }
		// a = 3;

		// int val = 0;
		// val = val++ + ++val;
		// int a1 = 11;
		// if(a1==val){
		// 	val = val + a1;
		// }
		// val = a1==val?val+val:a1+a1;
		// a++;
		// funct1();
		// for(int i=0; i<i; i++){
		// 	i=i;
		// }
		// int i;
		// while(i<i){
		// 	break;
		// 	i=i;
		// }
		// do{
		// 	i++;
		// }while(i<i);
		// switch(i){
		// 	case i: i++;
		// 	break;
		// 	default: i++;
		// }
		// int val = 0;
		// val++;
		// val = ++val + ++val;
		// System.out.println(!z);
		// val += 1;
		// System.out.println ("Inside main");
		// funct1();
		// System.out.println ("About to call funct2");
		// val = funct2(8);
		// System.out.println ("funct2 returned a value of " + val);
    }

    // public static int funct2 (int param) {
	// 	System.out.println ("Inside funct2 with param " + param);
	// 	return param * 2;
    // }
}
 
class ackermann{
    int printInt(int n);

    int Ack(int m,int n) {
        int i = -1, j = -1;
        if (m>=0 && n>=0) {
            if (m == 0) {
                i = n + 1;
            } else if (n == 0) {
                i = Ack(m - 1, 1);
            } else {
                j = Ack(m, n - 1);
                i = Ack(m - 1, j);
            }
        }
        return i;
    }
    public static void main(){
        int i = Ack(3,4);
        printInt(i);
    }
}

public class MyBinarySearch {
    int printInt(int n);

    public int binarySearch(int inputArr[], int len, int key) {
        int start = 0,mid;
        int end = len - 1;
        while (start <= end) {
            mid = (start + end) / 2;
            if (key == inputArr[mid]) {
                return mid;
            }
            if (key < inputArr[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }
    public static void main() {
        int arr[] = new int[8];
        arr[0] = 2;
        arr[1] = 4;
        arr[2] = 6;
        arr[3] = 8;
        arr[4] = 10;
        arr[5] = 12;
        arr[6] = 14;
        arr[7] = 16;
        printInt(binarySearch(arr, 8, 14));

        int arr1[] = new int[6];
        arr1[0] = 6;
        arr1[1] = 34;
        arr1[2] = 78;
        arr1[3] = 123;
        arr1[4] = 432;
        arr1[5] = 900;
        printInt(binarySearch(arr1, 6, 431));
    }
}

class bubblesort {
    int printInt(int n);

    int sort(int arr[], int len) {
        int n = len;
        int temp, i, j;
        for(i=0; i < n; i++){
            for(j=1; j < (n-i); j++){
                if(arr[j-1] > arr[j]){
                    temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return 0;
    }
	public static void main() {
                int arr[] = new int[7];
                arr[0] = 7;
                arr[1] = 6;
                arr[2] = 5;
                arr[3] = 4;
                arr[4] = 3;
                arr[5] = 2;
                arr[6] = 1;
                sort(arr, 7);
                //sort(arr, 'a');//sorting array elements using bubble sort
                for(int i=0; i < 7; i++){
                        printInt(arr[i]);
                }

        }
}
 
class fileio{
    int scanString();
    int fcreate(int f);
    int fopen(int f);
    int fwrite(int f, int m);
    int fclose(int f);
    int fread(int f, int len);

    public static void main(){
      int file_name = scanString();

      int fd_out = fcreate(file_name);

      int msg = scanString();

      fwrite(fd_out, msg);

      fclose(fd_out);

      int fd_in = fopen(file_name);

      fread(fd_in, 5);
}}