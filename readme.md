# Servo Motor Module

[![](https://img.shields.io/badge/Available_in_the_Arduino_Library_Manager-2ea44f)](<Link>)

## Get Started

### Import

1. Look up `Servo-Motor-Module` in the Library Manager and install the latest version
2. Insert the following snippet
 
```ino
#include <Servo-Motor-Module.h>
```

### Setup

```ino
ServoMotor [name];
```
**Description** *No Description available*

**Parameters**
* `[name]` Any name without spaces

**Example**
```ino
ServoMotor example = 9;
```

### Use

```ino
Servo.attach(int pin);
```
**Description** *No Description available*

**Parameters**
* `Servo` Name of the defined `Servo` class
* `pin` Pin of the Servo

---

```ino
Servo.move(int angle);
```
**Description** *No Description available*

**Parameters**
* `Servo` Name of the defined `Servo` class
* `angle` Angle to rotate

**Example**
```ino
example.move(6);
```
