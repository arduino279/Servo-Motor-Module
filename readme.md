![Uploading Servo Motor Module (3).svg…]()


1. Look up `Servo-Motor-Module` in the Library Manager and install the latest version
2. Insert the following snippet
 
```ino
#include <Servo-Motor-Module.h>
```

### Setup

```ino
Servo2 [name];
```
**Description** *No Description available*

**Parameters**
* `[name]` Any name without spaces

**Example**
```ino
Servo2 example;
```

### Use

```ino
[Name].attach(int pin);
```
**Description** *No Description available*

**Parameters**
* `[Name]` Name of the defined `Servo` class
* `pin` Pin of the Servo

---

```ino
[Name].move(int angle);
```
**Description** *No Description available*

**Parameters**
* `[Name]` Name of the defined `Servo` class
* `angle` Angle to rotate

**Example**
```ino
example.move(6);
```
