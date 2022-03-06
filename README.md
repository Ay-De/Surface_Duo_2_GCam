# Surface_Duo_2_GCam
Google Camera (GCam) on Surface Duo 2. Finally found a working GCam for the Microsoft Surface Duo 2.

Current Version: AGC8.4.300_V6 by bigkaka.

It can be downloaded here on this repository or directly from the developer at:

https://gcambrasil.com.br/en/devs/bigkaka/

Name: AGC8.4.300_V6.apk

Size: 143226450 bytes (136 MiB)

CRC32: 53253D2E

CRC64: 0A514201E6BFD7DA

SHA256: 06f257f3a7720a508fb5cdbf2105a24e95794d49d77850937b1d3412de7e141e

SHA1: 66172682f8c591cc90a28415567fadeb1fbd1111

MD5: 5cafaeb547e744e2e2ee112c4af6d6c6

SHA512: b15f758c9fc3158804b16b79338f318b5f3e3de8ce9415edac76879be7e54cd182dcd3bac22d7954985d61ea185ff81467d32125a6ad85227139972af8b0e53f


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
