public class SimpleProgram {

    public static void funct1 () {
	    System.out.println ("Inside funct1");
    }

    public static void main (String args[]) {
		int val = 0;
		val++;
		val = ++val + ++val;
		System.out.println("X = " + val);

		System.out.println ("Inside main");
		funct1();
		System.out.println ("About to call funct2");
		val = funct2(8);
		System.out.println ("funct2 returned a value of " + val);
    }

    public static int funct2 (int param) {
		System.out.println ("Inside funct2 with param " + param);
		return param * 2;
    }
}
