int main() {
    int array[7] = {1,2,3,4,3,2,1};
    int k = 2;
    int temp = array[0];
    bool val = false;
    bool ret = false;
    bool idk = false;
    for (int i = 0; i < 7; i++) {
        if (array[i] > temp) {
            idk = false;
            //cout << temp<<"h:"<< array[i]<<endl;
            temp = array[i];
            if (val == true) {

                cout << "not mountain";
                ret = true;
                break;
            }
        }
        else if (array[i] < temp) {
            //cout << temp << ":" << array[i] << endl;
            idk = true;

            val = true;
        }
        else if (array[i] == temp and i != 0) {
            ret = true;
            cout << "not mountain";
            break;
        }
    }
    if (ret == false and idk==true) {
        cout << "mountain";
    }
    else if (ret == false and idk == false) {
        cout << "not mountain";
    }

}
