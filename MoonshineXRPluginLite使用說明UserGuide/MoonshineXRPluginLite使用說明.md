# MoonshineXRPluginLite使用說明

此外掛為夢想技術團隊開發，Lite版本包含以下功能：
- 場景效能檢測
- Previs模擬工具

Latest Version: 1.3.0

---

## 安裝Plugin
1. 將MoonshineXRPluginLite資料夾放入專案資料夾下的Plugins資料夾。
   
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_000.png?raw=true)
   > 若專案資料夾下無Plugins資料夾，可自行創建此資料夾。

2. 開啟專案後，至Plugins視窗確認MoonshineXRPlugin已開啟。
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_001.png?raw=true)

---

## 功能使用說明

### 效能檢測
> 此工具用於協助Artist在製作場景時，能大略地確認場景效能是否符合Moonshine XR Studio效能需求。

1. 在場景中加入NDC。
   可以根據在MoonshineXR Studio的不同攝影棚，選擇其他NDC。![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_002.png?raw=true)
2. 選擇NDC後，到Detail面板，開啟Editor Preview。
   
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_003.png?raw=true)
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_004.png?raw=true)
   
3. 點選Viewport左上角，開啟Show FPS。
   確認開啟Preview後的FPS至少有<font style="color: #00ff88">40~50+ FPS</font>，測試完成後可以關閉Preview。
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_005.png?raw=true)
   > 建議在製作場景的過程中，不時開啟NDC Preview以確認場景效能是否維持在<font style="color: #00ff88">40~50+ FPS</font>。
   

---

### Previs 工具
> 此工具用於模擬硬體環境限制中，可行的拍攝畫面。

#### 拍攝範圍限制
>目前MoonshineXR攝影棚內有兩套追蹤系統，分別是HTC Mars與Mosys，根據拍攝需求會選擇不同的系統，以下是限制說明。

##### HTC Mars
> 由於此套設備的追蹤器Rover較易於拆裝，HTC Mars經常用於VP拍攝，追蹤範圍是根據Base Station的位置決定，範圍最大可以到9m×9m×4m。Base Station可以設置在下圖的藍色區域內。
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_006.png?raw=true)
##### Mosys
> 可用於VP類型專案，也因具有較穩定的追蹤及lens encoder，Mosys更常用於拍攝XR類型專案。有效的追蹤範圍由貼於天花板上的反光貼紙範圍界定，目前棚內的追蹤範圍約為11.8m x 15.1m，高度限制約為4m。
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_007.png?raw=true)

#### 將Previs工具加入場景
1. BP_StudioA_Previs放入場景中，模擬真實舞台與LED牆在虛擬場景中的位置。
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_008.png?raw=true)
   
2. 新增一台模擬拍攝位置的攝影機（選擇Cine Camera），把攝影機的Focal length與Filmback調整為真實攝影機的參數。
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_009.png?raw=true)
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_010.png?raw=true)
   > Filmback：指的是攝影機的Sensor Size，例如BMD 4.6K的Sensor Size為**25.34 x 14.25 mm**，就填入相同數字。
   
3. 設定完成後，把攝影機拖曳到BP_StudioA_Previs下方，成為BP_StudioA_Previs的子級。點擊BP_StudioA_Previs，把Previs Camera選到模擬拍攝用的虛擬攝影機。![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_011.png?raw=true)
4. Play in Editor後，<font style="color: #00ff88">按F11進入全螢幕模式</font>，即可看到模擬畫面，畫面下方會顯示當前攝影機的資訊。
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_012.png?raw=true)
   
5. 最後使用螢幕截圖與螢幕錄影出Previs畫面。![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_013.png?raw=true)
   
##### Details Panel：其他設定
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_014.png?raw=true)

>Editor模式按G進入Game View

**<font style="color: #00ff88">Global</font>**
Hide All：隱藏整個舞台
Hide Stage：隱藏舞台地板
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_015.png?raw=true)

**<font style="color: #00ff88">LED M / LED L / LED R / LED T</font>**
Hide LED：可以單獨隱藏不同的LED
Show Debug Material： 顯示拍攝範圍，<font style="color: #00ff88">綠色</font>為可拍攝範圍，<font style="color: #ff0000">紅色</font>為不建議拍到的範圍。
>下圖的紅色範圍為天片，
>由於立面與天片之間會有實體LED的接縫，所以不建議拍攝到。

綠色為安全拍攝範圍，紅色為不建議拍到的範圍：![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_016_zh.png?raw=true)
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_017_zh.png?raw=true)

Debug Material：可以依據拍攝需求，自行替換綠色or紅色材質球。
（例如只拍攝M區域，那LRT就換成紅色。）
![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_018.png?raw=true)



#### 加入表演者
1. Plugins/MoonshineXRPlugin Content/Basic/Previs/Assets/Mark，可以找到表演者模型。
   >此模型的身高為176cm。
   
   ![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_019.png?raw=true)
2. 將表演者放入場景中，模擬真實表演者的位置。![image](https://github.com/MSUnreal/MoonshineXR_PartnerGuidePackage/blob/main/MoonshineXRPluginLite%E4%BD%BF%E7%94%A8%E8%AA%AA%E6%98%8EUserGuide/Img/Img_MSXRPluiginUserGuide_020_zh.png?raw=true)
