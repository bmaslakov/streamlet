package io.uuddlrlrba.streamlet;

public class Hello {
    static {
        System.loadLibrary("native-lib");
    }

    public static native void sayHello(int value);
    public static native int getSecret();
}
