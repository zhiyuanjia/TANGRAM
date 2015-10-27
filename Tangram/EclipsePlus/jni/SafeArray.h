/********************************************************************************
*					Tangram Library - version 8.0								*
*********************************************************************************
* Copyright (C) 2002-2015 by Tangram Team.   All Rights Reserved.				*
*
* THIS SOURCE FILE IS THE PROPERTY OF TANGRAM TEAM AND IS NOT TO
* BE RE-DISTRIBUTED BY ANY MEANS WHATSOEVER WITHOUT THE EXPRESSED
* WRITTEN CONSENT OF TANGRAM TEAM.
*
* THIS SOURCE CODE CAN ONLY BE USED UNDER THE TERMS AND CONDITIONS
* OUTLINED IN THE GPL LICENSE AGREEMENT.TANGRAM TEAM
* GRANTS TO YOU (ONE SOFTWARE DEVELOPER) THE LIMITED RIGHT TO USE
* THIS SOFTWARE ON A SINGLE COMPUTER.
*
* CONTACT INFORMATION:
* mailto:sunhui@tangramfx.com
* http://www.tangramFX.com
*
*
********************************************************************************/
#include <jni.h>
/* Header for class com_tangram_SafeArray */

#ifndef _Included_com_tangram_SafeArray
#define _Included_com_tangram_SafeArray
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: buildVersion */
/* Inaccessible static: buildDate */
/* Inaccessible static: DEBUG */
/*
 * Class:     com_tangram_SafeArray
 * Method:    init
 * Signature: (I[I[I)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_init
  (JNIEnv *, jobject, jint, jintArray, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    clone
 * Signature: ()Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_tangram_SafeArray_clone
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_destroy
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getvt
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getvt
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    reinit
 * Signature: (Lcom/tangram/SafeArray;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_reinit(JNIEnv *, jobject, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    reinterpretType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_reinterpretType(JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getLBound
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getLBound__(JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getLBound
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getLBound__I(JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getUBound
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getUBound__(JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getUBound
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getUBound__I(JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getNumDim
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getNumDim(JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getFeatures
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getFeatures(JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getElemSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getElemSize(JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromCharArray
 * Signature: ([C)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromCharArray(JNIEnv *, jobject, jcharArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromIntArray
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromIntArray(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromLongArray
 * Signature: ([L)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromLongArray(JNIEnv *, jobject, jlongArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromShortArray
 * Signature: ([S)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromShortArray(JNIEnv *, jobject, jshortArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromDoubleArray
 * Signature: ([D)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromDoubleArray
  (JNIEnv *, jobject, jdoubleArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromStringArray
 * Signature: ([Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromStringArray
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromByteArray
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromByteArray
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromFloatArray
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromFloatArray
  (JNIEnv *, jobject, jfloatArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromBooleanArray
 * Signature: ([Z)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromBooleanArray
  (JNIEnv *, jobject, jbooleanArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    fromVariantArray
 * Signature: ([Lcom/tangram/Variant;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_fromVariantArray
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toCharArray
 * Signature: ()[C
 */
