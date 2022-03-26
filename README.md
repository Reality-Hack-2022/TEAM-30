## Inspiration
Our team wanted to build a more fun and intuitive way of teaching younger students how to build basic circuits with Arduino. 

## The three primary functions of ARRR.duino are:

**Learn the basics:**
Users will meet Captain Duino, a pirate who will walk them through the steps of wiring a simple LED circuit. Through this process, they will learn how to control our node-based AR circuit design tool while also gaining an intuitive understanding of circuitry concepts like the need too add in resistors for LEDs. After creating a wiring diagram, Captain Duino will show you how uploading different code to the Arduino can be used to create different effects.

**Design Custom Circuits:**
Our AR circuit design tool is as powerful as it is easy-to-use. Users can wire together various hardware components like LEDs and resistors using a node-based connection system. The connection environment is dynamic and responsive, using visual cues to highlight active nodes and drag-and-drop wiring between nodes. This system is based on traditional breadboard architecture but uses the affordances of Augmented Reality to make the process more natural and intuitive. Small menus placed above components will allow users to adjust certain properties of their hardware while watching the code change in real-time.

**Create in real life!**
Once you have designed a circuit in AR, the system can now “translate” that circuit into a photorealistic volumetric model of an actual Arduino and breadboard. This model will have accurate wiring and can be used as a reference when wiring together real hardware. You can also email yourself all of the corresponding code, allowing you to copy-and-paste a custom program right into the Arduino IDE. 
   
## Demo Video Youtube Link
https://youtu.be/v_sWCQ5fHtI

## How we built it
ARRR.duino was built in _Unity 2020 3.28_ using the **Microsoft Mixed Reality Toolkit (MRTK)** allowing it to be a cross-platfrom AR experience.

The demo will be running on the Microsoft HoloLens 2 

The circuit logic is being accurately simulated using the [SPICE] (https://www.ultralibrarian.com/2020/07/08/spice-model-library-for-easy-integration-and-simulation-ulc) Library

The character rigging and animation was done in Unreal Engine 5 

## Challenges we ran into
None of us have our own Windows computers so we had to do all of the development work on borrowed hardware that we weren't very familiar with.

We also ran into serious internet connection issues, there were multiple hours in which we couldn't connect to the wifi at all. 

During the rigging and animation of our pirate character, we struggled to make a stale connection between a smartphone and Unreal Engine. Even once we did animate everything correctly, we struggled to export our animation as an FBX for Unity and had to resort to using a 2d video asset instead.

## Accomplishments that we're proud of
We built a system that **truly takes advantage of what Augmented Reality and MRTK can do**. The interactions were designed from the ground up with AR in mind and the system's integration with real hardware creates an experience that **highlights how XR can be a powerful platform for innovative tools that provide new ways create and educate.**

The circuit design interface is **designed to build transferable skills** as opposed to platform reliance. Our node-based system is highly dynamic and actively provides feedback during the circuit design process but it is still built on the same basic architecture as a traditional breadboard so that any **familiarity with our system will be directly transferable to to real life hardware. **

## What we learned

Our team had limited knowledge of MRTK before this project and we learned a lot about designing and developing for this platform. The entire UX design needed to consider the functionality of MRTK and build a system that plays to the strengths of the platform. 

We also learned valuable skills regarding how to scope and pivot a complex MR project during such a limited production timeframe. We effectively navigated the difficult constraints of an event like this and build a functional demo that captures the essence of what ARRR.duino could be in the future. 

## What's next for ARRR.duino

Given more development time, we would implement a GUI-based visual scripting system that would allow users to make simple software changes to their circuit and then export that code directly to their email.

There are also many simple UX/UI details that could smooth out our experience as a whole and more effectively accomplish our goal of building a simple yet powerful circuit design tool
