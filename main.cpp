#include <iostream>
#include <string>
#include <bitset>

using namespace std;
 
int main()
{
    string stb;
    
    cout << " _____ _        _               _____      ______ _                        " << endl;
    cout << "/  ___| |      (_)             |_   _|     | ___ (_)" << endl;
    cout << "\\ `--.| |_ _ __ _ _ __   __ _    | | ___   | |_/ /_ _ __   __ _ _ __ _   _ " << endl;
    cout << " `--. \\ __| '__| | '_ \\ / _` |   | |/ _ \\  | ___ \\ | '_ \\ / _` | '__| | | |" << endl;
    cout << "/\\__/ / |_| |  | | | | | (_| |   | | (_) | | |_/ / | | | | (_| | |  | |_| |" << endl;
    cout << "\\____/ \\__|_|  |_|_| |_|\\__, |   \\_/\\___/  \\____/|_|_| |_|\\__,_|_|   \\__, |" << endl;
    cout << "                         __/ |                                        __/ |" << endl;
    cout << "                        |___/                                        |___/ " << endl;
    
    cout << endl;
    cout << endl;
    
    cout << "Enter your text : ";
    getline(cin, stb);
    
    cout << endl;
    cout << endl;
    
    
    cout << "\"";	
    for (int i = 0; i < stb.size(); i++) {
        cout << bitset<8>(stb[i]) << ' ';
    }
    cout << "\"" << endl;
    return 0;
}
