all:
	cd c;make clean;make;cd -
	cd java;mvn install;cd -
	cd demos;mvn install;cd -
clean:
	rm -rf c/build
	rm -rf java/target
	rm -rf demos/target
