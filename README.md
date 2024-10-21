# Shape Shifter Gameplay Mechanic C++ Version[^1]
[^1]: This is a part of a templated game jam

The mechanic in its current state functions by using a Data Asset that contains an array of the player forms struct.
This struct contains a form ID (string) and a form (class reference to a child class of the PlayerBase BP).
When the player Shape Shifts (using the F key) **it cycles to the next player form within the array.** 
The Player stats struct is basic struct containing a Health (float), MaxHealth (float), Attack (float), and Player State (enum).
Player state currently holds no function other than some possible examples. *However*, please feel free to entirely remove this if you desire.
**The main mechanic that must persist in at least some form is the Shape Shifting mechanic**

## C++ Version Note:
I highly encourage you to use the C++ version for the game jam. If you are unfamiliar with source control of C++ projects in UE5
then there are a few steps to take after you download the files.

1. Generate VS files by right-clicking the .uproject file and selecting generate project files.
2. Once generated open up the VS file and do a build of the project.

If you do those two steps **before** opening up the .uproject then you shouldn't have any issues.
It is also worth noting that there are comments within the C++ code that help to explain the process of how the mechanic functions within C++.
Once again, you **do not** have to leave all of this as is. Feel free to alter any of the logic behind the mechanic.
What's important is the mechanic itself and how you use it in your game.
Its up to you and/or your team to decide if it is necessary or beneficial to change the logic of how the mechanic works.
