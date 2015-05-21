/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_baidu_tera_client_TeraClientImpl */

#ifndef _Included_com_baidu_tera_client_TeraClientImpl
#define _Included_com_baidu_tera_client_TeraClientImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeNewClient
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeNewClient
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeDeleteClient
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeDeleteClient
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeCreateTable
 * Signature: (JLjava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeCreateTable
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeDeleteTable
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeDeleteTable
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeEnableTable
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeEnableTable
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeDisableTable
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeDisableTable
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeIsTableExist
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeIsTableExist
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeIsTableEnabled
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeIsTableEnabled
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeIsTableEmpty
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeIsTableEmpty
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeOpenTable
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeOpenTable
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeGetTableDescriptor
 * Signature: (JLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeGetTableDescriptor
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_baidu_tera_client_TeraClientImpl
 * Method:    nativeListTables
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_baidu_tera_client_TeraClientImpl_nativeListTables
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
