#include <iostream>
#include <string>

using namespace std;

class SmartDevice {
protected:
    string name;
    bool isOn;

public:
    SmartDevice(string deviceName) {
        name = deviceName;
        isOn = false;
    }

    virtual void turnOn() = 0;

    virtual void turnOff() {
        isOn = false;
        cout << name << " выключено" << endl;
    }

    virtual void showStatus() {
        cout << "Устройство: " << name << endl;

        if (isOn) {
            cout << "Статус: включено" << endl;
        } else {
            cout << "Статус: выключено" << endl;
        }
    }

    virtual ~SmartDevice() {
        cout << "Удаление устройства: " << name << endl;
    }
};

class SmartLamp : public SmartDevice {
private:
    int brightness;

public:
    SmartLamp(string deviceName, int lampBrightness)
        : SmartDevice(deviceName) {
        brightness = lampBrightness;
    }

    void turnOn() override {
        isOn = true;
        cout << name << " включена. Яркость: "
             << brightness << "%" << endl;
    }

    void changeBrightness(int newBrightness) {
        if (newBrightness >= 0 && newBrightness <= 100) {
            brightness = newBrightness;
            cout << "Новая яркость лампы: "
                 << brightness << "%" << endl;
        } else {
            cout << "Ошибка: яркость должна быть от 0 до 100" << endl;
        }
    }
};

class AirConditioner : public SmartDevice {
private:
    int temperature;

public:
    AirConditioner(string deviceName, int deviceTemperature)
        : SmartDevice(deviceName) {
        temperature = deviceTemperature;
    }

    void turnOn() override {
        isOn = true;
        cout << name << " включен. Температура: "
             << temperature << "°C" << endl;
    }

    void changeTemperature(int newTemperature) {
        if (newTemperature >= 16 && newTemperature <= 30) {
            temperature = newTemperature;
            cout << "Новая температура кондиционера: "
                 << temperature << "°C" << endl;
        } else {
            cout << "Ошибка: температура должна быть от 16 до 30" << endl;
        }
    }
};

class SmartSpeaker : public SmartDevice {
private:
    int volume;

public:
    SmartSpeaker(string deviceName, int speakerVolume)
        : SmartDevice(deviceName) {
        volume = speakerVolume;
    }

    void turnOn() override {
        isOn = true;
        cout << name << " включена. Громкость: "
             << volume << "%" << endl;
    }

    void changeVolume(int newVolume) {
        if (newVolume >= 0 && newVolume <= 100) {
            volume = newVolume;
            cout << "Новая громкость колонки: "
                 << volume << "%" << endl;
        } else {
            cout << "Ошибка: громкость должна быть от 0 до 100" << endl;
        }
    }
};

int main(){
    SmartDevice* devices[3];
    
    devices[0] = new SmartLamp("Лампа в спальне", 70);
    devices[1] = new AirConditioner("Кондиционер в зале", 22);
    devices[2] = new SmartSpeaker("Колонка на кухне", 50);
    
    for(int i = 0; i < 3; i++){
        devices[i]->showStatus();
        devices[i]->turnOn();
        devices[i]->showStatus();
        cout<<"-------------------"<<endl;
    }
    for(int i = 0; i < 3; i++){
        delete devices[i];
    }
}