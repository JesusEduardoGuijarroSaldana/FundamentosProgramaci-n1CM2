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
	${OBJECTDIR}/13MetodoBurbujaMejorado.o \
	${OBJECTDIR}/14FuncionesMath.o \
	${OBJECTDIR}/15ConversionesdeTemperaturas.o \
	${OBJECTDIR}/16CuadernilloNumParoImpar.o \
	${OBJECTDIR}/17CuadernilloNumPosNegoCero.o \
	${OBJECTDIR}/18CuadernilloMayorde3Num.o \
	${OBJECTDIR}/19CuadernilloMillToKmyKmToMill.o \
	${OBJECTDIR}/1HolaMundo.o \
	${OBJECTDIR}/20CuadernilloPesoenotroPlaneta.o \
	${OBJECTDIR}/21CuadernilloMayorDe.o \
	${OBJECTDIR}/22CuadernilloPiramideDeRombos.o \
	${OBJECTDIR}/23CuadernilloMultiplodeCualquierNum.o \
	${OBJECTDIR}/24CuadernilloTodoslosNumEntredosNum.o \
	${OBJECTDIR}/25CuadernilloMediadexNum.o \
	${OBJECTDIR}/26CuadernilloArreglo10Num.o \
	${OBJECTDIR}/27CuadernilloOrdenamientodeNum.o \
	${OBJECTDIR}/28CuadernilloBuscarUnNumero.o \
	${OBJECTDIR}/29CuadernilloSumaMediaNumMayorDe5Num.o \
	${OBJECTDIR}/2OperacionesClase3Nov2020.o \
	${OBJECTDIR}/30CuadernilloOrdenamientodeNumMejorado.o \
	${OBJECTDIR}/31CuadernilloIntercambiodelValordeDosVariables.o \
	${OBJECTDIR}/32CuadernilloOperacionesBasicas.o \
	${OBJECTDIR}/33CuadernilloPotenciadeunNum.o \
	${OBJECTDIR}/34CuadernilloAreasdeFiguras.o \
	${OBJECTDIR}/35CuadernilloOrdenamiendoConFuncion.o \
	${OBJECTDIR}/36CuadernilloParoImparPunteros.o \
	${OBJECTDIR}/37CuadernilloSumaconPunteros.o \
	${OBJECTDIR}/38CuadernilloArregloNumParesDirecMemor.o \
	${OBJECTDIR}/39CuadernilloModicarVariableConPunteros.o \
	${OBJECTDIR}/3Mayorde3NumerosFuncionIF.o \
	${OBJECTDIR}/40CuadernilloSumaraVariableConPunteros.o \
	${OBJECTDIR}/41ArraysyCadenas.o \
	${OBJECTDIR}/42CantidadLetrasDeCadena.o \
	${OBJECTDIR}/43Cabecerasnewmain.o \
	${OBJECTDIR}/44Ficheros.o \
	${OBJECTDIR}/45FibonacciRecursividad.o \
	${OBJECTDIR}/46FibonacciRecursividad2.o \
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

${OBJECTDIR}/13MetodoBurbujaMejorado.o: 13MetodoBurbujaMejorado.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/13MetodoBurbujaMejorado.o 13MetodoBurbujaMejorado.c

${OBJECTDIR}/14FuncionesMath.o: 14FuncionesMath.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/14FuncionesMath.o 14FuncionesMath.c

${OBJECTDIR}/15ConversionesdeTemperaturas.o: 15ConversionesdeTemperaturas.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/15ConversionesdeTemperaturas.o 15ConversionesdeTemperaturas.c

${OBJECTDIR}/16CuadernilloNumParoImpar.o: 16CuadernilloNumParoImpar.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/16CuadernilloNumParoImpar.o 16CuadernilloNumParoImpar.c

${OBJECTDIR}/17CuadernilloNumPosNegoCero.o: 17CuadernilloNumPosNegoCero.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/17CuadernilloNumPosNegoCero.o 17CuadernilloNumPosNegoCero.c

${OBJECTDIR}/18CuadernilloMayorde3Num.o: 18CuadernilloMayorde3Num.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/18CuadernilloMayorde3Num.o 18CuadernilloMayorde3Num.c

${OBJECTDIR}/19CuadernilloMillToKmyKmToMill.o: 19CuadernilloMillToKmyKmToMill.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/19CuadernilloMillToKmyKmToMill.o 19CuadernilloMillToKmyKmToMill.c

${OBJECTDIR}/1HolaMundo.o: 1HolaMundo.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/1HolaMundo.o 1HolaMundo.c

${OBJECTDIR}/20CuadernilloPesoenotroPlaneta.o: 20CuadernilloPesoenotroPlaneta.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/20CuadernilloPesoenotroPlaneta.o 20CuadernilloPesoenotroPlaneta.c

${OBJECTDIR}/21CuadernilloMayorDe.o: 21CuadernilloMayorDe.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/21CuadernilloMayorDe.o 21CuadernilloMayorDe.c

${OBJECTDIR}/22CuadernilloPiramideDeRombos.o: 22CuadernilloPiramideDeRombos.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/22CuadernilloPiramideDeRombos.o 22CuadernilloPiramideDeRombos.c

${OBJECTDIR}/23CuadernilloMultiplodeCualquierNum.o: 23CuadernilloMultiplodeCualquierNum.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/23CuadernilloMultiplodeCualquierNum.o 23CuadernilloMultiplodeCualquierNum.c

