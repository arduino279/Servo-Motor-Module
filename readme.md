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
ServoMotor [name] = { int servo };
```
**Parameters**

* `[name]` Any name without spaces
* `servo` Pin of the servo
* `angle` Angle to rotate

**Example**

```ino
ServoMotor example = 9;
```

### Use

#### Attach

```ino
Servo.attach(int pin);
```

**Parameters**
* `Servo` Name of the defined `Servo` class
* `pin` Pin of the Servo

#### Move

```ino
Servo.move(int angle);
```

**Parameters**
* `Servo` Name of the defined `Servo` class
* `angle` Angle to rotate

**Example**

```ino
example.move(example);
```
