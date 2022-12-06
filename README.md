# Surface_Duo_2_GCam

Google Camera (GCam) for the Microsoft Surface Duo 2. These are the notes I collected while trying out several GCam mods on my Surface Duo. The here noted info’s are probably incomplete and may not work on other devices, as my focus is only the Surface Duo 2. 

I AM NOT THE DEVELOPER OF ANY HERE LISTED MODS!


# GCam Mods
There are two working mods I tested.

AGC:
https://www.celsoazevedo.com/files/android/google-camera/dev-BigKaka/

LMC:
https://www.celsoazevedo.com/files/android/google-camera/dev-hasli/

In terms of picture quality, I didn't see much of a difference between the two. The LMC version has the switch lens button is on the right side, which makes it easier to switch between the lenses of the camera with the Surface Duo 2. All here noted settings or fixes are independent of the used GCam mod.


# Helpful GCam stuff

### Package names
Some phones have restrictions in place, which limit the camera capabilities on third party camera apps (mainly access to auxiliary camera lenses). A way to get around this, is by using package names [1]. As far as I know, the Microsoft Surface Duo 2 has no limitations for third party camera apps in place, therefore I recommend using the package "_glens" at the end. This allows the usage of the built in Google Lens feature (available under modes, "Lens").


### Ultrawide Lens distortion fix
Activate the Ultrawide lens on the GCam port and hold the phone at a 90-degree angle to a flat surface. You can see in the Viewfinder and in the saved image that the image is distorted on the edges. It is possible to remove this distortion by setting the HDR Interface of the ultrawide lens to "Pixel 4a 5G" and the HDR Model "Pixel 6" or "Pixel 6 Pro". Furthermore, it is required to set the "rectiface_shape_correction_threshold" to 3 and "rectiface_support_level" to 2 (LMC GCam). The first variable sets the extent to which the shape correction is applied, possible values are 1, 2 or 3. The second variable has possible values or 1 or 2. [2]

| GCam Mod | LMC | AGC |
| --- | --- | --- |
| rectiface_shape_correction_threshold | 3 | 1 |
| rectiface_support_level | 2 | 1 |

Additional Note: Different GCam Mods require different variables to these settings, so try possible combinations out yourself. 

The above-mentioned settings can be found for the LMC GCam under:
Settings - System Settings - Interface Model - Select the Camera Lens
Settings - System Settings - HDR Model - Select the Camera Lens
Settings - Developer Settings - Search for "rect"


### HDR Model/HDR Interface
From what I could gather, the "HDR Interface" enables certain pixel phone related features, while the "HDR Model" is responsible for the photo processing under the hood. For example, the above mentioned Ultrawide Lens distortion fix does not work on HDR Interfaces < Pixel 4a 5G, as previous Pixel phones did not have an ultrawide lens.[2]

Setting the HDR Model/Interface is mostly a trial-and-error process.

### Images are not being saved on the Surface Duo in HDR+ enhanced or Night Mode
This issue can be fixed by enabling the "Skip metadata check" option. Special thanks to Даня.

For LMC, it can be found under:
Settings - Photo Processing - Enable Patcher - Main Camera - Advanced Settings - Skip metadata check - ON

This step needs to be repeated for the ultrawide and tele lens as well.


### Enabling Auxiliary Cameras
Some GCam mods do automatically enable additional camera lenses. In case of the LMC mod (as of the current release R15) it is necessary to enable them manually. This is possible in Settings menu under "Additional cameras". Just enable here the "Show buttons on viewfinder" option and the "Tele camera" and "Wide camera" switch.


### Surface Duo 2 Noise Model

For now, I just recommend to use the system noise model, at least until I or someone else can find a better image configuration. The noise files can be found in the folder Noise_Models.

Setting the System Noise Model in LMC:
Settings - Processing Functions - Noise Model - Main Camera - Set Noise Model "System" and "Unblock the noise model to "Block (Default)". Unblock will use a custom selected or input noise model. Repeat this step for the Tele and Ultrawide camera.


## Notes

If you find better settings for the Surface Duo 2 GCam, please let me know and I will make an update here. More Info can be found in the Telegram Discussion Group. [2]



##Sources

[1]: https://www.celsoazevedo.com/files/android/google-camera/dev-hasli/f/dl11/
[2]: https://t.me/Redmi10XGCamChat

https://www.celsoazevedo.com/files/android/google-camera/dev-hasli/f/dl11/

https://t.me/Redmi10XGCamChat
