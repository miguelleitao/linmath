
PROG=linmath
SRC_FILE=${PROG}.h

default:
	echo "${PROG} does not require any make"

${PROG}.list: ${SRC_FILE}
	gcc -E ${SRC_FILE} -o - | \
	sed 's/static inline/\nstatic inline/g' | \
	awk '/# 6 "linmath.h" 2/ {flag=1; next} flag && /^[[:space:]]*static inline/' >$@