JNIEXPORT jcharArray JNICALL Java_com_tangram_SafeArray_toCharArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toIntArray
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_com_tangram_SafeArray_toIntArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toLongArray
 * Signature: ()[L
 */
JNIEXPORT jlongArray JNICALL Java_com_tangram_SafeArray_toLongArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toShortArray
 * Signature: ()[S
 */
JNIEXPORT jshortArray JNICALL Java_com_tangram_SafeArray_toShortArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toDoubleArray
 * Signature: ()[D
 */
JNIEXPORT jdoubleArray JNICALL Java_com_tangram_SafeArray_toDoubleArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toStringArray
 * Signature: ()[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_tangram_SafeArray_toStringArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toByteArray
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_tangram_SafeArray_toByteArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toFloatArray
 * Signature: ()[F
 */
JNIEXPORT jfloatArray JNICALL Java_com_tangram_SafeArray_toFloatArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toBooleanArray
 * Signature: ()[Z
 */
JNIEXPORT jbooleanArray JNICALL Java_com_tangram_SafeArray_toBooleanArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    toVariantArray
 * Signature: ()[Lcom/tangram/Variant;
 */
JNIEXPORT jobjectArray JNICALL Java_com_tangram_SafeArray_toVariantArray
  (JNIEnv *, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getChar
 * Signature: (I)C
 */
JNIEXPORT jchar JNICALL Java_com_tangram_SafeArray_getChar__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getChar
 * Signature: (II)C
 */
JNIEXPORT jchar JNICALL Java_com_tangram_SafeArray_getChar__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setChar
 * Signature: (IC)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setChar__IC
  (JNIEnv *, jobject, jint, jchar);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setChar
 * Signature: (IIC)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setChar__IIC
  (JNIEnv *, jobject, jint, jint, jchar);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getChars
 * Signature: (II[CI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getChars
  (JNIEnv *, jobject, jint, jint, jcharArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setChars
 * Signature: (II[CI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setChars
  (JNIEnv *, jobject, jint, jint, jcharArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getInt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getInt__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getInt
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getInt__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setInt
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setInt__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setInt
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setInt__III
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getInts
 * Signature: (II[II)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getInts
  (JNIEnv *, jobject, jint, jint, jintArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setInts
 * Signature: (II[II)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setInts
  (JNIEnv *, jobject, jint, jint, jintArray, jint);

/*
 * Class:     SafeArray
 * Method:    getLong
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_com_tangram_SafeArray_getLong__I
  (JNIEnv *env, jobject _this, jint idx);

/*
 * Class:     SafeArray
 * Method:    getLong
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_com_tangram_SafeArray_getLong__II
  (JNIEnv *env, jobject _this, jint i, jint j);

/*
 * Class:     SafeArray
 * Method:    setLong
 * Signature: (IJ)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setLong__IJ
  (JNIEnv *env, jobject _this, jint idx, jlong c);

/*
 * Class:     SafeArray
 * Method:    setLong
 * Signature: (IIJ)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setLong__IIJ
  (JNIEnv *env, jobject _this, jint i, jint j, jlong c);

/*
 * Class:     SafeArray
 * Method:    getLongs
 * Signature: (II[JI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getLongs
  (JNIEnv *env, jobject _this, jint idx, jint nelem, jlongArray ja, jint ja_start);

/*
 * Class:     SafeArray
 * Method:    setLongs
 * Signature: (II[JI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setLongs
  (JNIEnv *env, jobject _this, jint idx, jint nelem, jlongArray ja, jint ja_start);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getShort
 * Signature: (I)S
 */
JNIEXPORT jshort JNICALL Java_com_tangram_SafeArray_getShort__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getShort
 * Signature: (II)S
 */
JNIEXPORT jshort JNICALL Java_com_tangram_SafeArray_getShort__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setShort
 * Signature: (IS)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setShort__IS
  (JNIEnv *, jobject, jint, jshort);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setShort
 * Signature: (IIS)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setShort__IIS
  (JNIEnv *, jobject, jint, jint, jshort);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getShorts
 * Signature: (II[SI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getShorts
  (JNIEnv *, jobject, jint, jint, jshortArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setShorts
 * Signature: (II[SI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setShorts
  (JNIEnv *, jobject, jint, jint, jshortArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getDouble
 * Signature: (I)D
 */
JNIEXPORT jdouble JNICALL Java_com_tangram_SafeArray_getDouble__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getDouble
 * Signature: (II)D
 */
JNIEXPORT jdouble JNICALL Java_com_tangram_SafeArray_getDouble__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setDouble
 * Signature: (ID)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setDouble__ID
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setDouble
 * Signature: (IID)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setDouble__IID
  (JNIEnv *, jobject, jint, jint, jdouble);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getDoubles
 * Signature: (II[DI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getDoubles
  (JNIEnv *, jobject, jint, jint, jdoubleArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setDoubles
 * Signature: (II[DI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setDoubles(JNIEnv *, jobject, jint, jint, jdoubleArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getString
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tangram_SafeArray_getString__I(JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getString
 * Signature: (II)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tangram_SafeArray_getString__II(JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setString
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setString__ILjava_lang_String_2(JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setString
 * Signature: (IILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setString__IILjava_lang_String_2(JNIEnv *, jobject, jint, jint, jstring);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getStrings
 * Signature: (II[Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getStrings(JNIEnv *, jobject, jint, jint, jobjectArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setStrings
 * Signature: (II[Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setStrings(JNIEnv *, jobject, jint, jint, jobjectArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getByte
 * Signature: (I)B
 */
JNIEXPORT jbyte JNICALL Java_com_tangram_SafeArray_getByte__I(JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getByte
 * Signature: (II)B
 */
JNIEXPORT jbyte JNICALL Java_com_tangram_SafeArray_getByte__II(JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setByte
 * Signature: (IB)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setByte__IB(JNIEnv *, jobject, jint, jbyte);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setByte
 * Signature: (IIB)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setByte__IIB(JNIEnv *, jobject, jint, jint, jbyte);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getBytes
 * Signature: (II[BI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getBytes(JNIEnv *, jobject, jint, jint, jbyteArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setBytes
 * Signature: (II[BI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setBytes(JNIEnv *, jobject, jint, jint, jbyteArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getFloat
 * Signature: (I)F
 */
JNIEXPORT jfloat JNICALL Java_com_tangram_SafeArray_getFloat__I(JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getFloat
 * Signature: (II)F
 */
JNIEXPORT jfloat JNICALL Java_com_tangram_SafeArray_getFloat__II(JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setFloat
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setFloat__IF(JNIEnv *, jobject, jint, jfloat);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setFloat
 * Signature: (IIF)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setFloat__IIF(JNIEnv *, jobject, jint, jint, jfloat);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getFloats
 * Signature: (II[FI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getFloats(JNIEnv *, jobject, jint, jint, jfloatArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setFloats
 * Signature: (II[FI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setFloats(JNIEnv *, jobject, jint, jint, jfloatArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getBoolean
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tangram_SafeArray_getBoolean__I(JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getBoolean
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tangram_SafeArray_getBoolean__II(JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setBoolean
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setBoolean__IZ(JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setBoolean
 * Signature: (IIZ)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setBoolean__IIZ(JNIEnv *, jobject, jint, jint, jboolean);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getBooleans
 * Signature: (II[ZI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getBooleans(JNIEnv *, jobject, jint, jint, jbooleanArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setBooleans
 * Signature: (II[ZI)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setBooleans(JNIEnv *, jobject, jint, jint, jbooleanArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getVariant
 * Signature: (I)Lcom/tangram/Variant;
 */
JNIEXPORT jobject JNICALL Java_com_tangram_SafeArray_getVariant__I(JNIEnv *, jobject, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getVariant
 * Signature: (II)Lcom/tangram/Variant;
 */
JNIEXPORT jobject JNICALL Java_com_tangram_SafeArray_getVariant__II(JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setVariant
 * Signature: (ILcom/tangram/Variant;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setVariant__ILcom_tangram_Variant_2(JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setVariant
 * Signature: (IILcom/tangram/Variant;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setVariant__IILcom_tangram_Variant_2(JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getVariants
 * Signature: (II[Lcom/tangram/Variant;I)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_getVariants(JNIEnv *, jobject, jint, jint, jobjectArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setVariants
 * Signature: (II[Lcom/tangram/Variant;I)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setVariants(JNIEnv *, jobject, jint, jint, jobjectArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getVariant
 * Signature: ([I)Lcom/tangram/Variant;
 */
JNIEXPORT jobject JNICALL Java_com_tangram_SafeArray_getVariant___3I(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setVariant
 * Signature: ([ILcom/tangram/Variant;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setVariant___3ILcom_tangram_Variant_2(JNIEnv *, jobject, jintArray, jobject);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getChar
 * Signature: ([I)C
 */
JNIEXPORT jchar JNICALL Java_com_tangram_SafeArray_getChar___3I(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setChar
 * Signature: ([IC)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setChar___3IC(JNIEnv *, jobject, jintArray, jchar);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getInt
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_com_tangram_SafeArray_getInt___3I(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setInt
 * Signature: ([II)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setInt___3II(JNIEnv *, jobject, jintArray, jint);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getLong
 * Signature: ([I)J
 */
JNIEXPORT jlong JNICALL Java_com_tangram_SafeArray_getLong___3I(JNIEnv *env, jobject _this, jintArray indices);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setLong
 * Signature: ([IJ)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setLong___3IJ(JNIEnv *env, jobject _this, jintArray indices, jlong c);


/*
 * Class:     com_tangram_SafeArray
 * Method:    getShort
 * Signature: ([I)S
 */
JNIEXPORT jshort JNICALL Java_com_tangram_SafeArray_getShort___3I(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setShort
 * Signature: ([IS)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setShort___3IS(JNIEnv *, jobject, jintArray, jshort);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getDouble
 * Signature: ([I)D
 */
JNIEXPORT jdouble JNICALL Java_com_tangram_SafeArray_getDouble___3I(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setDouble
 * Signature: ([ID)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setDouble___3ID(JNIEnv *, jobject, jintArray, jdouble);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getString
 * Signature: ([I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tangram_SafeArray_getString___3I(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setString
 * Signature: ([ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setString___3ILjava_lang_String_2(JNIEnv *, jobject, jintArray, jstring);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getByte
 * Signature: ([I)B
 */
JNIEXPORT jbyte JNICALL Java_com_tangram_SafeArray_getByte___3I(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setByte
 * Signature: ([IB)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setByte___3IB(JNIEnv *, jobject, jintArray, jbyte);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getFloat
 * Signature: ([I)F
 */
JNIEXPORT jfloat JNICALL Java_com_tangram_SafeArray_getFloat___3I(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setFloat
 * Signature: ([IF)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setFloat___3IF(JNIEnv *, jobject, jintArray, jfloat);

/*
 * Class:     com_tangram_SafeArray
 * Method:    getBoolean
 * Signature: ([I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tangram_SafeArray_getBoolean___3I(JNIEnv *, jobject, jintArray);

/*
 * Class:     com_tangram_SafeArray
 * Method:    setBoolean
 * Signature: ([IZ)V
 */
JNIEXPORT void JNICALL Java_com_tangram_SafeArray_setBoolean___3IZ(JNIEnv *, jobject, jintArray, jboolean);

#ifdef __cplusplus
}
#endif
#endif
