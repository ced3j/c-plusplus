#include <iostream>

int main() {
    char devam;
    do {
        // Kullanıcıdan iki sayı alın
        double sayi1, sayi2;
        std::cout << "Birinci sayiyi girin: ";
        std::cin >> sayi1;
        std::cout << "Ikinci sayiyi girin: ";
        std::cin >> sayi2;

        // Kullanıcıdan yapılacak işlemi seçmesi istenir
        int secim;
        std::cout << "Bir islem secin: " << std::endl;
        std::cout << "1. Toplama" << std::endl;
        std::cout << "2. Cikarma" << std::endl;
        std::cout << "3. Carpma" << std::endl;
        std::cout << "4. Bolme" << std::endl;
        std::cout << "5. Mod" << std::endl;
        std::cout << "Seciminiz: ";
        std::cin >> secim; // std::cin >> kullanıcıdan input almak için 

        // Seçime göre işlemi yap ve sonucu göster
        switch (secim) {
            case 1:
                std::cout << "Sonuc: " << (sayi1 + sayi2) << std::endl;
                break;
            case 2:
                std::cout << "Sonuc: " << (sayi1 - sayi2) << std::endl;
                break;
            case 3:
                std::cout << "Sonuc: " << (sayi1 * sayi2) << std::endl;
                break;
            case 4:
                if (sayi2 != 0) {
                    std::cout << "Sonuc: " << (sayi1 / sayi2) << std::endl;
                } else {
                    std::cout << "Hata: Bolen 0 olamaz!" << std::endl;
                }
                break;
            case 5:
                if (static_cast<int>(sayi2) != 0) {
                    std::cout << "Sonuc: " << (static_cast<int>(sayi1) % static_cast<int>(sayi2)) << std::endl;
                } else {
                    std::cout << "Hata: Bolen 0 olamaz!" << std::endl;
                }
                break;
            default:
                std::cout << "Gecersiz secim, lutfen tekrar deneyin." << std::endl;
        }

        // Kullanıcıya programı tekrar çalıştırmak isteyip istemediğini sor
        std::cout << "Baska bir islem yapmak ister misiniz? (E/e - Evet, H/h - Hayir): ";
        std::cin >> devam;
    } while (devam == 'E' || devam == 'e');

    return 0;
}


/*


Notlar: 
    // Birden fazla parametreyi kullanarak çıktı vermek
    std::cout << "Girdiginiz birinci sayi: " << sayi1 << ", ikinci sayi: " << sayi2 << std::endl;






    static_cast<int>(sayi2) ifadesi, sayi2 değişkenini int (tamsayı) türüne dönüştürmek için kullanılır. 
    static_cast C++'ta bir tür dönüşüm operatörüdür ve belirli bir türdeki değişkeni 
    başka bir türe güvenli bir şekilde dönüştürmek için kullanılır.





    #include <iostream>

    int main() {
        double sayi1, sayi2;

        std::cout << "Bir ondalikli sayi girin: ";
        std::cin >> sayi1;

        std::cout << "Bir baska ondalikli sayi girin: ";
        std::cin >> sayi2;

        // static_cast kullanarak sayi2'yi int türüne dönüştürüyoruz
        int tamSayi2 = static_cast<int>(sayi2);

        std::cout << "Girdiginiz birinci sayi: " << sayi1 << std::endl;
        std::cout << "Girdiginiz ikinci sayi (ondalikli): " << sayi2 << std::endl;
        std::cout << "Ikinci sayinin tam sayi hali: " << tamSayi2 << std::endl;

        return 0;
    }





 */
