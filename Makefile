HE=hello

first: test1 
	@echo "first makefile"
	@#@bwa

test1: test2
	@echo "test1"; 
	@echo $(HE)

test2: 
	@echo "test2"

test3: 
	@echo "test3"

all: 
	@echo "last makefile"