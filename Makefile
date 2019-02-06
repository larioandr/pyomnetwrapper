ut: tests/unittests.py
	@echo "(*) RUNNING UNIT TESTS"
	@nosetests tests/unittests.py

ft: tests/functests.py
	@echo "(*) RUNNING FUNCTIONAL TESTS"
	@nosetests tests/functests.py

test: ut ft

clean_samples:
	$(MAKE) -C samples/workspace/timers cleanall

build_samples: samples/workspace/timers/*.cc samples/workspace/timers/*.h samples/workspace/timers/*.ned
	$(MAKE) -C samples/workspace/timers

samples: build_samples
	./samples/workspace/timers/timers -f ./samples/workspace/timers/omnetpp.ini -u Cmdenv -n ./samples/workspace/timers/
