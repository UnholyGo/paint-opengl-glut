# Paint OpenGL (C++ Project)
This project is a C++ implementation of a painting tool using OpenGL and GLUT.


---

## About the Project

- **Highly Customizable:** Built with a modular architecture, allowing for easy customization and scalability.  
- **Color Selection:** Offers a variety of color options to enhance creativity.  
- **Versatile Drawing Tools:** Includes a range of tools commonly found in paint programs, enabling diverse drawing techniques.  
- **Background Customization:** Allows users to change the background color to suit their preferences.  
- **Save as PNG:** Supports saving creations as high-quality PNG files for easy sharing and further use.

---

## Prerequisites

### Install `g++`
For Linux:
```bash
sudo apt update
sudo apt install g++
```

For macOS (via Homebrew):
```bash
brew install gcc
```

### Install `freeglut`
For Linux:
```bash
sudo apt install freeglut3 freeglut3-dev
```

For macOS (via Homebrew):
```bash
brew install freeglut
```

---

## Installation and Setup

1. Clone the repository:
   ```bash
   git clone https://github.com/UnholyGo/paint-opengl-glut
   ```

2. Navigate to the project directory:
   ```bash
   cd paint-project-opengl
   ```

---

## Run the Project

### On macOS and Linux
Use the following command to compile and run the project:
```bash
g++ main.cpp mouseControl.cpp variable.cpp buttons.cpp tableRun.cpp reset.cpp -o paint -I/opt/homebrew/include -L/opt/homebrew/lib -lGLEW -lglut -framework OpenGL -std=c++17
```

Then execute the program:
```bash
./paint
```

---

## Screenshots

### Drawing Interface
![Drawing Interface](https://github.com/UnholyGo/paint-opengl-glut/blob/main/Screenshot.png)

### Example Drawing
![Example Drawing](https://github.com/UnholyGo/paint-opengl-glut/blob/main/paint.png)


