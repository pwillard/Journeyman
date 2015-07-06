{frontmatter}

# Introduction

Here is what I assume you already know. 

* That Arduino is a platform for prototyping interactive objects using electronics. 

* That Arduino comes from a philosophy of learning by doing and strives to make it easy create projects. 

* That "learning by doing" is how *you* will gain expertise.

* That you understand the basic concepts of the "write-compile-upload-debug-enjoy" process related to embedded programming   

We will discuss more than just the specific electronics needed for you to make the designs presented here, and more than just the basic programming techniques you would use when just getting started. 


## Why this book exists

I've always found it puzzling that so many books and resources cover the same introductory material over and over again as it creates the impression that all the other resources for beginners are lacking somehow.  Of course the goal in *that* case is to provide the proper foundation for the information that will follow but going over Arduino basics will not be the focus here, since it can get repetitive and dull when the reader is no longer a complete novice.

So, we are going to jump middle of it all and get right into talking about the details of software coding, build a skill set of electronic concepts and develop a comfort with intermediate level projects.

This will result in some basic *Arduino* concepts that will be skipped entirely.  Some information will be provided as handy reference but if it's covered in any of the "getting started" guides, it might not be here.


## Who it is for

In the title, I used the words journeyman and technician.  I feel that these two words define who this document is aimed at.  A journeyman is a term used to describe someone who has finished their apprenticeship and can be trusted to take on tasks with less supervision.  A technician is a term used to describe someone who can comfortably work with tools, processes and documents to go from a set of plans into realization.  

So the ideal reader is someone who can already use the *Arduino* IDE and write some code without fear. The reader is willing to learn about some history, some hardware and some software techniques that will all stray out of the comfort zone. 

## What will be learned

Here is a list of some of the learning goals;

*   Examine some lesser known details of Arduino

*   See some of the recent and improvements to the IDE

*   Learn how to draw good schematic diagrams

*   Understand how some electronics components work and why they exist

*   Experience some basic concepts of good circuit design

*   Learn to go far beyond making LED's blink, with confidence.



## Learning Approach

This book is divided into to two basic parts.  The first part discusses some useful background and historical information and the second part will build on this background to work on developing advanced skills using projects. You will learn *how* to design better projects on your own, not blindly piece together solutions from the pictorial diagrams of others.  The pictorial approach is fine for those just starting out, but beginners are not the target reader.  The goal here is to learn how to design, plan and even share your ideas with others.  You will learn that the common language in electronic design is a schematic diagram and for this reason, we will be using schematic diagrams to clearly document designs.

The Arduino "way" of doing things is designed to make the "hard" things about embedded programming easier, but there is no reason that *your* designs need to be simplistic. This is an art that you can learn about and enjoy if you are willing to experiment and learn more complex skills to allow your creativity to become reality.  

I'm not trying to make you into an engineer, or the kind of person able to do a page full of calculations just to figure out the frequency of a two transistor oscillator. I want to help refine your skills at technician level so you can pioneer new design ideas with confidence. 

Additionally, I will help address a common problem that occurs when someone overestimates their ability and tackles a problem without the skills to support a successful result.  In these cases, you *will* learn something from failure but it is important to have the failure not shake your confidence but rather  you re-assessing your understanding and to create a willingness to fill in the gaps in your skills.



## Some of What you will need

This book will focus on using the most basic Arduino board, the Aduino Uno.  While other boards may be discussed, all of the techniques and projects should work with the  *Arduino* *Uno* or *Nano* unless a particular development board's characteristics are being used. Also, a collection of sensors, discrete components and integrated circuits will be employed in projects.


### General Recommended Parts List for Experimentation;

|Part       | Type      | Information               |
|===========|===========|===========================|
| 2N2222A   | NPN       | BJT 600-800 mA            |
| 2N7000    | N-Channel | MOSFET 300 mA             |
| 2N3904    | NPN       | BJT 200 mA                |
| TIP120    | NPN       | BJT Darlington Pair 5 Amp |
| 220 Ohm   | Resistor  | 1/4 Watt                  |
| 1000 Ohm  | Resistor  | 1/4 Watt                  |
| 4.7K Ohm  | Resistor  | 1/4 Watt                  |
| 10K Ohm   | Resistor  | 1/4 Watt                  |
| 100K Ohm  | Resistor  | 1/4 Watt                  |
| 22 pF     | Capacitor | Ceramic Disc              |
| 0.1 uF    | Capacitor | Ceramic                   |
| 1 uF      | Capacitor | Electrolytic 16 Volt      |
| 10 uF     | Capacitor | Electrolytic 16 Volt      |
| 100 uF    | Capacitor | Electrilytic 16 Volt      |
| 1N4001    | Diode     | Rectifier 1 Amp           |
| 1N4148    | Diode     | Small Signal              |
| LM358     | OP AMP    | or similar                |
| TLC272    | OP AMP    |                           |
| LM317     | Regulator | Adjustable                |


### Sensor Parts List Recommendations

|Part       | Type      | Information               |
|===========|===========|===========================|
| DS18B20   | Temp      | 1 Wire Temperature Sensor |
| TMP36     | Temp      | Analog Temperature Sensor |

### Arduino compatible devices

|Part       | Type      | Information                      |
|===========|===========|==================================|
| UNO R3    | Stackable | The most basic Arduino           |
| Nano      | Breadboard| Solderless Breadboard Compatible |
| Teensy    | Breadboard| Advanced Arduino Compatible      |


Your workshop (or dining room table) does not need to be equipped like an engineering lab in order for you to be successful as an experimenter.



#### Cover Image

*Woman Aircraft worker, Vega Air*    
Library of Congress

**Bransby, David, photographer**
 
|  Title                                                                                               | Date     |
|======================================================================================================|=========|
|Woman aircraft worker, Vega Aircraft Corporation, Burbank, Calif. Shown checking electrical assemblies|  1942 June|