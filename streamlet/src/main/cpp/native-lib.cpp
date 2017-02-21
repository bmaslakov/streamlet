#include <android/log.h>
#include <jni.h>
#include <string>

extern "C" {
JNIEXPORT void JNICALL
        Java_io_uuddlrlrba_streamlet_Hello_sayHello(JNIEnv *env, jclass type, jint value);
JNIEXPORT jint JNICALL
        Java_io_uuddlrlrba_streamlet_Hello_getSecret(JNIEnv *env, jclass type);
}

JNIEXPORT void JNICALL
Java_io_uuddlrlrba_streamlet_Hello_sayHello(JNIEnv *env, jclass type, jint value) {
    __android_log_print(ANDROID_LOG_INFO, "Hello", "hello %d", value);
}

JNIEXPORT jint JNICALL
Java_io_uuddlrlrba_streamlet_Hello_getSecret(JNIEnv *env, jclass type) {
    return 42;
}