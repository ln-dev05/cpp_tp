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
CXXFLAGS=-I$(IDIR)
LIBS=

EXEC=sieve

OBJ=


.PHONY: clean all MAKE_DIR

all: MAKE_DIR $(BDIR)/$(EXEC)

MAKE_DIR :
	@mkdir -p $(IDIR)
	@mkdir -p $(BDIR)
	@mkdir -p $(SDIR)
	@mkdir -p $(ODIR)

OBJ+=$(ODIR)/IntSource.o 
OBJ+=$(ODIR)/SourceDecorateur.o 
OBJ+=$(ODIR)/MultipleFilter.o
OBJ+=$(ODIR)/UnitFilter.o
OBJ+=$(ODIR)/Sieve.o
OBJ+=$(ODIR)/main.o

$(ODIR)/IntSource.o: $(SDIR)/IntSource.cpp $(IDIR)/IntSource.h
$(ODIR)/SourceDecorateur.o: $(SDIR)/SourceDecorateur.cpp $(IDIR)/SourceDecorateur.h $(IDIR)/IntSource.h
$(ODIR)/MultipleFilter.o: $(SDIR)/MultipleFilter.cpp $(IDIR)/MultipleFilter.h $(IDIR)/SourceDecorateur.h
$(ODIR)/UnitFilter.o: $(SDIR)/UnitFilter.cpp $(IDIR)/UnitFilter.h $(IDIR)/SourceDecorateur.h
$(ODIR)/Sieve.o: $(SDIR)/Sieve.cpp $(IDIR)/Sieve.h $(IDIR)/MultipleFilter.h $(IDIR)/SourceDecorateur.h
$(ODIR)/main.o: $(SDIR)/main.cpp $(IDIR)/Sieve.h $(IDIR)/Counter.h

$(ODIR)/%o:
	$(CXX) $(CXXFLAGS) $< -c -o $@

$(BDIR)/$(EXEC): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS) $(LIBS)

clean:
	rm -f $(ODIR)/*.o
