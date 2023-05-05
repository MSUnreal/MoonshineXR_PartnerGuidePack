# MoonshineXR_PartnerGuidePack

### Plugins/MoonshineXRPluginLite

>This is a Unreal Engine plugin that we created to help our partners to test the level performance and visualize their work within our virtual LED volume.
* Scene performance testing
* Previs tool

[MoonshineXRPluginLite_User_Guide_EN_1.3.0.md](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/Plugins/MoonshineXRPluginLite_User_Guide_EN_1.3.0.md)

### ICVFX_Level_Design_Guidelines_EN_1.1.0.md
>To work collaboratively with our partners to produce better scene quality, we kindly ask our partners to refer to the level design guidelines specifications established by MoonshineXR for ICVFX projects.

[ICVFX_Level_Design_Guidelines_EN_1.1.0.md](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/ICVFX_Level_Design_Guidelines_EN_1.1.0.md)

<br>
1. Please place the project in the folder named [ProjectName] preceded by an underscore, for example: GenericVPXR -> _GenericVPXR

2. Prefix the scene name with an underscore, for example: OutDoorScene.umap -> _OutDoorScene.umap

3. Organize the scenes into different folders based on their names, and translate the names into English. Folder structure example:

~~~
|-- Content
    |-- _GenericVPXR <---(Project Name)                         
        |-- OutDoorScene <---(Scene: Outdoor scene)
        |   |-- Maps  
        |   |   |-- _OutDoorScene.umap  
        |   |   |--OutDoorScene_Light.umap  
        |   |   |--OutDoorScene_Props.umap  
        |-- NatureEnv <---(Scene: Nature scene)                               
        |   |-- Maps                               
        |   |   |-- _NatureEnv.umap                               
        |   |   |-- NatureEnv_Light.umap                               
        |   |   |-- NatureEnv_Props.umap                               
        |-- Office <---(Scene: Office)  
        |   |-- Maps  
        |   |   |-- _Office.umap  
        |   |   |--  Office_Light.umap  
        |   |   |--  Office_Props.umap  
~~~

4. Please provide the necessary information regarding Sequencer, Blueprint, Niagara System, Alembic, time control, special requirements, etc. inside a Readme.txt file located in the project folder, so that the Dreamtech execution team is informed.

<br>
<br>

# MoonshineXR_合作夥伴_製作規範

### Plugins/MoonshineXRPluginLite

>這是我們創建的一個Unreal Engine插件，旨在幫助我們的合作夥伴測試場景的效能並在我們的虛擬LED空間中視覺化他們的作品
* 場景效能檢測
* Previs模擬工具

[MoonshineXRPluginLite_使用說明_中文_1.3.0.md](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/Plugins/MoonshineXRPluginLite_%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8E_%E4%B8%AD%E6%96%87_1.3.0.md)

### ICVFX_場景設計_規範_中文_1.1.0.md
>為了與合作夥伴們一同協力製作出更好的場景品質，請合作夥伴參照 MoonshineXR 為ICVFX類型的專案訂定的場景設計製作規範

[ICVFX_場景設計_規範_中文_1.1.0.md](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/ICVFX_%E5%A0%B4%E6%99%AF%E8%A8%AD%E8%A8%88_%E8%A6%8F%E7%AF%84_%E4%B8%AD%E6%96%87_1.1.0.md)

<br>
1. 請將專案放在【_專案名稱】資料夾下，舉例: GenericVPXR -> _GenericVPXR

2. 場景名稱前請加 '_' , 舉例: OutDoorScene.umap -> _OutDoorScene.umap

3. 請將場景依照場景名稱 (註: 請翻譯成英文)，分成不同資料夾
	資料夾架構舉例:

~~~
|-- Content
    |-- _GenericVPXR <---(專案名稱)                         
        |-- OutDoorScene <---(場景: 室外景)
        |   |-- Maps  
        |   |   |-- _OutDoorScene.umap  
        |   |   |--OutDoorScene_Light.umap  
        |   |   |--OutDoorScene_Props.umap  
        |-- NatureEnv <---(場景: 自然景)                               
        |   |-- Maps                               
        |   |   |-- _NatureEnv.umap                               
        |   |   |-- NatureEnv_Light.umap                               
        |   |   |-- NatureEnv_Props.umap                               
        |-- Office <---(場景: 辦公室)  
        |   |-- Maps  
        |   |   |-- _Office.umap  
        |   |   |--  Office_Light.umap  
        |   |   |--  Office_Props.umap  
~~~

4. 請將場景內需要使用的Sequencer、Blueprint、Niagara System、Alembic、時間控制、特殊需求等等資訊，撰寫在專案資料夾內的Readme.txt文件，告知夢想技術執行團隊。


<br>
