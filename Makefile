
PROG=linmath
SRC_FILE=${PROG}.h

CC=gcc

default:
	@echo "${PROG} does not require any make."
	@echo "Nothing to do."

all: ${PROG}.list doc

${PROG}.list: ${SRC_FILE}
	gcc -E ${SRC_FILE} -o - | \
	sed 's/static inline/\nstatic inline/g' | \
	awk '/# 6 "linmath.h" 2/ {flag=1; next} flag && /^[[:space:]]*static inline/' >$@


EXPANDED:= doc/${SRC_FILE}
DOXYFILE:= doc/Doxyfile

$(EXPANDED): $(SRC_FILE)
	@mkdir -p doc 
	$(CC) -E -CC -P -nostdinc -I doc/stubs $< -o - | awk '{ \
	  gsub(/static inline/, "\nstatic inline"); \
          gsub(/@param /, "\n@param "); \
          gsub(/@brief /, "\n@brief "); \
	  print; }'\
	  > $@

doc: $(EXPANDED)
	doxygen $(DOXYFILE)

clean:
	rm -rf build html latex

.PHONY: all doc clean
