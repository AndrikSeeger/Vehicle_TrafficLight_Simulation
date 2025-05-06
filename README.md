<!--Copyright Andrik Seeger 2022-->
# 🚦 Vehicle Traffic Light Simulation with ETAS ASCET

This project showcases a simulation of vehicle behavior and traffic light interaction using **ETAS ASCET** – a professional tool for model-based development of embedded systems. The simulation focuses on optimizing driver strategies to reduce stops at traffic signals by adjusting speed intelligently.

---

## 🛠️ Project Overview

* **Simulation Tool**: [ETAS ASCET](https://www.etas.com/) (Advanced Simulation and Control Engineering Tool)
* **Scenario**: Combination of city and rural road segments with multiple signalized intersections
* **Goal**: Minimize stops at red and yellow lights by adjusting speed in advance, simulating efficient and predictive driving strategies

---

## 📁 Repository Structure

* `Source/` – ASCET project source files
* `Ressources/` – Additional resources (e.g. figures or config files)
* `Documentation.pdf` – Project documentation and explanation of logic and structure
* `TrafficLightProject.zip` – Complete ASCET project (to import into ETAS ASCET)
* `TrafficLightProject_CGen.zip` – Code-generated variant for deployment

---

## 🚀 Getting Started

1. **Download the project**
   
   Clone the repository or download the provided `.zip` archive.

2. **Open in ASCET**
   
   Launch **ETAS ASCET** and import the unzipped project directory.

3. **Run the simulation**
   
   Navigate to `TrafficLightProject/experiments/Experiments/system/PC_Final`
   Start the `PC_App` experiment to launch the simulation.

4. **Observe and analyze**
   
   Use the graphical interface to view:

   * Vehicle speed profiles
   * Signal states
   * Acceleration behavior in response to traffic light changes

 *Example:* 
 <p align="center">
<img src="https://github.com/AndrikSeeger/Vehicle_TrafficLight_Simulation/blob/main/Ressources/Experiment_Environment.png"/>
</p>

---

## 🔍 Features

* 🟢 **Real-time traffic light simulation** with dynamic timing and configurable positions
* 🚗 **Driver strategy modeling** to maintain speed and minimize braking
* 🛣️ **Mixed road environment**: urban and rural segments
* 📈 **Visual feedback** of system state, vehicle response, and light timing

---

## 🧪 Use Case

This simulation is ideal for:

* Testing autonomous or predictive cruise control algorithms
* Studying human-like driving strategies
* Demonstrating how traffic flow can be improved by smarter speed management

---

## 👥 Additional Contributors

* Thomas Tran
* Tom Schubert

---

*Note: This simulation is intended for educational and experimental use with ETAS ASCET. It is not a production-grade traffic control system.*
