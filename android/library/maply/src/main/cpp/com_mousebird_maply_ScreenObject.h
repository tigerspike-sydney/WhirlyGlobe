/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_mousebird_maply_ScreenObject */

#ifndef _Included_com_mousebird_maply_ScreenObject
#define _Included_com_mousebird_maply_ScreenObject
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_mousebird_maply_ScreenObject
 * Method:    addPoly
 * Signature: (Lcom/mousebird/maply/SimplePoly;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ScreenObject_addPoly
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_ScreenObject
 * Method:    addString
 * Signature: (Lcom/mousebird/maply/StringWrapper;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ScreenObject_addString
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_ScreenObject
 * Method:    addTextureNative
 * Signature: (JFFFFFF)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ScreenObject_addTextureNative
  (JNIEnv *, jobject, jlong, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_mousebird_maply_ScreenObject
 * Method:    addScreenObject
 * Signature: (Lcom/mousebird/maply/ScreenObject;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ScreenObject_addScreenObject
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_ScreenObject
 * Method:    getSizeNative
 * Signature: (Lcom/mousebird/maply/Point2d;Lcom/mousebird/maply/Point2d;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ScreenObject_getSizeNative
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_mousebird_maply_ScreenObject
 * Method:    transform
 * Signature: (Lcom/mousebird/maply/Matrix3d;)V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ScreenObject_transform
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_mousebird_maply_ScreenObject
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ScreenObject_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_mousebird_maply_ScreenObject
 * Method:    initialise
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ScreenObject_initialise
  (JNIEnv *, jobject);

/*
 * Class:     com_mousebird_maply_ScreenObject
 * Method:    dispose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_mousebird_maply_ScreenObject_dispose
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
