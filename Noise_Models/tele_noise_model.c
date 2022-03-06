/* Generated test code to dump a table of data for external validation
 * of the noise model parameters.
 */
#include <stdio.h>
#include <assert.h>
double compute_noise_model_entry_S(int plane, int sens);
double compute_noise_model_entry_O(int plane, int sens);
int main(void) {
    for (int plane = 0; plane < 4; plane++) {
        for (int sens = 25; sens <= 6268; sens += 100) {
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
    static double noise_model_A[] = { 6.0043283416640176e-06,6.242593225493029e-06,5.326581337150212e-06,5.498601830116873e-06 };
    static double noise_model_B[] = { -6.7149821190421044e-06,3.3954972929031864e-06,2.094993487263668e-06,6.795344355905214e-07 };
    double A = noise_model_A[plane];
    double B = noise_model_B[plane];
    double s = A * sens + B;
    return s < 0.0 ? 0.0 : s;
}

double compute_noise_model_entry_O(int plane, int sens) {
    static double noise_model_C[] = { 6.6589601972804e-11,4.937745806130324e-11,4.489760378003526e-11,5.844453383873861e-11 };
    static double noise_model_D[] = { 4.3133468166737125e-07,-3.315953919022907e-07,1.7977674862729216e-07,4.493159516848011e-07 };
    double digital_gain = (sens / 395.0) < 1.0 ? 1.0 : (sens / 395.0);
    double C = noise_model_C[plane];
    double D = noise_model_D[plane];
    double o = C * sens * sens + D * digital_gain * digital_gain;
    return o < 0.0 ? 0.0 : o;
}
