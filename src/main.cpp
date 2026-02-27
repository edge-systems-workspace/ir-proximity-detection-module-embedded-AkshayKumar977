#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author AKSHAY KUMAR
 * @date 2026-01-20
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

#define IR_PIN 2
 // Define IR sensor digital pin (Use pin 2)

   int ldr_reading = 0;
 // Create variable to store sensor state

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Configure IR pin as INPUT

    // TODO 5:
    // Print system initialization message
}

void loop() {

    // TODO 6:
    // Read digital value from IR sensor

    // TODO 7:
    // If obstacle detected
    //     Print "Obstacle Detected"
    // Else
    //     Print "No Obstacle"

    // TODO 8:
    // Add small delay (200–500ms)
}
