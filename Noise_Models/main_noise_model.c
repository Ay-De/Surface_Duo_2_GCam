/* Generated test code to dump a table of data for external validation
 * of the noise model parameters.
 */
#include <stdio.h>
#include <assert.h>
double compute_noise_model_entry_S(int plane, int sens);
double compute_noise_model_entry_O(int plane, int sens);
int main(void) {
    for (int plane = 0; plane < 4; plane++) {
        for (int sens = 33; sens <= 4205; sens += 100) {
            double o = compute_noise_model_entry_O(plane, sens);
            double s = compute_noise_model_entry_S(plane, sens);
            printf("%d,%d,%lf,%lf\n", plane, sens, o, s);
        }
    }
    return 0;
}

/* Generated functions to map a given sensitivity to the O and S noise
 * model parameters in the DNG noise model. The planes are in
 * R, Gr, Gb, B order.
 */
double compute_noise_model_entry_S(int plane, int sens) {
    static double noise_model_A[] = { 3.998079369545028e-06,4.00597754995755e-06,3.997872184191777e-06,3.983066041120342e-06 };
    static double noise_model_B[] = { 6.032786982092714e-06,1.9062710199601458e-05,1.872941296585944e-05,1.4334154698642736e-05 };
    double A = noise_model_A[plane];
    double B = noise_model_B[plane];
    double s = A * sens + B;
    return s < 0.0 ? 0.0 : s;
}

double compute_noise_model_entry_O(int plane, int sens) {
    static double noise_model_C[] = { 7.684650061455582e-11,8.264862745062255e-11,8.456861659184869e-11,7.845077737864896e-11 };
    static double noise_model_D[] = { 5.111088249546848e-07,1.51795793908599e-07,1.6562521211033777e-07,4.2123904944136777e-07 };
    double digital_gain = (sens / 262.0) < 1.0 ? 1.0 : (sens / 262.0);
    double C = noise_model_C[plane];
    double D = noise_model_D[plane];
    double o = C * sens * sens + D * digital_gain * digital_gain;
    return o < 0.0 ? 0.0 : o;
}
