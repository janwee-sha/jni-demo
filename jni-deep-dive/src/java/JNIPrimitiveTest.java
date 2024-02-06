public class JNIPrimitiveTest {
    static {
        System.loadLibrary("dealing_primitive_with_c");
    }

    public native double avg(int n1, int n2);

    public static void main(String[] args) {
        int n1 = Integer.parseInt(args[0]),
                n2 = Integer.parseInt(args[1]);
        System.out.printf("The average is: %f\n",
                new JNIPrimitiveTest().avg(n1, n2));
    }
}