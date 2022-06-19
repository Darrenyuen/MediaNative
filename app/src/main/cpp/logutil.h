//
// Created by darrenyuan on 2022/6/19.
//
#include <android/log.h>

#ifndef LOG_TAG
#define LOG_TAG "NATIVE_LOG"
#endif

#ifndef MEDIANATIVE_LOG_UTIL_H
#define MEDIANATIVE_LOG_UTIL_H

#define   LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define   LOGI(...)  __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define   LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)
#define   LOGE(...)  __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

#endif //MEDIANATIVE_LOG_UTIL_H
