###############################################################################
#
# 
#
###############################################################################

LIBRARY := slot_allocator
$(LIBRARY)_SUBDIR := $(dir $(lastword $(MAKEFILE_LIST)))
include $(BUILDER)/lib.mk
