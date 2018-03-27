#########################################################
# Specify the name of the target executable(s)
# Unpacker names must match the name of the main *.spec file
# Sub-unpackers must start with the name of the *.spec file.
# Example:
#   The main spec file is called 'unpacker.spec'
#
# Then the unpacker must be named 'unpacker'
# Any sub-unpackers must be named 'unpacker_sub1', where 'sub1' is
# an arbitrary suffix describing the sub-unpacker.
#
# Aliases are defined using the syntax:
#   alias->target.
# This will then after building target make a symbolic link to the 'target'
# with the name 'alias'.
#
#########################################################

# Sub-unpacker information:
# run001 until run060: Fiber 1 and Fiber 4 are connected to clock TDC
# run061 until run068: Fiber 1 and Fiber 5 are connected to clock TDC
# run069 until run098: Fiber 1 and Fiber 6 are connected to clock TDC
# run099 until run101: Fiber 1 and Fiber 5 are connected to clock TDC
# run001 until run085: Carbon beam
# run086 until run101: Proton beam
#
# run013 until run020: Mapping for PSPX is different
# pspx_run073: Mapping for PSPX is different
# pspx_run075 until pspx_run082: Mapping for PSPX is different


# Los detector is connected to
#   FQT/TAMEX3, i.e. tamex.los_0
# and to
#   PADI/TAMEX2, i.e. tamex.ptof_0[17-32]
# Unpackers with name *_los_padi_* have the standard names LOS mapped to
# PADI/TAMEX2 electronics.

TARGETS:= kvi2018_001_060 kvi2018_061_068 kvi2018_069_101 \
	  kvi2018_los_padi_086_098 kvi2018_los_padi_099_101 \
	  kvi2018_013_020 kvi2018_pspx_073 kvi2018_pspx_075_082 \

ALIASES:= kvi2018_099_101->kvi2018_061_068

#########################################################
# Include common Makefile

include ../makefile_common.mk
