LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code

include $(BUILD_SHARED_LIBRARY)  

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code1.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code1

include $(BUILD_SHARED_LIBRARY)  

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code2.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code2

include $(BUILD_SHARED_LIBRARY)  

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code3.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code3

include $(BUILD_SHARED_LIBRARY) 

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code4.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code4

include $(BUILD_SHARED_LIBRARY) 

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code5.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code5

include $(BUILD_SHARED_LIBRARY) 

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code6.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code6

include $(BUILD_SHARED_LIBRARY) 

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code7.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code7

include $(BUILD_SHARED_LIBRARY) 

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code8.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code8

include $(BUILD_SHARED_LIBRARY) 

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code9.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code9

include $(BUILD_SHARED_LIBRARY)

#--------------------------------------------------------------------------------------
include $(CLEAR_VARS)

# Here we give our module name and sourcefile(s)
LOCAL_CFLAGS += -Wno-write-strings -DENV_ANDROID
LOCAL_CPPFLAGS += -Wno-write-strings -fexceptions -DENV_ANDROID
LOCAL_LDFLAGS += -Wno-write-strings -DENV_ANDROID

LOCAL_C_INCLUDES += ../../cle_files/include

#--------source file
MODULE_CXXSRCS := Code10.cpp SRPWrapAndroidEngine_UUIDDef.cpp SRPWrapAndroidEngine_VSClass.cpp

LOCAL_SRC_FILES := ${MODULE_CXXSRCS}
LOCAL_LDLIBS := ../../cle_files/libs/armeabi/libstarlib.a

LOCAL_MODULE  := Code10

include $(BUILD_SHARED_LIBRARY)


