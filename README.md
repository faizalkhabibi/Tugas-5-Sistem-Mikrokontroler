# Tugas-5-Sistem-Mikrokontroler# Pedestrian Traffic Light System

Sistem kendali lampu lalu lintas penyeberangan jalan (Pelican Crossing) berbasis Arduino Uno. Proyek ini mensimulasikan lampu lalu lintas yang akan berubah menjadi merah bagi kendaraan dan hijau bagi pejalan kaki hanya ketika tombol penyeberangan ditekan.

## 📝 Deskripsi Proyek
Proyek ini merupakan Tugas 5 dari mata kuliah Sistem Mikrokontroler. Sistem dirancang untuk mengoptimalkan arus lalu lintas sekaligus menjamin keamanan pejalan kaki dengan menggunakan logika *state-driven* berdasarkan input tombol.

## 🚀 Fitur Utama
- **Demand-Based:** Lampu hanya berubah jika ada penyeberang.
- **Safety Transition:** Dilengkapi dengan lampu kuning sebagai peringatan bagi pengendara sebelum berhenti.
- **Synchronized Pedestrian Lights:** Mendukung dua sisi penyeberangan secara bersamaan (paralel).
- **Internal Pull-Up:** Rangkaian efisien tanpa resistor tombol eksternal.

## 🛠️ Komponen
| Komponen | Pin Arduino |
|---|---|
| LED Merah (Mobil) | 13 |
| LED Kuning (Mobil) | 12 |
| LED Hijau (Mobil) | 11 |
| LED Merah (Pedestrian) | 10 |
| LED Hijau (Pedestrian) | 9 |
| Push Button | 2 |

## 🔧 Cara Penggunaan
1. Buka file `.ino` di Arduino IDE atau copy kodenya ke [Tinkercad](https://www.tinkercad.com/things/7a2D4VOBF2X-tugas-5-pedestrian-interrupt-traffic-light?sharecode=LYZpYhOfNycWU9MtUFC0pILVfDcgtfPCpbJtXYKa7vU).
2. Rakit rangkaian sesuai dengan daftar pin di atas.
3. Unggah kode ke papan Arduino Uno.
4. Tekan tombol untuk memulai simulasi penyeberangan jalan.


---
**Author:** [Muhammad Faizal Khabibi] | NIM: [H1H024003]
