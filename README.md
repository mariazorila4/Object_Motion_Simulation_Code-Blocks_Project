# Object_Motion_Simulation_Code-Blocks_Project
This project simulates the motion of an object in a 2D plane, taking into account factors like velocity, angle of launch, mass, and the calculation of kinetic and potential energy. The object moves according to the laws of physics, and the results are displayed in real-time on a graphical interface. The simulation uses C++ and the graphics.h library, allowing for visual representation of the object's motion in relation to its position on the x and y axes.

## **Project Overview**
 The purpose of the project is to simulate the motion of an object under various physical conditions, such as velocity, angle, and mass. The main physics concepts involved are:

**1.Velocity - v**: The speed at which the object moves. It is influenced by the force applied to the object and the angle of launch.

**2.Angle - alpha**: The direction in which the object is launched, affecting the trajectory of its motion.

**3.Mass - m**: The amount of matter the object contains, which affects its energy and motion.

**4.Kinetic Energy - Ec**: The energy the object has due to its motion. It is calculated using the formula:
         __Ec=(m*v^2)/2__, 
where m is the mass and v is the velocity of the object.

**5.Potential Energy - Ep**: The energy the object possesses due to its position relative to a reference point (usually the ground or the starting point). It is calculated as:
         __Ep=mgh__, 
where m is the mass, g is the gravitational acceleration (approximately 9.81m/s^2), and h is the height of the object relative to the reference point.

These calculations and the resulting values are displayed in real-time, showing how the energy envolves as the object moves.

### **Velocity, Angle, and Mass Ranges for Normal Motion**

For normal motion, the velocity should be between 5 m/s and 100 m/s. Too low a velocity results in no movement, while too high causes the object to exit the window too quickly. The angle should be between 0° and 90°, with 45° being ideal for maximum range. Angles close to 0° or 90° result in short or vertical trajectories. The mass should range from 0.1 kg to 100 kg, as mass affects energy calculations but not the trajectory itself.

**Conditions for object to land exactly at the end of the window**: For the object to land exactly at the end of the window, the velocity should be 9.75 m/s, the angle 45°, and the mass 9.15 kg. These values ensure the object follows a proper trajectory and lands precisely at the simulation window's edge.

## Technologies used

- **App**: Code::Blocks - version 20.03

## How to use

### Prerequisites:

- Code::Blocks installed and configured.

### Steps to run:

- Run script: *ATESTAT.cbp* and *Atestat Zorila Maria Cristina finalizare.c*.
- Select *Open an existing project* and tap on the folder that contain the project.
- Go to *Settings->Compiler->Toolchain executables* then choose *ATESTAT.exe* for *C compiler, C++ compiler, Linker for dynamic libs, Linker for static libs, Resource compiler and Make program*, and for *Debbuger* choose *GDB/CDB debugger : Default.*
- Then press *Debug* and introduce the velocity, angle and mass and press *enter*.

# Future Improvements

(to be added in the future updates)
