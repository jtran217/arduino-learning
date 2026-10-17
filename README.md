# Arduino Learning

Learning hardware and embedded C++ with the Elegoo UNO R3 Super Starter Kit.
Each lesson is its own PlatformIO project with code, wiring, and notes.

## Setup

- **Board:** Elegoo UNO R3 (ATmega16U2, shows up as `/dev/ttyACM0`)
- **OS:** Fedora
- **Tools:** PlatformIO CLI, Neovim + clangd

### Running a lesson

```bash
cd 01-basics/01-blink
pio run -t compiledb   # set up clangd
pio run -t upload      # build and flash
pio device monitor -b 9600
```

### Starting a new lesson

```bash
./new-lesson.sh 01-basics/02-button
```
## Progress

### 01 Basics
- [ ] [Blink](01-basics/01-blink)
- [ ] [Button](01-basics/02-button)
- [ ] [Potentiometer](01-basics/03-potentiometer)
- [ ] RGB LED
- [ ] Buzzer

### 02 Sensors
- [ ] Ultrasonic distance
- [ ] DHT11 temp and humidity
- [ ] Photoresistor

### 03 Displays
- [ ] LCD1602
- [ ] 8x8 LED matrix
- [ ] 4-digit 7-segment

### 04 Input
- [ ] Joystick
- [ ] Keypad
- [ ] IR remote

### 05 Motion
- [ ] Servo
- [ ] Stepper motor
## Goal

Get comfortable writing code on my own again. AI has made it easy to skip the
struggle, and I've noticed my problem solving has suffered for it. This repo
is where I build that skill back.

### Rules

- **No AI-written code.** Every line in this repo is mine.
- **AI is for knowledge only.** Asking "how does a pull-up resistor work?" is
  fine. Asking "write me a debounce function" is not.
- **Struggle first.** Try for at least 20 minutes before looking anything up.
- **Docs before AI.** Check the Elegoo PDF, Arduino reference, or datasheet first.
- **Write it down.** When I get stuck, the "Problems I hit" section in the
  lesson README gets the details: what broke, what I tried, what fixed it.
