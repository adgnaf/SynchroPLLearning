set -x
if [ -z ${C_COMPILER} ]; then C_COMPILER=gcc; fi
if [ -z ${MAIN_FILE} ]; then MAIN_FILE=assert_assertExpr_loop.c; fi
$C_COMPILER -o assertExpr.exec \
	 lustre_consts.c assert_assertExpr.c  ${EXTRA_C_FILES} assert_assertExpr_loop_io.c ${MAIN_FILE} ${C_LIBS}

