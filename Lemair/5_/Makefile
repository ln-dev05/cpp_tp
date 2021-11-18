######################################################################
# @author      : lemairp (lemairp@lemairp-Aspire-A515-51G)
# @file        : Makefile
# @created     : dimanche oct. 10, 2021 15:56:14 CEST
######################################################################

IDIR=./inc
BDIR=./bin
SDIR=./src
ODIR=./obj

CXX=g++
CXXFLAGS=-I$(IDIR) -g
LIBS=

EXEC=heap

OBJ=


.PHONY: clean all MAKE_DIR

all: MAKE_DIR $(BDIR)/$(EXEC)

MAKE_DIR :
	@mkdir -p $(IDIR)
	@mkdir -p $(BDIR)
	@mkdir -p $(SDIR)
	@mkdir -p $(ODIR)


OBJ+=$(ODIR)/main.o

$(ODIR)/main.o: $(SDIR)/main.cpp $(IDIR)/Comparator.h $(IDIR)/Heap.h

$(ODIR)/%o:
	$(CXX) $(CXXFLAGS) $< -c -o $@

$(BDIR)/$(EXEC): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)

clean:
	rm -f $(ODIR)/*.o
