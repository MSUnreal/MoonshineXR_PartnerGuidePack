# MoonshineXRPluginLite User Guide

MoonshineXRPlugin is created by Moonshine Tech Team.
The Lite version of this plugin contains the following features:
- Scene performance checker
- Previs tool

Latest Version: 1.3.0

---

## Plugin Installation
1. Navigate to the Plugins folder inside your project folder, and add MoonshineXRPlugin folder here.

![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_000.png?raw=true)
   > If there is no Plugins folder, create a new one and place the plugin in there.

2. Launch the project, navigate to the Plugins panel and make sure MoonshineXRPlugin is enabled. 
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_001.png?raw=true)
   > MoonshineXRPlugin should be enabled by default once it gets placed properly.

---

## Features

### Scene Performance Checker
> This feature is used to make sure the performance of a scene roughly meets the performance requirement of Moonshine XR Studio during scene building process.

1. Locate a **NDC** (nDisplay Config) asset in the following directory, and place it in your scene.
   Multiple NDCs of other LED volumes of Moonshine XR Studio are also provided in the same location.![[Pasted image 20230428164503.png]]
2. Select the NDC Actor (NDC_StudioA in this case), navigate to Details Panel and enable **Editor Preview**.
   
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_003.png?raw=true)
   
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_004.png?raw=true)
   
3. Enable **Show FPS** under viewport options. Make sure the framerate is no lower than <font style="color: #00ff88">40~50+ FPS</font>. Disable Editor Preview after a performance test if needed.
   
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_005.png?raw=true)
   > Running performance tests on a regular basis during creative process is adviced.
   

---

### Previs Tool
> This tool is designed to simulate the studio, including the volume, and to help  determining if the design of a shot is doable .

#### Available Tracking Volume
>Inside Moonshine XR studio, we have two camera tracking systems options for different scenarios: HTC Mars and Mo-Sys StarTracker.

##### HTC Mars
> Benefitting from its on-camera tracking device "Rover" being easy to install, HTC Mars solution is mostly used for ICVFX projcts. The available tracking area is defined by four Base Stations within a volume of approximately 9m×9m×4m. Base Stations can be placed within the blue lines as the the following diagram shows. 
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_006.png?raw=true)
##### Mo-Sys
> Mostly used for ICVFX and Extended Reality (XR) projects in Moonshine XR Studio, benefitting from its stability of tracking data and lens encoders. The available tracking area is defined by the coverage of retro reflective stickers on the ceiling. Current available Mo-Sys tracking area is approximately 11.8m x 15.1m with a height limit of 4m.
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_007.png?raw=true)

#### Place Previs Tool in Your Scene
1. Drag and drop BP_StudioA_Previs for Content Broswer into your level to simulate the location of the physical stage and the volume inside your virtual environment.
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_008.png?raw=true)
   
2. Place a Cine Camera Actor in the level where the physical camera will be relative to the volume, and fill in Filmback values of the physical camera.
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_009.png?raw=true)
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_010.png?raw=true)
   > Filmback: The Sensor Size of the camera. For example, the Sensor Size of a BMD 4.6 is **25.34 x 14.25 mm**.
   
3. Inside World Outliner, attach the Cine Camera Actor to BP_StudioA_Previs actor. Select the target camera in Details Panel. ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_011.png?raw=true)
4. Start Play in Editor mode then <font style="color: #00ff88">press F11 for full screen</font>, and you will be viewing through the Previs Camera. More camera info will be provided at the bottom of the viewport.
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_012.png?raw=true)
   
5. You can take screenshots or record the screen in this mode for previs shots.
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_013.png?raw=true)
   
##### Details Panel: Additional Settings
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_014.png?raw=true)

>Press G to enter Game View mode in viewport.

**<font style="color: #00ff88">Global</font>**
Hide All
	Hide the both stage and volume.

Hide Stage
	Hide stage only.
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_015.png?raw=true)

**<font style="color: #00ff88">LED M / LED L / LED R / LED T</font>**
Hide LED
	Hide LED areas seperately.

Show Debug Material
	<font style="color: #00ff88">Green</font> indicates safe area while <font style="color: #ff0000">Red</font> areas are for the opposite.

>In the following images, red areas indicates the LED ceiling. Due to the physical seam between LED walls and the ceiling, including the LED ceiling inside the frustum is not recommanded in most cases.
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_016_en.png?raw=true)
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_017_en.png?raw=true)

Debug Material
	Materials can be replaced with green or red ones to match your project's requirements. For example, if you only need M area inside the frustum, then the materials of L/R/T can be replaced with red ones.
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_018.png?raw=true)



#### Add Talent Model to Your Scene
1. The talent model can be found under the following path: 
	`Plugins/MoonshineXRPlugin Content/Basic/Previs/Assets/Mark`.
   > The height of this model is 176cm.
   
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_019.png?raw=true)
2. Drag and drop the talent model into your level and place it where the actual talents might be on the stage. 
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/UserGuide/_Attachments/Img_MSXRPluiginUserGuide_020_en.png?raw=true)
