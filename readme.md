# Servo Motor Module

[![](https://img.shields.io/badge/Available_in_the_Arduino_Library_Manager-2ea44f)](<Link>)

## Get Started

**Import**

1. Look up `Servo-Motor-Module` in the Library Manager and install the latest version
2. Insert the following snippet
 
```ino
#include <Servo-Motor-Module.h>
```

**Setup**

```ino
Servo name = { int servo, int angle };
```
**Parameters**

* `name` Any name without spaces
* `servo` Pin of the servo
* `angle` Angle to rotate

**Example**

```ino
Servo example = {9, 27};
```

**Use**

```ino
Servo.move(Servo i, int angle);
```

**Description** Move the Servo

**Parameters**
* `i` Name of the defined `Servo` class
* `angle` Angle to rotate
