#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// Define a struct to represent a gadget
struct Gadget {
    string name;
    string category;
    float price;
    string description;
};

// Function to recommend a gadget based on budget and category
void recommendSmartphones(const vector<Gadget>& smartphones, float budget, string category) {
    string name;
    bool found = false;
    cout << "\nChatbot: Recommended gadgets based on your chosen category " << category << endl;

    // Vector to store filtered gadgets
    vector<Gadget> filteredSmartphones;

    // Filtering matching gadgets
    for (const Gadget& gadget : smartphones) {
        if (gadget.category == category && gadget.price <= budget) {
            cout << "Name: " << gadget.name << ", Price: P" << gadget.price << endl;
            filteredSmartphones.push_back(gadget); // Push the gadget into the vector
            found = true;
        }
    }

    if (found) {
        // Sort the filtered gadgets by price (lowest to highest)
        sort(filteredSmartphones.begin(), filteredSmartphones.end(), [](const Gadget& a, const Gadget& b) {
            return a.price < b.price;
        });

        // Display the sorted gadgets
        for (const Gadget& gadget : filteredSmartphones) {
            cout << "Name: " << gadget.name << ", Price: P" << gadget.price << endl;
        }

        cout << "\nChatbot: What unit do you prefer? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string unit;
        getline(cin, unit);

        // Find the preferred unit in the filtered smartphones vector
        for (const Gadget& gadget : filteredSmartphones) {
            if (gadget.name == unit) {
                cout << "\nChatbot: Your preferred unit is: " << unit << endl;
                cout << "Chatbot: Description: " << gadget.description << endl;
                cout << "\nChatbot: Do you want to buy the gadget? " << endl;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
                string choice;
                cin >> choice;
                if (choice == "yes" || choice == "Yes") {
                    cout << "\nChatbot: You have successfully purchased " << unit << "." << endl;
                } else {
                    cout << "\nChatbot: Try other gadgets! " << endl;
                }
                break;
            }
        }
    } else {
        cout << "\nChatbot: No gadgets found within your budget in the " << category << " category." << endl;
    }
}
// Function to recommend a gadget based  on budget and category
void recommendLaptops(const vector<Gadget>& laptops, float budget, string category) {
    string name;
    bool found = false;
    cout << "\nChatbot: Recommended gadgets based on your chosen category " << category << endl;

    // Vector to store filtered laptops
    vector<Gadget> filteredLaptops;

    // Filtering matching gadgets
    for (const Gadget& laptop : laptops) {
        if (laptop.category == category && laptop.price <= budget) {
            filteredLaptops.push_back(laptop); // Push the laptop into the vector
            found = true;
        }
    }

    if (found) {
        // Sort the filtered laptops by price (lowest to highest)
        sort(filteredLaptops.begin(), filteredLaptops.end(), [](const Gadget& a, const Gadget& b) {
            return a.price < b.price;
        });

        // Display the sorted gadgets
        for (const Gadget& laptop : filteredLaptops) {
            cout << "Name: " << laptop.name << ", Price: P" << laptop.price << endl;
        }

        cout << "\nChatbot: What unit do you prefer, " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string unit;
        getline(cin, unit);

        // Find the laptop with the preferred unit
        for (const Gadget& laptop : filteredLaptops) {
            if (laptop.name == unit) {
                cout << "\nChatbot: Your preferred unit is: " << unit << endl;
                cout << "Chatbot: Description: " << laptop.description << endl;
                cout << "\nChatbot: Do you want to buy the gadget?" << endl;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
                string choice;
                cin >> choice;
                if (choice == "yes" || choice == "Yes") {
                    cout << "\nChatbot: You have successfully purchased " << unit << "!" << endl;
                } else {
                    cout << "\nChatbot: Try other gadgets! " << endl;
                }
                return;
            }
        }
    } else {
        cout << "\nChatbot: No gadgets found within your budget in the " << category << " category." << endl;
    }
}

