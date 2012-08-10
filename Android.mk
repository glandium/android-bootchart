LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
	bootchart.c \
	main.c

LOCAL_CFLAGS    += -DBOOTCHART=1

LOCAL_MODULE:= bootchart
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_MODULE_TAGS := optional

include $(BUILD_EXECUTABLE)
