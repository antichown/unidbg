/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_github_unidbg_arm_backend_kvm_Kvm */

#ifndef _Included_com_github_unidbg_arm_backend_kvm_Kvm
#define _Included_com_github_unidbg_arm_backend_kvm_Kvm
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    getMaxSlots
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_getMaxSlots
  (JNIEnv *, jclass);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    getPageSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_getPageSize
  (JNIEnv *, jclass);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    nativeInitialize
 * Signature: (Z)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_nativeInitialize
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    nativeDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_nativeDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    set_user_memory_region
 * Signature: (JIJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_set_1user_1memory_1region
  (JNIEnv *, jclass, jlong, jint, jlong, jlong);

/*
 * Class:     com_github_unidbg_arm_backend_kvm_Kvm
 * Method:    reg_read_cpacr_el1
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_github_unidbg_arm_backend_kvm_Kvm_reg_1read_1cpacr_1el1
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
