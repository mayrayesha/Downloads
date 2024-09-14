#include <iostream>
#include <string>

int main() {
    // Mendeklarasikan variabel 
    std::string inputJumlah, inputHarga;
    double jumlah, harga, totalBiaya;
    
    // Menampilkan pesan soal cerita 1
    std::cout << "Anda akan membeli sejumlah kelereng. Masukkan jumlah kelereng: ";
    std::getline(std::cin, inputJumlah);
    std::cout << "Masukkan harga per kelereng: ";
    std::getline(std::cin, inputHarga);

    // Mengkonversi string ke double
    try {
        jumlah = std::stod(inputJumlah);
        harga = std::stod(inputHarga);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Input tidak valid. Harap masukkan angka yang benar." << std::endl;
        return 1; // Keluar dari program dengan kode kesalahan
    }

    // Menghitung total biaya
    totalBiaya = jumlah * harga;

    // Menampilkan hasil
    std::cout << "Total biaya untuk " << jumlah << " buah kelereng dengan harga per barang " << harga 
              << " adalah " << totalBiaya << "." << std::endl;

    return 0;
}