// Function to recommend a gadget based  on budget and category
void recommendWearabledevices(const vector<Gadget>& wearable, float budget, string category) {
    string name;
    bool found = false;
    cout << "\nChatbot: Recommended gadgets based on your chosen category " << category << endl;

    // Vector to store filtered wearables
    vector<Gadget> filteredWearables;

    // Filtering matching gadgets
    for (const Gadget& device : wearable) {
        if (device.category == category && device.price <= budget) {
            cout << "Name: " << device.name << ", Price: P" << device.price << endl;
            filteredWearables.push_back(device); // Push the device into the vector
            found = true;
        }
    }

    if (found) {
        // Sort the filtered wearables by price (lowest to highest)
        sort(filteredWearables.begin(), filteredWearables.end(), [](const Gadget& a, const Gadget& b) {
            return a.price < b.price;
        });

        cout << "\nChatbot: What unit do you prefer, " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string unit;
        getline(cin, unit);
        cout << "\nChatbot: Your preferred unit is: " << unit << endl;

        // Find the gadget with the preferred unit
        for (const Gadget& device : filteredWearables) {
            if (device.name == unit) {
                cout << "Chatbot: Description: " << device.description << endl;
                cout << "\nChatbot: Do you want to buy the gadget?" << endl;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
                string choice;
                cin >> choice;
                if (choice == "yes" || choice == "Yes"){
                    cout << "\nChatbot: You have successfully purchased " << unit << "!" << endl;
                } else {
                    cout << "\nChatbot: Try other gadgets! " << endl;
                }
                return;
            }
        }
    } else {
        cout << "\nChatbot: No gadgets found within your budget in the " << category << " category." << endl;
    }
}

// Function to recommend a gadget based  on budget and category
void recommendAudiodevices(const vector<Gadget>& audio, float budget, string category) {
    string name;
    bool found = false;
    cout << "\nChatbot: Recommended gadgets based on your chosen category " << category << endl;

    // Vector to store filtered audio devices
    vector<Gadget> filteredAudio;

    // Filtering matching gadgets
    for (const Gadget& device : audio) {
        if (device.category == category && device.price <= budget) {
            cout << "Name: " << device.name << ", Price: P" << device.price << endl;
            filteredAudio.push_back(device); // Push the device into the vector
            found = true;
        }
    }

    if (found) {
        // Sort the filtered audio devices by price (lowest to highest)
        sort(filteredAudio.begin(), filteredAudio.end(), [](const Gadget& a, const Gadget& b) {
            return a.price < b.price;
        });

        cout << "\nChatbot: What unit do you prefer, " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string unit;
        getline(cin, unit);
        cout << "\nChatbot: Your preferred unit is: " << unit << endl;

        // Find the gadget with the preferred unit
        for (const Gadget& device : filteredAudio) {
            if (device.name == unit) {
                cout << "Chatbot: Description: " << device.description << endl;
                cout << "\nChatbot: Do you want to buy the gadget?" << endl;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
                string choice;
                cin >> choice;
                if (choice == "yes" || choice == "Yes"){
                    cout << "\nChatbot: You have successfully purchased " << unit << "!" << endl;
                } else {
                    cout << "\nChatbot: Try other gadgets! " << endl;
                }
                return;
            }
        }
    } else {
        cout << "\nChatbot: No gadgets found within your budget in the " << category << " category." << endl;
    }
}
// Function to display the updated gadget list
void displayGadgetList(vector <Gadget> gadgetList) {
    cout << "\nUpdated Gadget List:\n";
    for (const auto& gadget : gadgetList) {
        cout << gadget.name << ", " << gadget.price << endl;
    }
}
void addGadgetToCategory(vector<Gadget>& gadgetList, const string& category, const string& name, float price, const string& description) {
    Gadget newGadget{name, category, price, description};
    gadgetList.push_back(newGadget);
    cout << "\nChatbot: Gadget added successfully!" << endl;
     // Display the updated gadget list
    displayGadgetList(gadgetList);
}

