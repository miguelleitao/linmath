
PROG=linmath
SRC_FILE=${PROG}.h
DOC_DIR=doc

CC=gcc

default:
	@echo "${PROG} does not require any make."
	@echo "Nothing to do."

all: ${PROG}.list doc

${PROG}.list: ${SRC_FILE}
	gcc -E ${SRC_FILE} -o - | \
	sed 's/static inline/\nstatic inline/g' | \
	awk '/# 6 "linmath.h" 2/ {flag=1; next} flag && /^[[:space:]]*static inline/' >$@


EXPANDED:= ${DOC_DIR}/${SRC_FILE}
DOXYFILE:= ${DOC_DIR}/Doxyfile

$(EXPANDED): $(SRC_FILE)
	@mkdir -p ${DOC_DIR} 
	@echo -n "Expanding $< to $@ ... "
	@$(CC) -E -CC -P -nostdinc -I doc/stubs $< -o - | awk '{ \
	  gsub(/static inline/, "\nstatic inline"); \
          gsub(/@param /, "\n@param "); \
          gsub(/@brief /, "\n@brief "); \
	  print; }'\
	  > $@
	@echo done.

doc: $(EXPANDED)
	doxygen $(DOXYFILE) >${DOC_DIR}/doxygen.log

clean:
	rm -rf build ${DOC_DIR}/html ${DOC_DIR}/latex ${DOC_DIR}/*.log ${EXPANDED}

.PHONY: all doc clean 
