public class CPlusPlusCodeCaller {
    static {
        System.loadLibrary("hello_from_c");
    }

    public native void hello();

    public static void main(String[] args) {
        new CPlusPlusCodeCaller().hello();
    }
}