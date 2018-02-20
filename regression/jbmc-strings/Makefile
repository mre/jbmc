default: tests.log

test:
	@../../lib/cbmc/regression/test.pl -p -c ../../../src/jbmc/jbmc

testfuture:
	@../../lib/cbmc/regression/test.pl -p -c ../../../src/jbmc/jbmc -CF

testall:
	@../../lib/cbmc/regression/test.pl -p -c ../../../src/jbmc/jbmc -CFTK

tests.log: ../../lib/cbmc/regression/test.pl
	@../../lib/cbmc/regression/test.pl -p -c ../../../src/jbmc/jbmc

show:
	@for dir in *; do \
		if [ -d "$$dir" ]; then \
			vim -o "$$dir/*.c" "$$dir/*.out"; \
		fi; \
	done;

clean:
	find -name '*.out' -execdir $(RM) '{}' \;
	find -name '*.gb' -execdir $(RM) '{}' \;
	$(RM) tests.log

