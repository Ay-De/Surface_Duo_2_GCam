/* Generated test code to dump a table of data for external validation
 * of the noise model parameters.
 */
#include <stdio.h>
#include <assert.h>
double compute_noise_model_entry_S(int plane, int sens);
double compute_noise_model_entry_O(int plane, int sens);
int main(void) {
    for (int plane = 0; plane < 4; plane++) {
        for (int sens = 13; sens <= 3389; sens += 100) {
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
    static double noise_model_A[] = { 1.2405127465609242e-05,1.25981941876273e-05,1.0757207488216814e-05,1.1473769477700389e-05 };
    static double noise_model_B[] = { -1.5440343616658068e-05,-4.821067452053576e-06,-4.5527476398802825e-06,-8.465322698957958e-06 };
    double A = noise_model_A[plane];
    double B = noise_model_B[plane];
    double s = A * sens + B;
    return s < 0.0 ? 0.0 : s;
}

double compute_noise_model_entry_O(int plane, int sens) {
    static double noise_model_C[] = { 2.6924553381366557e-10,2.0368085918810524e-10,1.8662870846068724e-10,2.2511888746635112e-10 };
    static double noise_model_D[] = { 3.055285237227222e-07,3.386361236310708e-07,4.817761003810501e-07,5.700278082198216e-07 };
    double digital_gain = (sens / 213.0) < 1.0 ? 1.0 : (sens / 213.0);
    double C = noise_model_C[plane];
    double D = noise_model_D[plane];
    double o = C * sens * sens + D * digital_gain * digital_gain;
    return o < 0.0 ? 0.0 : o;
}
