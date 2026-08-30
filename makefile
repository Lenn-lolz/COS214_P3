CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

TARGET = EventSystem

SOURCES = Main.cpp \
          EventControl.cpp \
          EventComponent.cpp \
		  EventUnit.cpp\
		  Paramedics.cpp\
		  ProductBooth.cpp\
		  MeetAndGreet.cpp\
		  IndieGaming.cpp\
          EventGroup.cpp \
		  ESports.cpp \
		  Subject.cpp \
		  StageZone.cpp \
		  GamingBooth.cpp \
          FoodCourt.cpp

OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

rebuild: clean $(TARGET)

all: $(TARGET)