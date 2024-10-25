#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

const int windowSize = 600;
const int gridSize = 9;
const int cellSize = windowSize / gridSize;

class SudokuGame {
public:
    SudokuGame() {
        initializeGrid();
        initializeWindow();
    }

    void run() {
        while (window.isOpen()) {
            handleEvents();
            update();
            render();
        }
    }

private:
    sf::RenderWindow window;
    sf::Font font;
    sf::Text gridText[gridSize][gridSize];
    std::vector<std::vector<int>> grid;

    void initializeGrid() {
        // Initialize your Sudoku grid here
        // You can replace this with your own Sudoku puzzle
        std::vector<std::vector<int>> initialGrid = {
            {5, 3, 0, 0, 7, 0, 0, 0, 0},
            {6, 0, 0, 1, 9, 5, 0, 0, 0},
            {0, 9, 8, 0, 0, 0, 0, 6, 0},
            {8, 0, 0, 0, 6, 0, 0, 0, 3},
            {4, 0, 0, 8, 0, 3, 0, 0, 1},
            {7, 0, 0, 0, 2, 0, 0, 0, 6},
            {0, 6, 0, 0, 0, 0, 2, 8, 0},
            {0, 0, 0, 4, 1, 9, 0, 0, 5},
            {0, 0, 0, 0, 8, 0, 0, 7, 9}
        };

        grid = initialGrid;

        // Load the initial Sudoku grid values into SFML Text objects
        for (int i = 0; i < gridSize; ++i) {
            for (int j = 0; j < gridSize; ++j) {
                gridText[i][j].setFont(font);
                gridText[i][j].setCharacterSize(30);
                gridText[i][j].setPosition(i * cellSize + 15, j * cellSize + 5);
                if (initialGrid[i][j] != 0) {
                    gridText[i][j].setFillColor(sf::Color::Black);
                    gridText[i][j].setString(std::to_string(initialGrid[i][j]));
                } else {
                    gridText[i][j].setFillColor(sf::Color::Blue);
                }
            }
        }
    }

    void initializeWindow() {
        window.create(sf::VideoMode(windowSize, windowSize), "SFML Sudoku Game");
        if (!font.loadFromFile("arial.ttf")) {
            std::cerr << "Error loading font!" << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    void handleEvents() {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            } else if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    handleClick(event.mouseButton.x, event.mouseButton.y);
                }
            }
        }
    }

    void update() {
        // Update logic goes here
    }

    void render() {
        window.clear(sf::Color::White);

        // Draw the Sudoku grid
        for (int i = 0; i < gridSize; ++i) {
            for (int j = 0; j < gridSize; ++j) {
                window.draw(gridText[i][j]);
            }
        }

        window.display();
    }

    void handleClick(int x, int y) {
        // Handle mouse click logic here
        int i = x / cellSize;
        int j = y / cellSize;

        // Example: Print the clicked cell coordinates to the console
        std::cout << "Clicked cell: (" << i << ", " << j << ")" << std::endl;
    }
};

int main() {
    SudokuGame game;
    game.run();

    return 0;
}