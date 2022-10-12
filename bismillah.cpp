// NAMA		:Rossa Marsaulina Rachmawati
// NRP		:5022221088
// Jurusan	:Teknik Elektro

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int losses;
float v0, vtn, vt;

float mencari_V0(float vtn, int losses)
{
    return vtn - losses;
}

int speed_dgn_loss(float vtn)
{
    if (vtn >= 1 && vtn <=10){
        return 1;
    }
    else if (vtn >=11 && vtn <=20){
        return 3;
    }
    else if (vtn >=21 && vtn <= 30){
        return 5;
    }
    return 0;
}

int main() {
    float vtn;


    std::cin >> vtn;

    losses = speed_dgn_loss(vtn);
    v0 = mencari_V0(vtn, losses);

    int jarak_max = (v0*v0)/GRAVITASI;
    float v0 = sqrt(jarak_max*GRAVITASI);
    float vtr = v0 + losses;


    std::cout << jarak_max << " " << vtr << std::endl;
    return 0;
}
