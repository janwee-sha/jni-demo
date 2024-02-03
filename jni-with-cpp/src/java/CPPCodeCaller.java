public class CPPCodeCaller {
    static {
        System.loadLibrary("hello_from_cpp");
    }

    public native void hello();

    public static void main(String[] args) {
        new CPPCodeCaller().hello();
    }
}