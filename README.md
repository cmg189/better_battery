## Better Battery

Better Battery is a creative way to use GitHub for tracking the remaining charge of batteries.

## Table of Contents

1. [Description](#description)
2. [Acknowledgements](#ack)
3. [Technologies](#tech)
4. [Process Overview](#process)
5. [Circuit](#circuit)
6. [Future Work](#future)

## Description <a name="description"></a>

One of GitHub's main features is the ability to track any changes made in code repositories.

The theme of tracking changes has inspired me to think outside the box and come up with a creative way to use GitHub.

One question I asked myself is _What things do I care to track changes over time?_

As I used my phone to try and conjure up ideas, I noticed my battery was about to die.

Then it hit me, **Batteries!**

Better Battery utilizes GitHub to track the remaining charge in batteries over time so that anyone can better their understanding of battery utilization!

## Acknowledgements <a name="ack"></a>

<img align="center" alt="award" height= "250" width="1100" src="images/award.PNG"/>

Better Battery won 1st place at the University of North Texas `22 NSBE Hackathon in the

*Most Creative Use of GitHub* challenge!


## Technologies <a name="tech"></a>

Better Battery was built by using a number of different technologies:

- An Arduino Nano for taking input of battery voltage

- GitHub for tracking the changes of a batteries power

- Python for communication between the host computer and the Arduino

- Bash for automation of commits and pushes to GitHub

## Process Overview <a name="process"></a>

This process begins by:

1. Executing a bash script that will sleep for 30 seconds
2. Arduino reading in the voltage of a battery from the circuit
3. Python script to write the voltages to a file
4. Bash script wakes up to perform the git add, commit, and push to github

<img align="center" alt="process" height= "350" width="1100" src="images/process.png"/>

*Execution flow of processes for better battery*

## Circuit <a name="circuit"></a>

<img align="center" alt="circuit" height= "500" width="500" src="images/circuit.png"/>

*10K Ohm resistor connected to A0 pin and common ground*

**Note:** Circuit can accommodate up to 5 volts

## Future Work <a name="future"></a>

Future improvements for Better Battery are:

- Improved UI for user's to visualize their battery's remaining change

- Implement a wider range of batteries to test

- Faster testing platform