void removeGadgetFromCategory(vector<Gadget>& gadgetList, const string& name) {
    auto it = gadgetList.begin();
    while (it != gadgetList.end()) {
        if (it->name == name) {
            it = gadgetList.erase(it);
            cout << "Gadget removed successfully!" << endl;
            return;
        } else {
            ++it;
        }
    }
    cout << "Gadget not found!" << endl;

// Display the updated gadget list
    displayGadgetList(gadgetList);
}
int main() {
    // Sample gadgets data
    vector<Gadget> smartphones = {
        {"Huawei x3", "Mate", 18000.0, "Mate x3 features high-end specifications, powerful processors, ample Ram, storage and impressive camera capabilities"},
        {"Huawei Xs2", "Mate", 22000.0, "Mate Xs2 features improvements in performance, display, camera technology, and battery"},
        {"Huawei 40P", "Mate", 25000.0, "Mate 40 Pro known for its powerful performance and advanced camera capabilities"},
        {"Huawei 20", "Mate", 18500.0, "Mate 20 features a large and vibrant display, smooth multitasking, and a versatile triple-camera setup"},
        {"Huawei 10P", "Mate", 23000.0, "Mate 10 Pro offers advcanced features like fast charging, water resistance, and a long lasting battery"},
        {"Huawei P50P", "P Series", 27999.0, "P50 Pro known for its advanced camera capabilities, offers fast and efficient performance, supports fast charging"},
        {"Huawei P40P+", "P Series", 36000.0, "P40 Pro+ features a large OLED display with curved edges, offering vibrant colors and crisp visuals, camera inludes versatile penta-camera system"},
        {"Huawei P40P", "P Series", 34500.0, "P40 Pro delivers smooth performance for multitasking, gaming, and productivity tasks"},
        {"Huawei P30P", "P Series", 39500.0, "P30 Pro offers outstanding camera system that includes a versatile quad camera system in a various lighting conditions"},
        {"Huawei P30", "P Series", 33500.0, "P30 offers strong performance and impressive camera capabilities includes triple camera set up in various lighting conditions"},
        {"Huawei 12i", "Nova Series", 25500.0, "Nova 12i boasts 108-megapixel camera and it's backed by Snapdragon chipset under the hood, a hefty 5000mAh battery and 40W fast charging"},
        {"Huawei Y72", "Nova Series", 26499.0, "Nova Y72 features 6.75 inch IPS display with a refresh rate of 90Hz. Dual Camera, Fast Charging"},
        {"Huawei Y71", "Nova Series", 27499.0, "Nova Y71 features triple camera on the rear side that consists of 48 MP. It is packed with 8 GB RAM and 128 GB internal storage"},
        {"Huawei Y 61", "Nova Series", 24499.0, "Nova Y61 is a budget friendly smartphone that features a 6.52 inch HD+ display, triple rear cameras and selfie camera"},
        {"Huawei lite ", "G Series", 30299.0, "Nova lite a midrange smartphone features a sleek design, a decent camera setup, and a good balance of performance and affordability"},
        {"Gplay mini", "G Series", 38799.0, "G Play Mini designed to provide basic functionality at an affordable price point, features compact design with a 5 inch display powered by a quad core processor"},
        {"Huawei Y7a", "Y Series", 33599.0, "Huawei Y7a midrange smartphone known for its large display, capable performance adn afforable price point, features a 6.67 inch full HD+ display with a hole-puch cutout for the front camera"},
        {"Huawei Y6p", "Y Series", 36499.0, "Huawei Y6P is an entry-level smartphone offering affordability without comprising essential features, features decent viewing experience, triple camera set up on the rear"},
        {"Huawei Y9", "Y Series", 53000.0, "mid-range smartphone that stands out for its pop-up selfie camera, large display, providing an immersive viewing experience for gaming and multimedia content"},
        {"Huawei Y7", "Y Series", 55500.0, "features a decent-sized battery to ensure all-day usage on a single charge, making it suitable for users who prioritize battery life, dual camera, display with a small waterdrop notch at the top"},
    };

    vector<Gadget> laptops = {
        {"Huawei D16", "Matebook", 65000, "The HUAWEI MateBook D 16 2024 has 16-inch vast display, as light as a 15-inch model. 1.68 kg light body, making it portable enough for every meeting, work trip, and cafe trip "},
        {"Huawei 16s", "Matebook", 67000, "Huawei MateBook 16s is a Windows 11 laptop with a 16.00-inch display that has a resolution of 2520x1680 pixels. It is powered by a Core i5 processor and it comes with 16GB of RAM. The Huawei MateBook 16s packs 512GB of SSD storage"},
        {"Huawei X13th ", "Matebook", 70000, "packs a 13th Gen Intel Core Processor, a 32 GB memory, and a 2 TB SSD, 27 for blazing-fast file transfers and nimble operations"},
        {"Huawei X12th", "Matebook", 67500, "ased on Intel's 12th-generation Core i7-1260P, a 12-core (4 Performance, 8 Efficient) chip, with 16GB of RAM and 1TB of SSD storage"},
        {"Huawei 16s", "Matebook", 56000, "Stylish in classic colours of Space Gray, you can easily one-hand open and close 11 with max. 17.8 mm-thickness 12 and an exquisite hinge"},
        {"Huawei 14s", "Matebook", 65499, "Windows 11 laptop with a 14.00-inch display that has a resolution of 2160x1440 pixels. It is powered by a Core i5 processor and it comes with 16GB of RAM"},
        {"Huawei 16", "Matebook", 66799, "a Windows 10 Home laptop with a 16.00-inch display that has a resolution of 2520x1680 pixels. It is powered by a Ryzen 5 processor and it comes with 16GB of RAM"},
        {"Huawei 14", "Matebook", 68999, "Huawei MateBook 14 2022 is a Windows 11 laptop with a 14.00-inch display that has a resolution of 2160x1440 pixels. It is powered by a Core i5 processor and it comes with 16GB of RAM. The Huawei MateBook 14 2022 packs 512GB of SSD storage"},
        {"Huawei E", "Matebook", 69000, " an Intel-based 2-in-1 device comprising a 12.6-inch tablet and an attachable keyboard that incorporates a kickstand"},
        {"Huawei D14", "Matebook", 65499, "a Windows 10 laptop with a 14.00-inch display that has a resolution of 1920x1080 pixels. It is powered by a Core i5 processor and it comes with 8GB of RAM. The Huawei MateBook D 14 packs 512GB of SSD storage"},
        {"Huawei D15", "Matebook", 65999, "Huawei MateBook D 15 is a Windows 10 laptop with a 15.60-inch display that has a resolution of 1920x1080 pixels. It is powered by a Core i5 processor and it comes with 8GB of RAM. The Huawei MateBook D 15 packs 1TB of HDD storage and 512GB of SSD storage"},
        {"Huawei EGo", "Matebook", 69999, "Full-size keyboard with 1.3 mm key travel, for comfortable typing and desktop-level office functionality"},
        {"Huawei S", "Desktops", 155000, "For wireless connectivity, the MateStation S supports Bluetooth 5.0, dual-frequency Wi-Fi, as well as Huawei Share, which allows you to conveniently share files between the desktop and compatible Huawei smartphones,including the Mate 40 series, with just a tap on the Huawei Share key on the Ultra-Slim Wired Keyboard"},
        {"Huawei X", "Desktops", 149000, "The 4K+ FullView Display 1 and 4-sided super-narrow bezels bring true-to-life colours 2 bursting into immersive view, while the 10-point multi-touch screen and smart connectivity features create powerful new interactive possibilities"},
        {"Huawei XS", "Desktops", 159000, "HUAWEI MateStation X all-in-one computer equips a 28.2-inch 4K bezel-less screen, a ten-point touchscreen supports color correction"},
        {"Huawei GTSE", "Monitors", 256000, "The WQHD 3440 x 1440 display on HUAWEI MateView GT has more horizontal pixels than standard 1440p, to really bring images to life, right before your eyes. And visuals flow seamlessly and smoothly with the ultra-low latency, 165 Hz refresh rate"},
        {"Huawei MView", "Monitors", 100000, "A monitor that enhances every aspect of your experience. Presenting elegance in design and a stunning 4K+ display. Enables smart work via wireless connectivity. to multiple devices"},
        {"Huawei GTS", "Monitors", 300000, "The QHD 2560 x 1440 display on HUAWEI MateView GT brings images to life, right before your eyes. Visuals flow seamlessly and smoothly via the ultra-low latency, 165 Hz refresh rate"},
        {"Huawei SEAdj", "Monitors", 230000, "The 23.8-inch IPS FullView Display* is bordered by ultra-thin bezels, producing a sky-high 92% screen-to-body ratio* and vast 178-degree viewing angle"},
        {"Huawei GT", "Monitors", 240000, "The WQHD 3440 x 1440 display on HUAWEI MateView GT has more horizontal pixels than standard 1440p, to really bring images to life, right before your eyes. And visuals flow seamlessly and smoothly with the ultra-low latency, 165 Hz refresh rate"},
     };

     vector<Gadget> wearableDevices = {
          {"Huawei Band9", "HSmartwatch", 22000, "enhances the comfort level of the strap for a good night's sleep. All-round sleep management and improvement with the HUAWEI TruSleep™ 4.0 system. Feather-light wearing. Thinner, Lighter, Smarter. Slim & Sleek Design"},
          {"Huawei WATCH4", "HSmartwatch", 23000, "HUAWEI WATCH 4 shows you glamour at just a glimpse, with its shimmering 316L stainless steel case and 3D curved glass. Pair the watch with a breathtaking planet watch face to bring the vastness of space right before your eyes"},
          {"Huawei ULTIMATEDESIGN", "HSmartwatch", 24400, "HUAWEI WATCH ULTIMATE DESIGN is your safe harbour in stormy seas, with its rudder-like black nanocrystal ceramic bezel and six 18K gold inlays, shining beacons guiding you through the night!"},
          {"Huawei GT4", "HSmartwatch", 25000, "30 minutes bluetooth calling, 30 minutes audio playback, heart rate monitoring"},
          {"Huawei FIT", "HSmartwatch", 26500, "a stylish and comfortable smartwatch packed with advanced features. Its lightweight design and stunning AMOLED display are complimented by advanced health tracking, including enhanced sleep monitoring, accurate heart rate and blood oxygen measurements, and built-in GPS"},
          {"Huawei Band8", "HSmartwatch", 22900, "HUAWEI Band 8 features a new and improved AI algorithm that tracks heart rate round the clock and tells you right away if something is abnormal8. The system shows you your resting heart rate data for the past 7 days in intuitive graphs, and provides healthy heart rate zones and upper limit reminders during workouts"},
          {"Huawei WATCHD", "HSmartwatch", 23500, "HUAWEI WATCH D packs intricate blood pressure components, like a mini pump and airbag, into a highly-compact form. The 2.5D curved glass shimmers and glimmers with each turn of the wrist, complementing a durable aluminum alloy frame, with two handy buttons to take you to your tasks"},
          {"Huawei WATCHUltimate", "HSmartwatch", 234990, "HUAWEI WATCH Ultimate is the first smart watch to offer a 100-metre scuba diving mode2, with a range of pro-level diving algorithms and diving guidance."},
          {"Apple WatchSE(1st)", "ASmartwatch", 24899, "Good connection, Family setup, Water resistance, for fitness, heart rate, crash detection"},
          {"Apple WatchSE(2nd)", "ASmartwatch", 24999, "Always-on altimeter, Water resistant, second generation optical heart sensor, emergency sos"},
          {"Apple Series1", "ASmartwatch", 24699, "Track and share your activity. Measure your workouts. Monitor your health. And stay connected to the people and information you care about most."},
          {"Apple Series2", "ASmartwatch", 25499, "With built-in GPS and GLONASS, water resistance to 50 meters,1 a dual‑core processor, a 2x brighter display, and watchOS 3."},
          {"Apple Series3", "ASmartwatch", 25000, "Apple Watch Series 3 comes in two models, one with GPS and cellular, and one with GPS, both featuring a 70 percent faster dual-core processor and new wireless chip. Apple Watch Series 3 features a faster dual-core processor and wireless chip."},
          {"Apple Series4", "ASmartwatch", 26000, "The Apple Watch Series 4 offers a larger, crisp display that shows more with less bezel, super fast speed and a louder speaker. It adds high and low heart-rate detection, fall detection with SOS trigger and an FDA-cleared ECG app for more detailed heart readings."},
          {"Apple Series5", "ASmartwatch", 26399, "The new display will always show the time and complications. The new Apple Watch is also the first to include a built-in compass. Apple is also bringing international emergency services to every cellular model. The Series 5 also brings back ceramic white, and new natural brush and space black titanium models."},
          {"Apple Series6", "ASmartwatch", 26490, "The Series 6 has all the excellent health, safety, and lifestyle features of its predecessor. These include ECG readings, high and low heart rate notifications, irregular heart rhythm notifications, menstrual cycle tracking, fall detection, high decibel alerts, emergency SOS, and international emergency calling."},
          {"Apple Series7", "ASmartwatch", 27000, "Series 7 keeps all the things you care about front and center with its larger screen. And with available cellular, you can stay connected to your family, friends, music, notifications, photos, and more — even when you don't have your phone."},
          {"Apple Series8", "ASmartwatch", 27999, "Apple Watch has had fall detection and emergency SOS features for some time, but crash detection is a new kind of safety tool made possible by upgraded motion sensors in Series 8. The Apple Watch Series 8 features two new motion sensors inside, plus an improved gyroscope and accelerometer."},
          {"Apple Ultra", "ASmartwatch", 32500, "Apple Watch Ultra includes an altimeter and depth gauge for providing real-time measurements of altitude and underwater depth, a three-microphone array that reduces wind noise for clearer communications, precision dual-frequency GPS that provides location information for calculating distance and pace"},
          {"Apple Ultra2", "ASmartwatch", 32000, "The lightweight titanium case is rugged and corrosion resistant, and it's raised to protect the sapphire crystal from edge impacts. The biggest and brightest Apple Watch display ever. Powered by the all-new S9 SiP, the Always‑On Retina display is 3,000 nits at its peak, making it even more readable in harsh sunlight"},
     };

     vector<Gadget> audioDevices = {
          {"Huawei Pro3", "Headphones", 10999, "HUAWEI FreeBuds Pro 3 supports clear calls at wind speeds of up to 9 m/s, an 80% improvement in noise cancellation compared with HUAWEI FreeBuds Pro 2, which supports clear calls at wind speeds of up to 5 m/s."},
          {"Huawei Pro4", "Headphones", 3999, "Air like comfort, Open fit Active Noise Cancellation, Intelligent Audio Connection, Swipe Controls, Hih Resolution Sound"},
          {"Huawei FreeClip", "Headphones", 8999, "Each earbud weighs4 in at just about 5.6 g and the open-ear design allows ears to breathe, while TPU reduces smudging and staining. The earbuds are interchangeable, with self-adaptive left-right audio channels, meaning you can wear either earbud on either⁠ ear."},
          {"Huawei SE2", "Headphones", 1099, "FreeBuds SE 2 are quite comfortable, compact, with good battery life, updated Bluetooth standard and support for fast charging"},
          {"Huawei 5", "Headphones", 5999, "HUAWEI FreeBuds 5 is adept at tuning out your surroundings — from the clamour of a café to the roar of the road — thanks to three mics, which take fit, wearing status, and ambient noise into account"},
          {"Huawei Pro2", "Headphones", 11999, "HUAWEI FreeBuds Pro 2 never lets your surroundings get in the way of your calls, music, and movies, employing a bone conduction microphone, three additional microphones, and the Huawei-exclusive deep neural network (DNN) noise cancellation algorithm which has learned over 100 million voice samples to cancel out all noise"},
          {"Huawei 5i", "Headphones", 2799, "HUAWEI FreeBuds 5i is Hi-Res Audio Wireless certificated, featuring a wider frequency response, full-link high-resolution sound for HD audio sources6, and multiple EQs to match with a wide range of different styles, for a tailor-made listening experience. "},
          {"Huawei 4", "Headphones", 7999, "The earbuds are ergonomically moulded to precisely fit your ear, for a shape that feels right every time. And at just 4.1 g 2 each, they'll sit naturally and comfortably in your ears, offering an almost weightless way to deeply enjoy music."},
          {"Huawei SE", "Headphones", 2499, "With an ultra-sensitive Polymeric Diaphragm and 10mm dynamic driver, the HUAWEI FreeBuds SE Support a crystal clear sound across the full decibel and frequency range. With the latest Bluetooth installed into the Headphones, Bluetooth 5.2 you have any amazing connection with the HUAWEI FreeBuds SE."},
          {"Huawei Lipstick", "Headphones", 11999, "HUAWEI FreeBuds Lipstick intelligently detects the shape of your inner ear and your unique wearing style. A customized noise cancellation effect is then applied, reducing the effect of low-frequency environmental noises with greater precision."},
          {"Huawei 3i", "Headphones", 4999, "Active noise cancellation, call noise cancellation, long lasting battery capacity"},
          {"Airpods Pro(2nd)", "Airpods", 14990, "The H2-powered AirPods Pro now feature Adaptive Audio 1, automatically prioritizing sounds that need your attention as you move through the world. By seamlessly blending Active Noise Cancellation with Transparency mode when you need it, Adaptive Audio magically delivers the right mix of sound for any environment."},
          {"Airpods (3rd)", "Airpods", 11990, "AirPods are lightweight and offer a contoured design. They sit at just the right angle for comfort and to better direct audio to your ear. The stem is 33 percent shorter than AirPods (2nd generation) and includes a force sensor to easily control music and calls."},
          {"Airpods (2nd)", "Airpods", 8490, "AirPods deliver the wireless headphone experience, reimagined. Just pull them out of the Lightning Charging Case and they're ready to use with your iPhone, Apple Watch, iPad, or Mac. After a simple one-tap setup, AirPods work like magic. They're automatically on and always connected."},
          {"Airpods Max", "Airpods", 32990, "AirPods Max combine high-fidelity audio with industry-leading Active Noise Cancellation to deliver an unparalleled listening experience. Each part of their custom-built driver works to produce sound with ultralow distortion across the audible range."},
          {"Earpods (USB-C)", "Airpods", 1190, "The speakers inside the EarPods have been engineered to maximize sound output which means you get high-quality audio. The EarPods (USB-C) also include a built-in remote that lets you adjust the volume, control the playback of music and video, and answer or end calls with a press of the remote."},
          {"Beats StuWireless", "Airpods", 18990, "Class 1 Bluetooth for exceptional wireless connectivity, USB-C audio for simultaneous listening and charging¹⁰, and 3.5mm analog input for wired audio sources."},
          {"Beats FitPro", "Airpods", 10990, "With a built-in accelerometer and Class 1 Bluetooth® technology, Beats Fit Pro can detect when you're speaking to help you sound your best. Dual beamforming microphones pinpoint your voice while a digital processor cuts out external noise and wind, so your voice is clear and easy to hear."},
          {"Beats StudioBuds", "Airpods", 8490, "Beats Studio Buds + feature powerful, balanced sound, Active Noise Cancelling (ANC), and Transparency mode. Enjoy high-quality calls, enhanced Apple & Android compatibility, compatibility, up to 36 hours of listening time with charging case footnote2 and four ear tip options to ensure a comfortable all-day fit."},
          {"Beats SoloBuds", "Airpods", 4490, "With up to 18 hours of battery life 1 and their comfortable ergonomic design, Beats Solo Buds are built for extended listening. Up to 18 hours of battery life. With up to 18 hours of battery life 1 and their comfortable ergonomic design, Beats Solo Buds are built for extended listening."},
     };
        // Chatbot interface
        cout << "\t\t\t\t\t\tWelcome to Gadget Advisor!" << endl;
        cout << "Chatbot: Welcome! What is your name? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string name;
        cin >> name;

        do {
        cout << "\nChatbot: Do you want to buy a gadget, " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string response;
        cin >> response;

        if(response == "Yes" || response == "yes") {
        while (true) {
        cout << "\nChatbot: What gadget do you prefer,  " << name << "?" << endl;
        cout << "Smartphones" << endl;
        cout << "Laptops " << endl;
        cout << "Wearable " << endl;
        cout << "Audio " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string pre_gad;
        cin >> pre_gad;
        if(pre_gad == "Smartphones" || pre_gad == "smartphones" ) {
        cout << "\nChatbot: How much is your budget, " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: P";
        float budget;
        cin >> budget;
        cout << "\nChatbot: What category are you interested in (Mate, P Series, Nova Series, G Series, Y Series), " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string category;
        cin.ignore(); // Ignore newline character in input buffer
        getline(cin, category);

        // Recommend gadgets based on user input
        recommendSmartphones(smartphones, budget, category);

        } else if (pre_gad == "Laptops" || pre_gad == "laptops"){
        cout << "\nChatbot: What's your budget, " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: P";
        float budget;
        cin >> budget;
        cout << "\nChatbot: What category are you interested in (Matebook, Desktops, Monitors), " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string category;
        cin.ignore(); // Ignore newline character in input buffer
        getline(cin, category);

        // Recommend gadgets based on user input
        recommendLaptops(laptops, budget, category);

        } else if (pre_gad == "Wearable" || pre_gad == "wearable") {
        cout << "\nChatbot: How much is your budget? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: P";
        float budget;
        cin >> budget;
        cout << "\nChatbot: What category are you interested in (HSmartwatch, ASmartwatch)? " << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string category;
        cin.ignore(); // Ignore newline character in input buffer
        getline(cin, category);

        // Recommend gadgets based on user input
        recommendWearabledevices(wearableDevices, budget, category);

        } else if (pre_gad == "Audio" || pre_gad == "audio"){
        cout << "\nWhat's your budget, " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: P";
        float budget;
        cin >> budget;
        cout << "\nWhat category are you interested in (Headphones, Airpods), " << name << "?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string category;
        cin.ignore(); // Ignore newline character in input buffer
        getline(cin, category);

        // Recommend gadgets based on user input
        recommendAudiodevices(audioDevices, budget, category);

        } else {
            cout << "Your preferred gadget is not in the advisor! " << endl;

        }
        cout << "\nChatbot: Do you want to continue (yes/no)?" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        cin >> response;
        if (response != "yes" && response != "Yes" && response != "YES") {
            break;
        }
    }
        } else {
            cout << "Thank you for using Gadget Advisor. Have a great day!" << endl;
            break;
        }

        cout << "\nDo you want to add or remove a gadget? (add/remove/exit): ";
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
        string choice;
        cin >> choice;

        if (choice == "add") {
            // Ask for category
            cout << "Enter the category (smartphones/laptops/wearableDevices/audioDevices): ";
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
            string category;
            cin >> category;

            cout << "Enter the name of the gadget: ";
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter the description of the gadget: ";
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
            string description;
            getline(cin, description);

            cout << "Enter the price of the gadget: ";
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
            float price;
            cin >> price;

            if (category == "smartphones") {
                addGadgetToCategory(smartphones, category, name, price, description);
            } else if (category == "laptops") {
                addGadgetToCategory(laptops, category, name, price, description);
            } else if (category == "wearableDevices") {
                addGadgetToCategory(wearableDevices, category, name, price, description);
            } else if (category == "audioDevices") {
                addGadgetToCategory(audioDevices, category, name, price, description);
            } else {
                cout << "Invalid category!" << endl;
            }
        } else if (choice == "remove") {

            // Ask for category
            cout << "Enter the category (smartphones/laptops/wearableDevices/audioDevices): ";
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
            string category;
            cin >> category;

            cout << "Enter the name of the gadget: ";
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t You: ";
            cin.ignore();
            string name;
            getline(cin, name);

                if (category == "smartphones") {
                removeGadgetFromCategory(smartphones, name);
                } else if (category == "laptops") {
                removeGadgetFromCategory(laptops, name);
                } else if (category == "wearableDevices") {
                removeGadgetFromCategory(wearableDevices, name);
                } else if (category == "audioDevices") {
                removeGadgetFromCategory(audioDevices, name);
                } else {
                    cout << "Invalid choice! Please choose add, remove, or exit." << endl;
                    }
            } else if (choice == "exit") {
                    cout << "Thank you for using Gadget Advisor. Have a great day!" << endl;
                     break;

                } else {
            cout << "Invalid choice! Please choose add, remove, or exit." << endl;
        }
    } while (true);
            return 0;
        }
