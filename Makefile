all: eventflow

EventControl.o: EventControl.cpp EventControl.h
	g++ -g -c EventControl.cpp -std=c++11

EventComponent.o: EventComponent.cpp EventComponent.h
	g++ -g -c EventComponent.cpp -std=c++11

EventUnit.o: EventUnit.cpp EventUnit.h
	g++ -g -c EventUnit.cpp -std=c++11

Paramedics.o: Paramedics.cpp Paramedics.h
	g++ -g -c Paramedics.cpp -std=c++11

ProductBooth.o: ProductBooth.cpp ProductBooth.h
	g++ -g -c ProductBooth.cpp -std=c++11

MeetAndGreet.o: MeetAndGreet.cpp MeetAndGreet.h
	g++ -g -c MeetAndGreet.cpp -std=c++11

IndieGaming.o: IndieGaming.cpp IndieGaming.h
	g++ -g -c IndieGaming.cpp -std=c++11

EventGroup.o: EventGroup.cpp EventGroup.h
	g++ -g -c EventGroup.cpp -std=c++11

ESports.o: ESports.cpp ESports.h
	g++ -g -c ESports.cpp -std=c++11

Subject.o: Subject.cpp Subject.h
	g++ -g -c Subject.cpp -std=c++11

StageZone.o: StageZone.cpp StageZone.h
	g++ -g -c StageZone.cpp -std=c++11

GamingBooth.o: GamingBooth.cpp GamingBooth.h
	g++ -g -c GamingBooth.cpp -std=c++11

FoodCourt.o: FoodCourt.cpp FoodCourt.h
	g++ -g -c FoodCourt.cpp -std=c++11

Main.o: Main.cpp
	g++ -g -c Main.cpp -std=c++11

eventflow: EventControl.o EventComponent.o EventUnit.o Paramedics.o ProductBooth.o MeetAndGreet.o IndieGaming.o EventGroup.o ESports.o Subject.o StageZone.o GamingBooth.o FoodCourt.o main.o
	g++ -g EventControl.o EventComponent.o EventUnit.o Paramedics.o ProductBooth.o MeetAndGreet.o IndieGaming.o EventGroup.o ESports.o Subject.o StageZone.o GamingBooth.o FoodCourt.o main.o -o eventflow

run: eventflow
	./eventflow

valgrind: eventflow
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./eventflow

clean:
	rm -f *.o eventflow