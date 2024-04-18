# Servo Motor Module

[![](https://img.shields.io/badge/Available_in_the_Arduino_Library_Manager-2ea44f)](https://www.arduino.cc/reference/en/libraries/engine-control/)

## Get Started

### Import

1. Look up `Servo-Motor-Module` in the Library Manager and install the latest version
2. Insert the following snippet
 
```ino
#include <Servo-Motor-Module.h>
```

### Setup

```ino
Servo2 [name];
```

**Example**
```ino
Servo2 example;
```

### Use

```ino
[name].attach(int pin);
```

**Parameters**
* `pin` Pin of the Servo


```ino
[name].move(int angle);
```

**Parameters**
* `angle` Angle to rotate

**Example**
```ino
example.move(6);
```
