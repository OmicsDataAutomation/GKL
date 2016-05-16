/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intel_gkl_deflater_IntelDeflater */

#ifndef _Included_com_intel_gkl_deflater_IntelDeflater
#define _Included_com_intel_gkl_deflater_IntelDeflater
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_intel_gkl_deflater_IntelDeflater
 * Method:    initLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intel_gkl_deflater_IntelDeflater_initLibrary
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_gkl_deflater_IntelDeflater
 * Method:    resetLibrary
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intel_gkl_deflater_IntelDeflater_resetLibrary
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_gkl_deflater_IntelDeflater
 * Method:    setInput
 * Signature: ([BI)V
 */
JNIEXPORT void JNICALL Java_com_intel_gkl_deflater_IntelDeflater_setInput
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_intel_gkl_deflater_IntelDeflater
 * Method:    setEndOfStream
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intel_gkl_deflater_IntelDeflater_setEndOfStream
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_gkl_deflater_IntelDeflater
 * Method:    deflate
 * Signature: ([BI)I
 */
JNIEXPORT jint JNICALL Java_com_intel_gkl_deflater_IntelDeflater_deflate
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     com_intel_gkl_deflater_IntelDeflater
 * Method:    deflateFinished
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_gkl_deflater_IntelDeflater_deflateFinished
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif