#include <jni.h>
#include <string>
#include <android/log.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_medianative_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from CPP";
//    int arr[5] = {1, 2, 3, 4, 5};
//    for (int i = 0; i < 6; ++i) {
//        __android_log_print(ANDROID_LOG_DEBUG, "TAG6666666666",
//                            "%s", reinterpret_cast<const char *>(arr[i]));
//    }
    int res = 5 / 0;
    std::basic_string<char, std::char_traits<char>, std::allocator<char>> resStr = std::to_string(res);
    __android_log_print(ANDROID_LOG_DEBUG, "TAG6666666666", "%s", resStr.c_str());
    hello.append(resStr);
    return env->NewStringUTF(hello.c_str());
}