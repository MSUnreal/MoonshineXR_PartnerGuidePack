# MoonshineXRPluginLite User Guide

MoonshineXRPlugin is created by Moonshine Tech Team.
The Lite version of this plugin contains the following features:
- Scene performance checker
- Previs tool

> [!success]- Latest Version: 1.3.0

---

## Plugin Installation
1. Navigate to the Plugins folder inside your project folder, and add MoonshineXRPlugin folder here.
   ![[Pasted image 20230428165010.png]]
   > If there is no Plugins folder, create a new one and place the plugin in there.

2. Launch the project, navigate to the Plugins panel and make sure MoonshineXRPlugin is enabled. ![[Pasted image 20230428165109.png]]
   > MoonshineXRPlugin should be enabled by default once it gets placed properly.

---

## Features

### Scene Performance Checker
> This feature is used to make sure the performance of a scene roughly meets the performance requirement of Moonshine XR Studio during scene building process.

1. Locate a **NDC** (nDisplay Config) asset in the following directory, and place it in your scene.
   Multiple NDCs of other LED volumes of Moonshine XR Studio are also provided in the same location.![[Pasted image 20230428164503.png]]
2. Select the NDC Actor (NDC_StudioA in this case), navigate to Details Panel and enable **Editor Preview**.
   ![[Pasted image 20220720153058.png]]
   ![[Pasted image 20220720160137.png]]
   
3. Enable **Show FPS** under viewport options. Make sure the framerate is no lower than <font style="color: #00ff88">40~50+ FPS</font>. Disable Editor Preview after a performance test if needed.
   ![[Pasted image 20230428170225.png]]
   > Running performance tests on a regular basis during creative process is adviced.
   

---

### Previs Tool
> This tool is designed to simulate the studio, including the volume, and to help  determining if the design of a shot is doable .

#### Available Tracking Volume
>Inside Moonshine XR studio, we have two camera tracking systems options for different scenarios: HTC Mars and Mo-Sys StarTracker.

##### HTC Mars
> Benefitting from its on-camera tracking device "Rover" being easy to install, HTC Mars solution is mostly used for ICVFX projcts. The available tracking area is defined by four Base Stations within a volume of approximately 9m×9m×4m. Base Stations can be placed within the blue lines as the the following diagram shows. 
![[mars.png]]
##### Mo-Sys
> Mostly used for ICVFX and Extended Reality (XR) projects in Moonshine XR Studio, benefitting from its stability of tracking data and lens encoders. The available tracking area is defined by the coverage of retro reflective stickers on the ceiling. Current available Mo-Sys tracking area is approximately 11.8m x 15.1m with a height limit of 4m.
![[Mosys追蹤範圍_230502.png]]

#### Place Previs Tool in Your Scene
1. Drag and drop BP_StudioA_Previs for Content Broswer into your level to simulate the location of the physical stage and the volume inside your virtual environment.
   ![[Pasted image 20230303163300.png]]
   
2. Place a Cine Camera Actor in the level where the physical camera will be relative to the volume, and fill in Filmback values of the physical camera.
   ![[Pasted image 20230428172606.png]]![[camera 1.png]]
   > Filmback: The Sensor Size of the camera. For example, the Sensor Size of a BMD 4.6 is **25.34 x 14.25 mm**.
   
3. Inside World Outliner, attach the Cine Camera Actor to BP_StudioA_Previs actor. Select the target camera in Details Panel. ![[Pasted image 20230303173719.png]]
4. Start Play in Editor mode then <font style="color: #00ff88">press F11 for full screen</font>, and you will be viewing through the Previs Camera. More camera info will be provided at the bottom of the viewport.
   ![[Pasted image 20230306113036.png]]
   
5. You can take screenshots or record the screen in this mode for previs shots.![[Pasted image 20230306145322.png]]
   
##### Details Panel: Additional Settings
![[Pasted image 20230303180518.png]]

>Press G to enter Game View mode in viewport.

**<font style="color: #00ff88">Global</font>**
Hide All
	Hide the both stage and volume.

Hide Stage
	Hide stage only.
![[Pasted image 20230303182055.png]]

**<font style="color: #00ff88">LED M / LED L / LED R / LED T</font>**
Hide LED
	Hide LED areas seperately.

Show Debug Material
	<font style="color: #00ff88">Green</font> indicates safe area while <font style="color: #ff0000">Red</font> areas are for the opposite.

>In the following images, red areas indicates the LED ceiling. Due to the physical seam between LED walls and the ceiling, including the LED ceiling inside the frustum is not recommanded in most cases.
![[PrevisTool_02_eng.png]]
![[PrevisTool_eng.png]]

Debug Material
	Materials can be replaced with green or red ones to match your project's requirements. For example, if you only need M area inside the frustum, then the materials of L/R/T can be replaced with red ones.
![[Pasted image 20230303184619.png]]



#### Add Talent Model to Your Scene
1. The talent model can be found under the following path: `Plugins/MoonshineXRPlugin Content/Basic/Previs/Assets/Mark`.
   > The height of this model is 176cm.
   
   ![[Pasted image 20230303185258.png]]
2. Drag and drop the talent model into your level and place it where the actual talents might be on the stage. ![[PrevisTool_03_eng.png]]