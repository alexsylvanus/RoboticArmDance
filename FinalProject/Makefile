CXXFLAGS = -Wall -Werror

Main: RoboticArm.o Main.o
	g++ RoboticArm.o Main.o -o Main
RoboticArm.o: RoboticArm.cc RoboticArm.h
	g++ $(CXXFLAGS) -c RoboticArm.cc
Main.o: Main.cc RoboticArm.h
	g++ $(CXXFLAGS) -c Main.cc
clean:
	rm *.o Main