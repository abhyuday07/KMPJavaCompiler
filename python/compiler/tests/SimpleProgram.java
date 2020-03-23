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