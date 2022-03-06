# Surface_Duo_2_GCam
Google Camera (GCam) on Surface Duo 2. Finally found a working GCam for the Microsoft Surface Duo 2.

Current Version: AGC8.4.300_V6 by bigkaka.

Download of the latest GCam APK is here possible:

https://www.celsoazevedo.com/files/android/google-camera/dev-BigKaka/f/dl4/


# Surface Duo 2 Noise Model

The lenses of the Surface Duo 2 require a different noise model, so i created one with this tutorial:

https://www.celsoazevedo.com/files/android/morgenman/noise-modeller-how-to/

The noise files can be found in the folder Noise_Models.

# Setup

1. Download the GCam APK and the Noise Models on your Android phone.
2. Install the APK.
3. Launch the App and swipe down and click on "More settings".
4. Go to "Lens Setting".
5. Select "Main (1.0x)" and scroll down to "Color Management".
6. Click on Noise Model and select "Import Noise Model" and select the "main_noise_model.c".
7. Select "Noise Model" and click on the imported "main_noise_model.c".
8. Go back until you are in the "Lens Setting" menu.
9. Repeat step 5 - 7 for "Tele (1.9x)" with the "tele_noise_model.c" file.
10. Go back until you are in the "Lens Setting" menu.
11. Repeat step 5 - 7 for "Wide (0.6x)" with the "wide_noise_model.c" file.
12. Enjoy GCam on your SD2.
