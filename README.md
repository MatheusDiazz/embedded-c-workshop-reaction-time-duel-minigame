# Arduino Reaction-Time Duel Game

An interactive Arduino game where two players compete to see who can react
faster to a sound and press their button first.

This project was developed as part of an Arduino electronics workshop to
introduce participants to basic circuits, digital input and output, LEDs,
push buttons, buzzers, and Arduino programming.

## Demo

The game uses a buzzer to produce a countdown, followed by a random delay.
When the reaction signal sounds, both players must press their buttons as
quickly as possible.

The Arduino determines the winner and displays the winner's reaction time
through the Serial Monitor.

## How It Works

1. The game resets both LEDs.
2. The buzzer produces three countdown beeps.
3. The program waits for a random amount of time.
4. The buzzer produces the reaction signal.
5. The Arduino measures the time until a player presses their button.
6. The winning player's LED turns on.
7. The winner's reaction time is printed to the Serial Monitor.

## Components

- Arduino Uno or compatible board
- Breadboard
- 2 push buttons
- 2 LEDs
- 2 current-limiting resistors
- 1 piezo buzzer
- Jumper wires
- USB cable

## Pin Connections

| Component | Arduino Pin |
|---|---|
| Player 1 button | A5 |
| Player 2 button | A4 |
| Player 1 LED | D2 |
| Player 2 LED | D4 |
| Piezo buzzer | D3 |

## Circuit

The circuit consists of two player input buttons, two indicator LEDs,
and a piezo buzzer.

Each LED should be connected in series with a current-limiting resistor.

The buttons can be configured using either:

- External pull-down resistors, where a pressed button reads `HIGH`.
- Internal pull-up resistors, where a pressed button reads `LOW`.

The button wiring must match the input configuration used in the code.

## Software Requirements

- Arduino IDE
- Arduino Uno or compatible board
- USB cable
- Arduino sketch (`.ino` file)

## Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/YOUR-REPOSITORY.git
```

Replace the URL with the address of your repository.

### 2. Open the Arduino sketch

Open the `.ino` file in the Arduino IDE.

### 3. Connect the Arduino

Connect your Arduino board to your computer using a USB cable.

### 4. Select the board and port

In the Arduino IDE:

- Select the appropriate Arduino board.
- Select the correct serial port.

### 5. Upload the code

Click **Upload** to compile and upload the sketch to the Arduino.

### 6. Play the game

1. Reset the Arduino.
2. Wait for the three countdown beeps.
3. Wait for the reaction signal.
4. Press your button as quickly as possible.
5. Check the Serial Monitor for the winner and reaction time.

Set the Serial Monitor baud rate to:

```text
9600
```

## Example Output

```text
Player 1 wins! Reaction time: 287
```

The reaction time is measured in milliseconds.

## Learning Objectives

This workshop introduces:

- Arduino programming fundamentals
- Digital input and output
- Push-button circuits
- Pull-up and pull-down resistors
- LED control
- Piezo buzzer control
- The `tone()` function
- The `millis()` function
- Random delays
- Serial communication
- Basic embedded systems concepts

## Possible Improvements

Future versions of the game could include:

- A scoreboard
- Multiple rounds
- A false-start detection system
- A display for reaction times
- A countdown display
- A reset button
- A best-of-three game mode
- Improved button debouncing
- A graphical user interface

## License

### Source Code

The Arduino source code is licensed under the
[MIT License](LICENSE-MIT).

### Educational Materials

Original slides, diagrams, and other workshop materials are licensed under
[CC BY 4.0](LICENSE-CC-BY-4.0).

Third-party images and other materials remain subject to their original
copyright and license terms. They are not automatically covered by these
licenses.

## Author

Created by Matheus Diaz and Brady lions as part of an Arduino electronics workshop.
