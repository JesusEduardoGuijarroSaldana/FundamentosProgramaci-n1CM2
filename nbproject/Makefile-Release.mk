#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/10DatosaPromediar.o \
	${OBJECTDIR}/11NumeroMayoryMenor.o \
	${OBJECTDIR}/12MetodoBurbuja.o \
	${OBJECTDIR}/1HolaMundo.o \
	${OBJECTDIR}/2OperacionesClase3Nov2020.o \
	${OBJECTDIR}/3Mayorde3NumerosFuncionIF.o \
	${OBJECTDIR}/4Mayorde4NumerosFuncionIF.o \
	${OBJECTDIR}/5SerieFibonacciFuncionWhile.o \
	${OBJECTDIR}/6Tablas1al10While.o \
	${OBJECTDIR}/7Tablas1al10conFor.o \
	${OBJECTDIR}/8Arreglos.o \
	${OBJECTDIR}/9Arreglos.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programaci_n.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programaci_n.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programaci_n ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/10DatosaPromediar.o: 10DatosaPromediar.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/10DatosaPromediar.o 10DatosaPromediar.c

${OBJECTDIR}/11NumeroMayoryMenor.o: 11NumeroMayoryMenor.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/11NumeroMayoryMenor.o 11NumeroMayoryMenor.c

${OBJECTDIR}/12MetodoBurbuja.o: 12MetodoBurbuja.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/12MetodoBurbuja.o 12MetodoBurbuja.c

${OBJECTDIR}/1HolaMundo.o: 1HolaMundo.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/1HolaMundo.o 1HolaMundo.c

${OBJECTDIR}/2OperacionesClase3Nov2020.o: 2OperacionesClase3Nov2020.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/2OperacionesClase3Nov2020.o 2OperacionesClase3Nov2020.c

${OBJECTDIR}/3Mayorde3NumerosFuncionIF.o: 3Mayorde3NumerosFuncionIF.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/3Mayorde3NumerosFuncionIF.o 3Mayorde3NumerosFuncionIF.c

${OBJECTDIR}/4Mayorde4NumerosFuncionIF.o: 4Mayorde4NumerosFuncionIF.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/4Mayorde4NumerosFuncionIF.o 4Mayorde4NumerosFuncionIF.c

${OBJECTDIR}/5SerieFibonacciFuncionWhile.o: 5SerieFibonacciFuncionWhile.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/5SerieFibonacciFuncionWhile.o 5SerieFibonacciFuncionWhile.c

${OBJECTDIR}/6Tablas1al10While.o: 6Tablas1al10While.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/6Tablas1al10While.o 6Tablas1al10While.c

${OBJECTDIR}/7Tablas1al10conFor.o: 7Tablas1al10conFor.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/7Tablas1al10conFor.o 7Tablas1al10conFor.c

${OBJECTDIR}/8Arreglos.o: 8Arreglos.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/8Arreglos.o 8Arreglos.c

${OBJECTDIR}/9Arreglos.o: 9Arreglos.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/9Arreglos.o 9Arreglos.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/fundamentos_de_programaci_n.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
