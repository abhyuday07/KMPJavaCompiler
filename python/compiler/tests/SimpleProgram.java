public class SimpleProgram {

    public static void funct1 () {
	    // System.out.println ("Inside funct1");
    }

    public static void main (String args[]) {
		long a=1,b=2;
		long c=3,d=4;
		a/=c;
		c=a+b*c-d;
		c = a*b/c + d^c + a>>b;
		boolean x = a+b < c-d;
		if(a-c+d > a*b+c*a && b>c || c+d>0){
			a++;
		}

		int val = 0;
		val = val++ + ++val;
		int a1 = 11;
		if(a1==val){
			val = val + a1;
		}
		val = a1==val?val+val:a1+a1;
		a++;
		funct1();
		for(int i=0; i<i; i++){
			i=i;
		}
		int i;
		while(i<i){
			break;
			i=i;
		}
		do{
			i++;
		}while(i<i);
		switch(i){
			case i: i++;
			break;
			default: i++;
		}
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