${OBJECTDIR}/24CuadernilloTodoslosNumEntredosNum.o: 24CuadernilloTodoslosNumEntredosNum.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/24CuadernilloTodoslosNumEntredosNum.o 24CuadernilloTodoslosNumEntredosNum.c

${OBJECTDIR}/25CuadernilloMediadexNum.o: 25CuadernilloMediadexNum.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/25CuadernilloMediadexNum.o 25CuadernilloMediadexNum.c

${OBJECTDIR}/26CuadernilloArreglo10Num.o: 26CuadernilloArreglo10Num.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/26CuadernilloArreglo10Num.o 26CuadernilloArreglo10Num.c

${OBJECTDIR}/27CuadernilloOrdenamientodeNum.o: 27CuadernilloOrdenamientodeNum.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/27CuadernilloOrdenamientodeNum.o 27CuadernilloOrdenamientodeNum.c

${OBJECTDIR}/28CuadernilloBuscarUnNumero.o: 28CuadernilloBuscarUnNumero.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/28CuadernilloBuscarUnNumero.o 28CuadernilloBuscarUnNumero.c

${OBJECTDIR}/29CuadernilloSumaMediaNumMayorDe5Num.o: 29CuadernilloSumaMediaNumMayorDe5Num.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/29CuadernilloSumaMediaNumMayorDe5Num.o 29CuadernilloSumaMediaNumMayorDe5Num.c

${OBJECTDIR}/2OperacionesClase3Nov2020.o: 2OperacionesClase3Nov2020.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/2OperacionesClase3Nov2020.o 2OperacionesClase3Nov2020.c

${OBJECTDIR}/30CuadernilloOrdenamientodeNumMejorado.o: 30CuadernilloOrdenamientodeNumMejorado.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/30CuadernilloOrdenamientodeNumMejorado.o 30CuadernilloOrdenamientodeNumMejorado.c

${OBJECTDIR}/31CuadernilloIntercambiodelValordeDosVariables.o: 31CuadernilloIntercambiodelValordeDosVariables.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/31CuadernilloIntercambiodelValordeDosVariables.o 31CuadernilloIntercambiodelValordeDosVariables.c

${OBJECTDIR}/32CuadernilloOperacionesBasicas.o: 32CuadernilloOperacionesBasicas.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/32CuadernilloOperacionesBasicas.o 32CuadernilloOperacionesBasicas.c

${OBJECTDIR}/33CuadernilloPotenciadeunNum.o: 33CuadernilloPotenciadeunNum.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/33CuadernilloPotenciadeunNum.o 33CuadernilloPotenciadeunNum.c

${OBJECTDIR}/34CuadernilloAreasdeFiguras.o: 34CuadernilloAreasdeFiguras.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/34CuadernilloAreasdeFiguras.o 34CuadernilloAreasdeFiguras.c

${OBJECTDIR}/35CuadernilloOrdenamiendoConFuncion.o: 35CuadernilloOrdenamiendoConFuncion.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/35CuadernilloOrdenamiendoConFuncion.o 35CuadernilloOrdenamiendoConFuncion.c

${OBJECTDIR}/36CuadernilloParoImparPunteros.o: 36CuadernilloParoImparPunteros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/36CuadernilloParoImparPunteros.o 36CuadernilloParoImparPunteros.c

${OBJECTDIR}/37CuadernilloSumaconPunteros.o: 37CuadernilloSumaconPunteros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/37CuadernilloSumaconPunteros.o 37CuadernilloSumaconPunteros.c

${OBJECTDIR}/38CuadernilloArregloNumParesDirecMemor.o: 38CuadernilloArregloNumParesDirecMemor.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/38CuadernilloArregloNumParesDirecMemor.o 38CuadernilloArregloNumParesDirecMemor.c

${OBJECTDIR}/39CuadernilloModicarVariableConPunteros.o: 39CuadernilloModicarVariableConPunteros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/39CuadernilloModicarVariableConPunteros.o 39CuadernilloModicarVariableConPunteros.c

${OBJECTDIR}/3Mayorde3NumerosFuncionIF.o: 3Mayorde3NumerosFuncionIF.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/3Mayorde3NumerosFuncionIF.o 3Mayorde3NumerosFuncionIF.c

${OBJECTDIR}/40CuadernilloSumaraVariableConPunteros.o: 40CuadernilloSumaraVariableConPunteros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/40CuadernilloSumaraVariableConPunteros.o 40CuadernilloSumaraVariableConPunteros.c

${OBJECTDIR}/41ArraysyCadenas.o: 41ArraysyCadenas.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/41ArraysyCadenas.o 41ArraysyCadenas.c

${OBJECTDIR}/42CantidadLetrasDeCadena.o: 42CantidadLetrasDeCadena.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/42CantidadLetrasDeCadena.o 42CantidadLetrasDeCadena.c

${OBJECTDIR}/43Cabecerasnewmain.o: 43Cabecerasnewmain.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/43Cabecerasnewmain.o 43Cabecerasnewmain.c

${OBJECTDIR}/44Ficheros.o: 44Ficheros.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/44Ficheros.o 44Ficheros.c

${OBJECTDIR}/45FibonacciRecursividad.o: 45FibonacciRecursividad.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/45FibonacciRecursividad.o 45FibonacciRecursividad.c

${OBJECTDIR}/46FibonacciRecursividad2.o: 46FibonacciRecursividad2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/46FibonacciRecursividad2.o 46FibonacciRecursividad2.c

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
