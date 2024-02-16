

# Nombre del ejecutable a generar
#TARGET = p01

# Compilador de C++ a usar
CXX = g++

# Bandera de C++ para usar
CXXFLAGS = -std=c++11 -Wall -I/usr/local/include/opencv4

# Bandera de enlazador para usar
LDFLAGS = -L/usr/local/lib -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs

# Archivo fuente
SRC = $(TARGET).cpp


# Regla por defecto
all: $(TARGET)

# Cómo construir el ejecutable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS) && ./$(TARGET)

# Regla para limpiar archivos compilados
clean:
	rm -f $(TARGET) *.o
	
# Regla para ejecutar el programa

run: $(TARGET)
	./$(TARGET)

